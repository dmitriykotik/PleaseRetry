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

class ISteamUserStats007 {
public:
    virtual bool RequestCurrentStats() = 0;

    virtual bool GetStat(const char *pchName, int32 *pData) = 0;

    virtual bool GetStat(const char *pchName, float *pData) = 0;

    virtual bool SetStat(const char *pchName, int32 nData) = 0;

    virtual bool SetStat(const char *pchName, float fData) = 0;

    virtual bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength) = 0;

    virtual bool GetAchievement(const char *pchName, bool *pbAchieved) = 0;

    virtual bool SetAchievement(const char *pchName) = 0;

    virtual bool ClearAchievement(const char *pchName) = 0;

    virtual bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime) = 0;

    virtual bool StoreStats() = 0;

    virtual int GetAchievementIcon(const char *pchName) = 0;

    virtual const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey) = 0;

    virtual bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress) = 0;

    virtual SteamAPICall_t RequestUserStats(CSteamID steamIDUser) = 0;

    virtual bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData) = 0;

    virtual bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData) = 0;

    virtual bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved) = 0;

    virtual bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime) = 0;

    virtual bool ResetAllStats(bool bAchievementsToo) = 0;

    virtual SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType) = 0;

    virtual SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName) = 0;

    virtual const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) = 0;

    virtual int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) = 0;

    virtual ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) = 0;

    virtual ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) = 0;

    virtual SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) = 0;

    virtual bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax) = 0;

    virtual SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount) = 0;

    virtual SteamAPICall_t GetNumberOfCurrentPlayers() = 0;
};

#define STEAMUSERSTATS_INTERFACE_VERSION_007 "STEAMUSERSTATS_INTERFACE_VERSION007"