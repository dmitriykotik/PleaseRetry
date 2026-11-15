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

#include "isteammatchmakingservers.h"

class ISteamMatchmakingServers001 {
public:
	virtual void RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponseLegacy *pRequestServersResponse) = 0;

	virtual void RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponseLegacy *pRequestServersResponse) = 0;

	virtual void RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponseLegacy *pRequestServersResponse) = 0;

	virtual void RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponseLegacy *pRequestServersResponse) = 0;

	virtual void RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponseLegacy *pRequestServersResponse) = 0;

	virtual void RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponseLegacy *pRequestServersResponse) = 0;

	virtual gameserveritem_t *GetServerDetails(EMatchMakingType eType, int iServer) = 0;

	virtual void CancelQuery(EMatchMakingType eType) = 0;

	virtual void RefreshQuery(EMatchMakingType eType) = 0;

	virtual bool IsRefreshing(EMatchMakingType eType) = 0;

	virtual int GetServerCount(EMatchMakingType eType) = 0;

	virtual void RefreshServer(EMatchMakingType eType, int iServer) = 0;

	virtual HServerQuery PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse) = 0;

	virtual HServerQuery PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse) = 0;

	virtual HServerQuery ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse) = 0;

	virtual void CancelServerQuery(HServerQuery hServerQuery) = 0;
};

#define STEAMMATCHMAKINGSERVERS_INTERFACE_VERSION_001 "SteamMatchMakingServers001"