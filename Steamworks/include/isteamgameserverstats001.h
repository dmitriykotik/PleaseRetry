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

#include "isteamgameserverstats.h"

class ISteamGameServerStats001 {
public:
    virtual SteamAPICall_t RequestUserStats(CSteamID steamIDUser) = 0;

	virtual bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData) = 0;

	virtual bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData) = 0;

	virtual bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved) = 0;

	virtual bool SetUserStat(CSteamID steamIDUser, const char *pchName, int32 nData) = 0;

	virtual bool SetUserStat(CSteamID steamIDUser, const char *pchName, float fData) = 0;

	virtual bool UpdateUserAvgRateStat(CSteamID steamIDUser, const char *pchName, float flCountThisSession, double dSessionLength) = 0;

	virtual bool SetUserAchievement(CSteamID steamIDUser, const char *pchName) = 0;
	
	virtual bool ClearUserAchievement(CSteamID steamIDUser, const char *pchName) = 0;

	virtual SteamAPICall_t StoreUserStats(CSteamID steamIDUser) = 0;
};

#define STEAMGAMESERVERSTATS_INTERFACE_VERSION_001 "SteamGameServerStats001"