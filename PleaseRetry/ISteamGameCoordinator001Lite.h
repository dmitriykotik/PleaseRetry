#pragma once

#include <winsock2.h>
#include <ws2tcpip.h>
#include <thread>
#include <mutex>
#include <queue>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "SSE_PDK/SSE_PDK.h"
#include "SSE_PDK/OSW/ISteamGameCoordinator001.h"

#pragma comment(lib, "ws2_32.lib")

struct GCMessage {
    uint32 unMsgType;
    std::vector<uint8_t> data;
};

struct Config {
    std::string ip = "127.0.0.1";
    uint16 port = 27010;
    std::vector<std::pair<uint32, uint32>> ranges;
    std::vector<uint32> specificIds;
};

class ISteamGameCoordinator001Lite : public ISteamGameCoordinator001 {
private:
    ISteamGameCoordinator001* m_pOriginal;
    CApi* m_api;
    Config m_Config;

    SOCKET m_Socket;
    bool m_bConnected;
    bool m_bRunThread;

    std::thread m_RecvThread;
    std::queue<GCMessage> m_Queue;
    std::mutex m_Mtx;

    void LoadConfiguration(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            m_api->Log("PleaseRetry: Config file not found, using defaults.");
            return;
        }

        std::string line;
        while (std::getline(file, line)) {
            line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
            if (line.empty() || line[0] == '#' || line[0] == ';') continue;

            auto delimiterPos = line.find('=');
            if (delimiterPos == std::string::npos) continue;

            std::string key = line.substr(0, delimiterPos);
            std::string value = line.substr(delimiterPos + 1);

            if (key == "ip") m_Config.ip = value;
            else if (key == "port") m_Config.port = (uint16)std::stoi(value);
            else if (key == "ranges") {
                std::stringstream ss(value);
                std::string range;
                while (std::getline(ss, range, ',')) {
                    auto dash = range.find('-');
                    if (dash != std::string::npos) {
                        uint32 start = std::stoul(range.substr(0, dash));
                        uint32 end = std::stoul(range.substr(dash + 1));
                        m_Config.ranges.push_back({ start, end });
                    }
                }
            }
            else if (key == "ids") {
                std::stringstream ss(value);
                std::string id;
                while (std::getline(ss, id, ',')) {
                    m_Config.specificIds.push_back(std::stoul(id));
                }
            }
        }
        m_api->Log("PleaseRetry: Config loaded. IP: %s, Port: %u", m_Config.ip.c_str(), m_Config.port);
    }

    bool ShouldIntercept(uint32 msgType) {
        uint32 rawType = msgType & 0x7FFFFFFF;

        for (uint32 id : m_Config.specificIds) {
            if (rawType == id) return true;
        }

        for (const auto& range : m_Config.ranges) {
            if (rawType >= range.first && rawType <= range.second) return true;
        }

        return false;
    }

    void ReceiveLoop() {
        while (m_bRunThread) {
            uint32 header[2];
            int n = recv(m_Socket, (char*)header, 8, MSG_WAITALL);
            if (n <= 0) break;

            uint32 msgType = header[0];
            uint32 msgSize = header[1];

            std::vector<uint8_t> payload(msgSize);
            if (msgSize > 0) {
                recv(m_Socket, (char*)payload.data(), msgSize, MSG_WAITALL);
            }

            {
                std::lock_guard<std::mutex> lock(m_Mtx);
                m_Queue.push({ msgType, payload });
            }

            m_api->Log("PleaseRetry: Received %u from server. Queue size: %zu", msgType, m_Queue.size());

            GCMessageAvailable_t info;
            info.m_nMessageSize = msgSize;
            m_api->PostCallback(0, 0, (int)GCMessageAvailable_t::k_iCallback, &info, (uint32)sizeof(info));
        }
        m_bConnected = false;
    }

public:
    ISteamGameCoordinator001Lite(ISteamGameCoordinator001* original, CApi* api)
        : m_pOriginal(original), m_api(api), m_Socket(INVALID_SOCKET), m_bConnected(false), m_bRunThread(true)
    {
        LoadConfiguration("pleaseretry.ini");

        WSADATA wsa;
        WSAStartup(MAKEWORD(2, 2), &wsa);

        m_Socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

        sockaddr_in addr;
        addr.sin_family = AF_INET;
        addr.sin_port = htons(m_Config.port);
        inet_pton(AF_INET, m_Config.ip.c_str(), &addr.sin_addr);

        if (connect(m_Socket, (sockaddr*)&addr, sizeof(addr)) != SOCKET_ERROR) {
            m_bConnected = true;
            m_api->Log("PleaseRetry: Connected to GC server!");
            m_RecvThread = std::thread(&ISteamGameCoordinator001Lite::ReceiveLoop, this);
        }
        else {
            m_api->Log("PleaseRetry: Server %s:%u not found.", m_Config.ip.c_str(), m_Config.port);
        }
    }

    virtual ~ISteamGameCoordinator001Lite() {
        m_bRunThread = false;
        if (m_Socket != INVALID_SOCKET) closesocket(m_Socket);
        if (m_RecvThread.joinable()) m_RecvThread.join();
        WSACleanup();
    }

    virtual EGCResults RetrieveMessage(uint32* punMsgType, void* pubDest, uint32 cubDest, uint32* pcubMsgSize) override {
        std::lock_guard<std::mutex> lock(m_Mtx);

        if (!m_Queue.empty()) {
            GCMessage& msg = m_Queue.front();
            if (cubDest < msg.data.size()) return k_EGCResultBufferTooSmall;

            if (punMsgType) *punMsgType = msg.unMsgType;
            if (pcubMsgSize) *pcubMsgSize = (uint32)msg.data.size();

            memcpy(pubDest, msg.data.data(), msg.data.size());
            m_Queue.pop();
            return k_EGCResultOK;
        }

        EGCResults res = m_pOriginal->RetrieveMessage(punMsgType, pubDest, cubDest, pcubMsgSize);

        if (res == k_EGCResultOK && punMsgType) {
            if (ShouldIntercept(*punMsgType)) {
                uint32 header[2] = { *punMsgType, *pcubMsgSize };
                send(m_Socket, (char*)header, 8, 0);
                send(m_Socket, (char*)pubDest, *pcubMsgSize, 0);

                return k_EGCResultNoMessage;
            }
        }

        return res;
    }

    virtual EGCResults SendMessage(uint32 unMsgType, const void* pubData, uint32 cubData) override {
        if (m_bConnected && ShouldIntercept(unMsgType)) {
            uint32 header[2] = { unMsgType, cubData };
            send(m_Socket, (char*)header, 8, 0);
            if (cubData > 0) send(m_Socket, (char*)pubData, cubData, 0);
        }
        return m_pOriginal->SendMessage(unMsgType, pubData, cubData);
    }

    virtual bool IsMessageAvailable(uint32* pcubMsgSize) override {
        std::lock_guard<std::mutex> lock(m_Mtx);
        if (m_Queue.empty()) return m_pOriginal->IsMessageAvailable(pcubMsgSize);

        if (pcubMsgSize) *pcubMsgSize = (uint32)m_Queue.front().data.size();
        return true;
    }
};