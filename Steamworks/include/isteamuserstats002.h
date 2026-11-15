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

#include "isteamuserstats.h"

class ISteamUserStats002 {
public:
    virtual uint32 GetNumStats(CGameID nGameID) = 0;

    virtual const char *GetStatName(CGameID nGameID, uint32 iStat) = 0;

    virtual ESteamUserStatType GetStatType(CGameID nGameID, const char *pchName) = 0;

    virtual uint32 GetNumAchievements(CGameID nGameID) = 0;

    virtual const char *GetAchievementName(CGameID nGameID, uint32 iAchievement) = 0;

    virtual bool RequestCurrentStats(CGameID nGameID) = 0;

    virtual bool GetStat(CGameID nGameID, const char *pchName, int32 *pData) = 0;

    virtual bool GetStat(CGameID nGameID, const char *pchName, float *pData) = 0;

    virtual bool SetStat(CGameID nGameID, const char *pchName, int32 nData) = 0;

    virtual bool SetStat(CGameID nGameID, const char *pchName, float fData) = 0;

    virtual bool UpdateAvgRateStat(CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength) = 0;

    virtual bool GetAchievement(CGameID nGameID, const char *pchName, bool *pbAchieved) = 0;

    virtual bool SetAchievement(CGameID nGameID, const char *pchName) = 0;

    virtual bool ClearAchievement(CGameID nGameID, const char *pchName) = 0;

    virtual bool StoreStats(CGameID nGameID) = 0;

    virtual int GetAchievementIcon(CGameID nGameID, const char *pchName) = 0;

    virtual const char *GetAchievementDisplayAttribute(CGameID nGameID, const char *pchName, const char *pchKey) = 0;

    virtual bool IndicateAchievementProgress(CGameID nGameID, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress) = 0;
};

#define STEAMUSERSTATS_INTERFACE_VERSION_002 "STEAMUSERSTATS_INTERFACE_VERSION002"