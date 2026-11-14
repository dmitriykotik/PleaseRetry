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

#include "isteamnetworkingmessages.h"

class ISteamNetworkingMessages002 {
public:
	virtual EResult SendMessageToUser(const SteamNetworkingIdentity &identityRemote, const void *pubData, uint32 cubData, int nSendFlags, int nRemoteChannel) = 0;

	virtual int ReceiveMessagesOnChannel(int nLocalChannel, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) = 0;

	virtual bool AcceptSessionWithUser(const SteamNetworkingIdentity &identityRemote) = 0;

	virtual bool CloseSessionWithUser(const SteamNetworkingIdentity &identityRemote) = 0;

	virtual bool CloseChannelWithUser(const SteamNetworkingIdentity &identityRemote, int nLocalChannel) = 0;

	virtual ESteamNetworkingConnectionState GetSessionConnectionInfo(const SteamNetworkingIdentity &identityRemote, SteamNetConnectionInfo_t *pConnectionInfo, SteamNetConnectionRealTimeStatus_t *pQuickStatus) = 0;
};

#define STEAMNETWORKINGMESSAGES_INTERFACE_VERSION_002 "SteamNetworkingMessages002"