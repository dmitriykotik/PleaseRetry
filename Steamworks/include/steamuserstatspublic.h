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

#include "steamtypes.h"
#include "steamclientpublic.h"
#include "steamapiinternal.h"
#include "steamugcpublic.h"

enum { k_cchStatNameMax = 128 };
enum { k_cchLeaderboardNameMax = 128 };
enum { k_cLeaderboardDetailsMax = 64 };

typedef uint64 SteamLeaderboard_t;
typedef uint64 SteamLeaderboardEntries_t;

enum ELeaderboardDataRequest {
	k_ELeaderboardDataRequestGlobal = 0,
	k_ELeaderboardDataRequestGlobalAroundUser = 1,
	k_ELeaderboardDataRequestFriends = 2,
	k_ELeaderboardDataRequestUsers = 3
};

enum ELeaderboardSortMethod {
	k_ELeaderboardSortMethodNone = 0,
	k_ELeaderboardSortMethodAscending = 1,
	k_ELeaderboardSortMethodDescending = 2,
};

enum ELeaderboardDisplayType {
	k_ELeaderboardDisplayTypeNone = 0, 
	k_ELeaderboardDisplayTypeNumeric = 1,
	k_ELeaderboardDisplayTypeTimeSeconds = 2,
	k_ELeaderboardDisplayTypeTimeMilliSeconds = 3,
};

enum ELeaderboardUploadScoreMethod {
	k_ELeaderboardUploadScoreMethodNone = 0,
	k_ELeaderboardUploadScoreMethodKeepBest = 1,
	k_ELeaderboardUploadScoreMethodForceUpdate = 2,
};

#if defined(PR_CALLBACK_PACK_SMALL)
	#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
	#pragma pack(push, 8)
#else
	#error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

struct LeaderboardEntry_t {
	CSteamID m_steamIDUser;
	int32 m_nGlobalRank;
	int32 m_nScore;
	int32 m_cDetails;
	UGCHandle_t m_hUGC;
};

struct UserStatsReceived_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 1 };
	uint64 m_nGameID;
	EResult	m_eResult;
	CSteamID m_steamIDUser;
};

struct UserStatsStored_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 2 };
	uint64 m_nGameID;
	EResult	m_eResult;
};

struct UserAchievementStored_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 3 };

	uint64 m_nGameID;
	bool m_bGroupAchievement;
	char m_rgchAchievementName[k_cchStatNameMax];
	uint32 m_nCurProgress;
	uint32 m_nMaxProgress;
};

struct LeaderboardFindResult_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 4 };
	SteamLeaderboard_t m_hSteamLeaderboard;
	uint8 m_bLeaderboardFound;
};

struct LeaderboardScoresDownloaded_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 5 };
	SteamLeaderboard_t m_hSteamLeaderboard;
	SteamLeaderboardEntries_t m_hSteamLeaderboardEntries;
	int m_cEntryCount;
};

struct LeaderboardScoreUploaded_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 6 };
	uint8 m_bSuccess;
	SteamLeaderboard_t m_hSteamLeaderboard;
	int32 m_nScore;
	uint8 m_bScoreChanged;
	int m_nGlobalRankNew;
	int m_nGlobalRankPrevious;
};

struct NumberOfCurrentPlayers_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 7 };
	uint8 m_bSuccess;
	int32 m_cPlayers;
};

struct UserStatsUnloaded_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 8 };
	CSteamID m_steamIDUser;
};

struct UserAchievementIconFetched_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 9 };

	CGameID	m_nGameID;
	char m_rgchAchievementName[k_cchStatNameMax];
	bool m_bAchieved;
	int	m_nIconHandle;
};

struct GlobalAchievementPercentagesReady_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 10 };

	uint64 m_nGameID;
	EResult	m_eResult;
};

struct LeaderboardUGCSet_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 11 };
	EResult m_eResult;
	SteamLeaderboard_t m_hSteamLeaderboard;
};

struct GlobalStatsReceived_t {
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 12 };
	uint64	m_nGameID;
	EResult	m_eResult;
};

#pragma pack(pop)