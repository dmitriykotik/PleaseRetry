//========= Copyright (C) 2026, dmitriykotik. Released under the MIT License. ==//
// This file is part of PleaseRetryEmu, an open-source project. This software
// is provided "AS IS", without warranty of any kind, express or implied,
// including but not limited to the warranties of merchantability, fitness
// for a particular purpose and noninfringement.
//
// LEGAL NOTICE: This software is an independent compatibility layer and is NOT
// affiliated with, endorsed, or authorized by Valve Corporation. "Steam" and
// "Steamworks" are registered trademarks of Valve Corporation.
//
// Developed strictly for EDUCATIONAL, RESEARCH, and software preservation
// purposes. The author holds NO LIABILITY for any misuse, legal consequences,
// or third-party restrictions. All actions are performed at your own risk.
//=============================================================================//

#pragma once

#include "isteamnetworkingsockets.h"

class ISteamNetworkingSockets013 {
public:
	virtual HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions) = 0;

	virtual HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address, int nOptions, const SteamNetworkingConfigValue_t *pOptions) = 0;

	virtual HSteamListenSocket CreateListenSocketP2P(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions) = 0;

	virtual HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions) = 0;

	virtual EResult AcceptConnection(HSteamNetConnection hConn) = 0;

	virtual bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger) = 0;

	virtual bool CloseListenSocket(HSteamListenSocket hSocket) = 0;

	virtual bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData) = 0;

	virtual int64 GetConnectionUserData(HSteamNetConnection hPeer) = 0;

	virtual void SetConnectionName(HSteamNetConnection hPeer, const char *pszName) = 0;

	virtual bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen) = 0;

	virtual EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber) = 0;

	virtual void SendMessages(int nMessages, SteamNetworkingMessage_t **pMessages, int64 *pOutMessageNumberOrResult, bool bDeleteFailedMessages) = 0;

	virtual EResult FlushMessagesOnConnection(HSteamNetConnection hConn) = 0;

	virtual int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) = 0;

	virtual bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo) = 0;

	virtual EResult GetConnectionRealTimeStatus(HSteamNetConnection hConn, SteamNetConnectionRealTimeStatus_t *pStatus, int nLanes, SteamNetConnectionRealTimeLaneStatus_t *pLanes) = 0;

	virtual int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf) = 0;

	virtual bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address) = 0;

	virtual bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pPeerIdentity1, const SteamNetworkingIdentity *pPeerIdentity2) = 0;

	virtual EResult ConfigureConnectionLanes(HSteamNetConnection hConn, int nNumLanes, const int *pLanePriorities, const uint16 *pLaneWeights) = 0;

	virtual bool GetIdentity(SteamNetworkingIdentity *pIdentity) = 0;

	virtual ESteamNetworkingAvailability InitAuthentication() = 0;

	virtual ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails) = 0;

	virtual HSteamNetPollGroup CreatePollGroup() = 0;

	virtual bool DestroyPollGroup(HSteamNetPollGroup hPollGroup) = 0;

	virtual bool SetConnectionPollGroup(HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup) = 0;

	virtual int ReceiveMessagesOnPollGroup(HSteamNetPollGroup hPollGroup, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) = 0;

	virtual bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket) = 0;

	virtual int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket) = 0;

	virtual HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions) = 0;

	virtual uint16 GetHostedDedicatedServerPort() = 0;

	virtual SteamNetworkingPOPID GetHostedDedicatedServerPOPID() = 0;

	virtual EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting) = 0;

	virtual HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions) = 0;

	virtual EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob) = 0;

	virtual HSteamNetConnection ConnectP2PCustomSignaling(ISteamNetworkingConnectionSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions) = 0;

	virtual bool ReceivedP2PCustomSignal(const void *pMsg, int cbMsg, ISteamNetworkingSignalingRecvContext *pContext) = 0;

	virtual bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg) = 0;

	virtual bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg) = 0;

	virtual void ResetIdentity(const SteamNetworkingIdentity *pIdentity) = 0;

	virtual void RunCallbacks() = 0;

	virtual bool BeginAsyncRequestFakeIP(int nNumPorts) = 0;

	virtual void GetFakeIP(int idxFirstPort, SteamNetworkingFakeIPResult_t *pInfo) = 0;

	virtual HSteamListenSocket CreateListenSocketP2PFakeIP(int idxFakePort, int nOptions, const SteamNetworkingConfigValue_t *pOptions) = 0;

	virtual EResult GetRemoteFakeIPForConnection(HSteamNetConnection hConn, SteamNetworkingIPAddr *pOutAddr) = 0;

	virtual ISteamNetworkingFakeUDPPort *CreateFakeUDPPort(int idxFakeServerPort) = 0;
};

#define STEAMNETWORKINGSOCKETS_INTERFACE_VERSION_013 "SteamNetworkingSockets013"