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

class ISteamNetworkingSockets003 {
public:
	virtual HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress) = 0;

	virtual HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address) = 0;

	virtual HSteamListenSocket CreateListenSocketP2P(int nVirtualPort) = 0;

	virtual HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nVirtualPort) = 0;

	virtual EResult AcceptConnection(HSteamNetConnection hConn) = 0;

	virtual bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger) = 0;

	virtual bool CloseListenSocket(HSteamListenSocket hSocket) = 0;

	virtual bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData) = 0;

	virtual int64 GetConnectionUserData(HSteamNetConnection hPeer) = 0;

	virtual void SetConnectionName(HSteamNetConnection hPeer, const char *pszName) = 0;

	virtual bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen) = 0;

	virtual EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags) = 0;

	virtual EResult FlushMessagesOnConnection(HSteamNetConnection hConn) = 0;

	virtual int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) = 0;

	virtual int ReceiveMessagesOnListenSocket(HSteamListenSocket hSocket, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) = 0;

	virtual bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo) = 0;

	virtual bool GetQuickConnectionStatus(HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats) = 0;

	virtual int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf) = 0;

	virtual bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address) = 0;

	virtual bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2) = 0;

	virtual bool GetIdentity(SteamNetworkingIdentity *pIdentity) = 0;

	virtual ESteamNetworkingAvailability InitAuthentication() = 0;

	virtual ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails) = 0;

	virtual bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg) = 0;

	virtual bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg) = 0;

	virtual bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket) = 0;

	virtual int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket) = 0;

	virtual HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nVirtualPort) = 0;

	virtual uint16 GetHostedDedicatedServerPort() = 0;

	virtual SteamNetworkingPOPID GetHostedDedicatedServerPOPID() = 0;

	virtual EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting) = 0;

	virtual HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nVirtualPort) = 0;

	virtual EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob) = 0;
};

#define STEAMNETWORKINGSOCKETS_INTERFACE_VERSION_003 "SteamNetworkingSockets003"