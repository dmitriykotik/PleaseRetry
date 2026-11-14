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

#include "isteamgamesearch.h"

class ISteamGameSearch001 {
public:
	virtual EGameSearchErrorCode_t AddGameSearchParams(const char *pchKeyToFind, const char *pchValuesToFind) = 0;

	virtual EGameSearchErrorCode_t SearchForGameWithLobby(CSteamID steamIDLobby, int nPlayerMin, int nPlayerMax) = 0;

	virtual EGameSearchErrorCode_t SearchForGameSolo(int nPlayerMin, int nPlayerMax) = 0;

	virtual EGameSearchErrorCode_t AcceptGame() = 0;

	virtual EGameSearchErrorCode_t DeclineGame() = 0;

	virtual EGameSearchErrorCode_t RetrieveConnectionDetails(CSteamID steamIDHost, char *pchConnectionDetails, int cubConnectionDetails) = 0;

	virtual EGameSearchErrorCode_t EndGameSearch() = 0;

	virtual EGameSearchErrorCode_t SetGameHostParams(const char *pchKey, const char *pchValue) = 0;

	virtual EGameSearchErrorCode_t SetConnectionDetails(const char *pchConnectionDetails, int cubConnectionDetails) = 0;

	virtual EGameSearchErrorCode_t RequestPlayersForGame(int nPlayerMin, int nPlayerMax, int nMaxTeamSize) = 0;

	virtual EGameSearchErrorCode_t HostConfirmGameStart(uint64 ullUniqueGameID) = 0;

	virtual EGameSearchErrorCode_t CancelRequestPlayersForGame() = 0;

	virtual EGameSearchErrorCode_t SubmitPlayerResult(uint64 ullUniqueGameID, CSteamID steamIDPlayer, EPlayerResult_t EPlayerResult) = 0;

	virtual EGameSearchErrorCode_t EndGame(uint64 ullUniqueGameID) = 0;
};

#define STEAMGAMESEARCH_INTERFACE_VERSION_001 "SteamMatchGameSearch001"