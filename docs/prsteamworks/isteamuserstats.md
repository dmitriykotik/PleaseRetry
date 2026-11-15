```
//==== PleaseRetryEmu / Copyright (C) 2026, dmitriykotik. MIT License. ========//
// This documentation is part of PleaseRetryEmu, an open-source project.
// This Software and documentation are provided strictly "AS IS", without
// warranty of any kind, express or implied.
//
// LEGAL NOTICE: This project is an independent compatibility layer and is NOT
// affiliated with, endorsed, or authorized by Valve Corporation. "Steam" and
// "Steamworks" are registered trademarks of Valve Corporation.
//
// Developed strictly for EDUCATIONAL, RESEARCH, and software preservation
// purposes. The author holds NO LIABILITY for any misuse, legal consequences,
// or third-party restrictions. All actions are performed at your own risk.
//=============================================================================//
```

# ISteamUserStats

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |   G    |
|   002   |   G    |
|   003   |  102   |
|   004   |  103   |
|   005   |  104   |
|   006   |  107   |
|   007   |  111   |
|   008   |   G    |
|   009   |  113   |
|   010   |  119   |
|   011   |  148a  |
|   012   |  160   |
|   013   |  165   |

```
001 - G
002 - G
003 - 100, 101, 102, G
004 - 103, G
005 - 104, G
006 - 105, 106, 107, G
007 - 108, 109, 110, 111, G
008 - G
009 - 112, 113, G
010 - 114, 115, 116, 117, 118, 119, G
011 - 120, 121, 122, 123a, 125, 126a, 127, 128, 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148a, G
012 - 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, G
013 - 161, 162, 163, 164, 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetNumStats(CGameID nGameID)` |
| 2 | `const char *GetStatName(CGameID nGameID, uint32 iStat)` |
| 3 | `ESteamUserStatType GetStatType(CGameID nGameID, const char *pchName)` |
| 4 | `uint32 GetNumAchievements(CGameID nGameID)` |
| 5 | `const char *GetAchievementName(CGameID nGameID, uint32 iAchievement)` |
| 6 | `uint32 GetNumGroupAchievements(CGameID nGameID)` |
| 7 | `const char *GetGroupAchievementName(CGameID nGameID, uint32 iAchievement)` |
| 8 | `bool RequestCurrentStats(CGameID nGameID)` |
| 9 | `bool GetStat(CGameID nGameID, const char *pchName, int32 *pData)` |
| 10 | `bool GetStat(CGameID nGameID, const char *pchName, float *pData)` |
| 11 | `bool SetStat(CGameID nGameID, const char *pchName, int32 nData)` |
| 12 | `bool SetStat(CGameID nGameID, const char *pchName, float fData)` |
| 13 | `bool UpdateAvgRateStat(CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength)` |
| 14 | `bool GetAchievement(CGameID nGameID, const char *pchName, bool *pbAchieved)` |
| 15 | `bool GetGroupAchievement(CGameID nGameID, const char *pchName, bool *pbAchieved)` |
| 16 | `bool SetAchievement(CGameID nGameID, const char *pchName)` |
| 17 | `bool SetGroupAchievement(CGameID nGameID, const char *pchName)` |
| 18 | `bool StoreStats(CGameID nGameID)` |
| 19 | `bool ClearAchievement(CGameID nGameID, const char *pchName)` |
| 20 | `bool ClearGroupAchievement(CGameID nGameID, const char *pchName)` |
| 21 | `int GetAchievementIcon(CGameID nGameID, const char *pchName)` |
| 22 | `const char *GetAchievementDisplayAttribute(CGameID nGameID, const char *pchName, const char *pchKey)` |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetNumStats(CGameID nGameID)` |
| 2 | `const char *GetStatName(CGameID nGameID, uint32 iStat)` |
| 3 | `ESteamUserStatType GetStatType(CGameID nGameID, const char *pchName)` |
| 4 | `uint32 GetNumAchievements(CGameID nGameID)` |
| 5 | `const char *GetAchievementName(CGameID nGameID, uint32 iAchievement)` |
| 6 | `bool RequestCurrentStats(CGameID nGameID)` |
| 7 | `bool GetStat(CGameID nGameID, const char *pchName, int32 *pData)` |
| 8 | `bool GetStat(CGameID nGameID, const char *pchName, float *pData)` |
| 9 | `bool SetStat(CGameID nGameID, const char *pchName, int32 nData)` |
| 10 | `bool SetStat(CGameID nGameID, const char *pchName, float fData)` |
| 11 | `bool UpdateAvgRateStat(CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength)` |
| 12 | `bool GetAchievement(CGameID nGameID, const char *pchName, bool *pbAchieved)` |
| 13 | `bool SetAchievement(CGameID nGameID, const char *pchName)` |
| 14 | `bool ClearAchievement(CGameID nGameID, const char *pchName)` |
| 15 | `bool StoreStats(CGameID nGameID)` |
| 16 | `int GetAchievementIcon(CGameID nGameID, const char *pchName)` |
| 17 | `const char *GetAchievementDisplayAttribute(CGameID nGameID, const char *pchName, const char *pchKey)` |
| 18 | `bool IndicateAchievementProgress(CGameID nGameID, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool StoreStats()` |
| 11 | `int GetAchievementIcon(const char *pchName)` |
| 12 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 13 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool StoreStats()` |
| 11 | `int GetAchievementIcon(const char *pchName)` |
| 12 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 13 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 14 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 15 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 16 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 17 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool StoreStats()` |
| 11 | `int GetAchievementIcon(const char *pchName)` |
| 12 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 13 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 14 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 15 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 16 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 17 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 18 | `bool ResetAllStats(bool bAchievementsToo)` |
| 19 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 20 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 21 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 22 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 23 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 24 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 25 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 26 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 27 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, int32 nScore, int32 *pScoreDetails, int cScoreDetailsCount)` |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool StoreStats()` |
| 11 | `int GetAchievementIcon(const char *pchName)` |
| 12 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 13 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 14 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 15 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 16 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 17 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 18 | `bool ResetAllStats(bool bAchievementsToo)` |
| 19 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 20 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 21 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 22 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 23 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 24 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 25 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 26 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 27 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` |
| 28 | `SteamAPICall_t GetNumberOfCurrentPlayers()` |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 11 | `bool StoreStats()` |
| 12 | `int GetAchievementIcon(const char *pchName)` |
| 13 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 14 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 15 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 16 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 17 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 18 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 19 | `bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 20 | `bool ResetAllStats(bool bAchievementsToo)` |
| 21 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 22 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 23 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 24 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 25 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 26 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 27 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 28 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 29 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` |
| 30 | `SteamAPICall_t GetNumberOfCurrentPlayers()` |

</details>
<!-- #endregion -->

<!-- #region 008 -->
<details style="margin-left: 20px">
<summary><b><code>008</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 11 | `bool StoreStats()` |
| 12 | `int GetAchievementIcon(const char *pchName)` |
| 13 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 14 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 15 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 16 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 17 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 18 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 19 | `bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 20 | `bool ResetAllStats(bool bAchievementsToo)` |
| 21 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 22 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 23 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 24 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 25 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 26 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 27 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 28 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 29 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` |
| 30 | `SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)` |
| 31 | `SteamAPICall_t GetNumberOfCurrentPlayers()` |

</details>
<!-- #endregion -->

<!-- #region 009 -->
<details style="margin-left: 20px">
<summary><b><code>009</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 11 | `bool StoreStats()` |
| 12 | `int GetAchievementIcon(const char *pchName)` |
| 13 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 14 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 15 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 16 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 17 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 18 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 19 | `bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 20 | `bool ResetAllStats(bool bAchievementsToo)` |
| 21 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 22 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 23 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 24 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 25 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 26 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 27 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 28 | `SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)` |
| 29 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 30 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` |
| 31 | `SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)` |
| 32 | `SteamAPICall_t GetNumberOfCurrentPlayers()` |
| 33 | `bool InstallPS3Trophies()` |
| 34 | `uint64 GetTrophySpaceRequiredBeforeInstall()` |
| 35 | `bool SetUserStatsData(const void *pvData, uint32 cubData)` |
| 36 | `bool GetUserStatsData(void *pvData, uint32 cubData, uint32 *pcubWritten)` |

</details>
<!-- #endregion -->

<!-- #region 010 -->
<details style="margin-left: 20px">
<summary><b><code>010</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 11 | `bool StoreStats()` |
| 12 | `int GetAchievementIcon(const char *pchName)` |
| 13 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 14 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 15 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 16 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 17 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 18 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 19 | `bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 20 | `bool ResetAllStats(bool bAchievementsToo)` |
| 21 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 22 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 23 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 24 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 25 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 26 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 27 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 28 | `SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)` |
| 29 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 30 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` |
| 31 | `SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)` |
| 32 | `SteamAPICall_t GetNumberOfCurrentPlayers()` |
| 33 | `SteamAPICall_t RequestGlobalAchievementPercentages()` |
| 34 | `int GetMostAchievedAchievementInfo(char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` |
| 35 | `int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` |
| 36 | `bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent)` |
| 37 | `SteamAPICall_t RequestGlobalStats(int nHistoryDays)` |
| 38 | `bool GetGlobalStat(const char *pchStatName, int64 *pData)` |
| 39 | `bool GetGlobalStat(const char *pchStatName, double *pData)` |
| 40 | `int32 GetGlobalStatHistory(const char *pchStatName, int64 *pData, uint32 cubData)` |
| 41 | `int32 GetGlobalStatHistory(const char *pchStatName, double *pData, uint32 cubData)` |
| 42 | `bool InstallPS3Trophies()` |
| 43 | `uint64 GetTrophySpaceRequiredBeforeInstall()` |
| 44 | `bool SetUserStatsData(const void *pvData, uint32 cubData)` |
| 45 | `bool GetUserStatsData(void *pvData, uint32 cubData, uint32 *pcubWritten)` |

</details>
<!-- #endregion -->

<!-- #region 011 -->
<details style="margin-left: 20px">
<summary><b><code>011</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 11 | `bool StoreStats()` |
| 12 | `int GetAchievementIcon(const char *pchName)` |
| 13 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 14 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 15 | `uint32 GetNumAchievements()` |
| 16 | `const char *GetAchievementName(uint32 iAchievement)` |
| 17 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 18 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 19 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 20 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 21 | `bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 22 | `bool ResetAllStats(bool bAchievementsToo)` |
| 23 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 24 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 25 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 26 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 27 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 28 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 29 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 30 | `SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)` |
| 31 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 32 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` |
| 33 | `SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)` |
| 34 | `SteamAPICall_t GetNumberOfCurrentPlayers()` |
| 35 | `SteamAPICall_t RequestGlobalAchievementPercentages()` |
| 36 | `int GetMostAchievedAchievementInfo(char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` |
| 37 | `int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` |
| 38 | `bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent)` |
| 39 | `SteamAPICall_t RequestGlobalStats(int nHistoryDays)` |
| 40 | `bool GetGlobalStat(const char *pchStatName, int64 *pData)` |
| 41 | `bool GetGlobalStat(const char *pchStatName, double *pData)` |
| 42 | `int32 GetGlobalStatHistory(const char *pchStatName, int64 *pData, uint32 cubData)` |
| 43 | `int32 GetGlobalStatHistory(const char *pchStatName, double *pData, uint32 cubData)` |
| 44 | `bool InstallPS3Trophies()` |
| 45 | `uint64 GetTrophySpaceRequiredBeforeInstall()` |
| 46 | `bool SetUserStatsData(const void *pvData, uint32 cubData)` |
| 47 | `bool GetUserStatsData(void *pvData, uint32 cubData, uint32 *pcubWritten)` |

</details>
<!-- #endregion -->

<!-- #region 012 -->
<details style="margin-left: 20px">
<summary><b><code>012</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool RequestCurrentStats()` |
| 2 | `bool GetStat(const char *pchName, int32 *pData)` |
| 3 | `bool GetStat(const char *pchName, float *pData)` |
| 4 | `bool SetStat(const char *pchName, int32 nData)` |
| 5 | `bool SetStat(const char *pchName, float fData)` |
| 6 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 7 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 8 | `bool SetAchievement(const char *pchName)` |
| 9 | `bool ClearAchievement(const char *pchName)` |
| 10 | `bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 11 | `bool StoreStats()` |
| 12 | `int GetAchievementIcon(const char *pchName)` |
| 13 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 14 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 15 | `uint32 GetNumAchievements()` |
| 16 | `const char *GetAchievementName(uint32 iAchievement)` |
| 17 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 18 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 19 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 20 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 21 | `bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 22 | `bool ResetAllStats(bool bAchievementsToo)` |
| 23 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 24 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 25 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 26 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 27 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 28 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 29 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 30 | `SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)` |
| 31 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 32 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` |
| 33 | `SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)` |
| 34 | `SteamAPICall_t GetNumberOfCurrentPlayers()` |
| 35 | `SteamAPICall_t RequestGlobalAchievementPercentages()` |
| 36 | `int GetMostAchievedAchievementInfo(char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` |
| 37 | `int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` |
| 38 | `bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent)` |
| 39 | `SteamAPICall_t RequestGlobalStats(int nHistoryDays)` |
| 40 | `bool GetGlobalStat(const char *pchStatName, int64 *pData)` |
| 41 | `bool GetGlobalStat(const char *pchStatName, double *pData)` |
| 42 | `int32 GetGlobalStatHistory(const char *pchStatName, int64 *pData, uint32 cubData)` |
| 43 | `int32 GetGlobalStatHistory(const char *pchStatName, double *pData, uint32 cubData)` |
| 44 | `bool GetAchievementProgressLimits(const char *pchName, int32 *pnMinProgress, int32 *pnMaxProgress)` |
| 45 | `bool GetAchievementProgressLimits(const char *pchName, float *pfMinProgress, float *pfMaxProgress)` |

</details>
<!-- #endregion -->

<!-- #region 013 -->
<details style="margin-left: 20px">
<summary><b><code>013</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool GetStat(const char *pchName, int32 *pData)` |
| 2 | `bool GetStat(const char *pchName, float *pData)` |
| 3 | `bool SetStat(const char *pchName, int32 nData)` |
| 4 | `bool SetStat(const char *pchName, float fData)` |
| 5 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` |
| 6 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` |
| 7 | `bool SetAchievement(const char *pchName)` |
| 8 | `bool ClearAchievement(const char *pchName)` |
| 9 | `bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 10 | `bool StoreStats()` |
| 11 | `int GetAchievementIcon(const char *pchName)` |
| 12 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` |
| 13 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` |
| 14 | `uint32 GetNumAchievements()` |
| 15 | `const char *GetAchievementName(uint32 iAchievement)` |
| 16 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` |
| 17 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` |
| 18 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` |
| 19 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` |
| 20 | `bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` |
| 21 | `bool ResetAllStats(bool bAchievementsToo)` |
| 22 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` |
| 23 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` |
| 24 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` |
| 25 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` |
| 26 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` |
| 27 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` |
| 28 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` |
| 29 | `SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)` |
| 30 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` |
| 31 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` |
| 32 | `SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)` |
| 33 | `SteamAPICall_t GetNumberOfCurrentPlayers()` |
| 34 | `SteamAPICall_t RequestGlobalAchievementPercentages()` |
| 35 | `int GetMostAchievedAchievementInfo(char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` |
| 36 | `int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` |
| 37 | `bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent)` |
| 38 | `SteamAPICall_t RequestGlobalStats(int nHistoryDays)` |
| 39 | `bool GetGlobalStat(const char *pchStatName, int64 *pData)` |
| 40 | `bool GetGlobalStat(const char *pchStatName, double *pData)` |
| 41 | `int32 GetGlobalStatHistory(const char *pchStatName, int64 *pData, uint32 cubData)` |
| 42 | `int32 GetGlobalStatHistory(const char *pchStatName, double *pData, uint32 cubData)` |
| 43 | `bool GetAchievementProgressLimits(const char *pchName, int32 *pnMinProgress, int32 *pnMaxProgress)` |
| 44 | `bool GetAchievementProgressLimits(const char *pchName, float *pfMinProgress, float *pfMaxProgress)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|Num|Methods|I. Versions|
| :-: | :- | :- |
| 1 | `SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)` | `008`, `009`, `010`, `011`, `012`, `013` |
| 2 | `bool ClearAchievement(CGameID nGameID, const char *pchName)` | `001`, `002` |
| 3 | `bool ClearAchievement(const char *pchName)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 4 | `bool ClearGroupAchievement(CGameID nGameID, const char *pchName)` | `001` |
| 5 | `SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 6 | `SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)` | `009`, `010`, `011`, `012`, `013` |
| 7 | `SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 8 | `SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 9 | `bool GetAchievement(CGameID nGameID, const char *pchName, bool *pbAchieved)` | `001`, `002` |
| 10 | `bool GetAchievement(const char *pchName, bool *pbAchieved)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 11 | `bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent)` | `010`, `011`, `012`, `013` |
| 12 | `bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` | `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 13 | `const char *GetAchievementDisplayAttribute(CGameID nGameID, const char *pchName, const char *pchKey)` | `001`, `002` |
| 14 | `const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 15 | `int GetAchievementIcon(CGameID nGameID, const char *pchName)` | `001`, `002` |
| 16 | `int GetAchievementIcon(const char *pchName)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 17 | `const char *GetAchievementName(CGameID nGameID, uint32 iAchievement)` | `001`, `002` |
| 18 | `const char *GetAchievementName(uint32 iAchievement)` | `011`, `012`, `013` |
| 19 | `bool GetAchievementProgressLimits(const char *pchName, int32 *pnMinProgress, int32 *pnMaxProgress)` | `012`, `013` |
| 20 | `bool GetAchievementProgressLimits(const char *pchName, float *pfMinProgress, float *pfMaxProgress)` | `012`, `013` |
| 21 | `bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 22 | `bool GetGlobalStat(const char *pchStatName, int64 *pData)` | `010`, `011`, `012`, `013` |
| 23 | `bool GetGlobalStat(const char *pchStatName, double *pData)` | `010`, `011`, `012`, `013` |
| 24 | `int32 GetGlobalStatHistory(const char *pchStatName, int64 *pData, uint32 cubData)` | `010`, `011`, `012`, `013` |
| 25 | `int32 GetGlobalStatHistory(const char *pchStatName, double *pData, uint32 cubData)` | `010`, `011`, `012`, `013` |
| 26 | `bool GetGroupAchievement(CGameID nGameID, const char *pchName, bool *pbAchieved)` | `001` |
| 27 | `const char *GetGroupAchievementName(CGameID nGameID, uint32 iAchievement)` | `001` |
| 28 | `ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 29 | `int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 30 | `const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 31 | `ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 32 | `int GetMostAchievedAchievementInfo(char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` | `010`, `011`, `012`, `013` |
| 33 | `int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)` | `010`, `011`, `012`, `013` |
| 34 | `uint32 GetNumAchievements(CGameID nGameID)` | `001`, `002` |
| 35 | `uint32 GetNumAchievements()` | `011`, `012`, `013` |
| 36 | `SteamAPICall_t GetNumberOfCurrentPlayers()` | `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 37 | `uint32 GetNumGroupAchievements(CGameID nGameID)` | `001` |
| 38 | `uint32 GetNumStats(CGameID nGameID)` | `001`, `002` |
| 39 | `bool GetStat(CGameID nGameID, const char *pchName, int32 *pData)` | `001`, `002` |
| 40 | `bool GetStat(CGameID nGameID, const char *pchName, float *pData)` | `001`, `002` |
| 41 | `bool GetStat(const char *pchName, int32 *pData)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 42 | `bool GetStat(const char *pchName, float *pData)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 43 | `const char *GetStatName(CGameID nGameID, uint32 iStat)` | `001`, `002` |
| 44 | `ESteamUserStatType GetStatType(CGameID nGameID, const char *pchName)` | `001`, `002` |
| 45 | `uint64 GetTrophySpaceRequiredBeforeInstall()` | `009`, `010`, `011` |
| 46 | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)` | `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 47 | `bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)` | `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 48 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)` | `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 49 | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)` | `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 50 | `bool GetUserStatsData(void *pvData, uint32 cubData, uint32 *pcubWritten)` | `009`, `010`, `011` |
| 51 | `bool IndicateAchievementProgress(CGameID nGameID, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` | `002` |
| 52 | `bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 53 | `bool InstallPS3Trophies()` | `009`, `010`, `011` |
| 54 | `bool RequestCurrentStats(CGameID nGameID)` | `001`, `002` |
| 55 | `bool RequestCurrentStats()` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012` |
| 56 | `SteamAPICall_t RequestGlobalAchievementPercentages()` | `010`, `011`, `012`, `013` |
| 57 | `SteamAPICall_t RequestGlobalStats(int nHistoryDays)` | `010`, `011`, `012`, `013` |
| 58 | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)` | `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 59 | `bool ResetAllStats(bool bAchievementsToo)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 60 | `bool SetAchievement(CGameID nGameID, const char *pchName)` | `001`, `002` |
| 61 | `bool SetAchievement(const char *pchName)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 62 | `bool SetGroupAchievement(CGameID nGameID, const char *pchName)` | `001` |
| 63 | `bool SetStat(CGameID nGameID, const char *pchName, int32 nData)` | `001`, `002` |
| 64 | `bool SetStat(CGameID nGameID, const char *pchName, float fData)` | `001`, `002` |
| 65 | `bool SetStat(const char *pchName, int32 nData)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 66 | `bool SetStat(const char *pchName, float fData)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 67 | `bool SetUserStatsData(const void *pvData, uint32 cubData)` | `009`, `010`, `011` |
| 68 | `bool StoreStats(CGameID nGameID)` | `001`, `002` |
| 69 | `bool StoreStats()` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 70 | `bool UpdateAvgRateStat(CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength)` | `001`, `002` |
| 71 | `bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 72 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, int32 nScore, int32 *pScoreDetails, int cScoreDetailsCount)` | `005` |
| 73 | `SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)` | `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |

</details>
<!-- #endregion -->

</details>
<!-- #endregion -->

<!-- #region Disclaimer -->
```
// ---- DISCLAIMER -------------------------------------------------------------- //
// Официальная документация отсутствует. Данные могут быть неточными или сырыми.
// Если вы нашли ошибку, пожалуйста, исправьте её или создайте Issue/PR.
// ------------------------------------------------------------------------------ //
```
<!-- #endregion -->

<!-- #region Doc -->
```cpp
class ISteamUserStats;
```

Описание класса.

## Method
```cpp
Type Method(typeVar variable)
```

| Название   | Тип       | Описание             |
| :--------- | :-------- | :------------------- |
| `variable` | `typeVar` | Описание переменной. |

Описание метода.

**Возвращает:** `Type`\
Описание возвращаемого значения.

> [!WARNING]
> На данный момент это лишь прототип документации.
<!-- #endregion -->