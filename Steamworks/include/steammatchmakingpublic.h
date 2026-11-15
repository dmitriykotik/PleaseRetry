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

#include <stdio.h>
#include <string.h>
#include "steamtypes.h"
#include "steamclientpublic.h"
#include "steamapiinternal.h"

enum ELobbyType {
	k_ELobbyTypePrivate = 0,
	k_ELobbyTypeFriendsOnly = 1,
	k_ELobbyTypePublic = 2,
	k_ELobbyTypeInvisible = 3,
	k_ELobbyTypePrivateUnique = 4,
};

enum ELobbyComparison {
	k_ELobbyComparisonEqualToOrLessThan = -2,
	k_ELobbyComparisonLessThan = -1,
	k_ELobbyComparisonEqual = 0,
	k_ELobbyComparisonGreaterThan = 1,
	k_ELobbyComparisonEqualToOrGreaterThan = 2,
	k_ELobbyComparisonNotEqual = 3,
};

enum ELobbyDistanceFilter {
	k_ELobbyDistanceFilterClose,
	k_ELobbyDistanceFilterDefault,
	k_ELobbyDistanceFilterFar,
	k_ELobbyDistanceFilterWorldwide,
};

typedef void* HServerListRequest;

typedef int HServerQuery;
const int HSERVERQUERY_INVALID = 0xffffffff;

const uint32 k_unFavoriteFlagNone = 0x00;
const uint32 k_unFavoriteFlagFavorite = 0x01;
const uint32 k_unFavoriteFlagHistory = 0x02;

enum EChatMemberStateChange {
	k_EChatMemberStateChangeEntered	= 0x0001,
	k_EChatMemberStateChangeLeft = 0x0002,
	k_EChatMemberStateChangeDisconnected = 0x0004,
	k_EChatMemberStateChangeKicked = 0x0008,
	k_EChatMemberStateChangeBanned = 0x0010,
};

enum ESteamPartyBeaconLocationType {
	k_ESteamPartyBeaconLocationType_Invalid = 0,
	k_ESteamPartyBeaconLocationType_ChatGroup = 1,
	k_ESteamPartyBeaconLocationType_Max,
};

#if defined(PR_CALLBACK_PACK_SMALL)
    #pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

struct SteamPartyBeaconLocation_t {
	ESteamPartyBeaconLocationType m_eType;
	uint64 m_ulLocationID;
};

enum ESteamPartyBeaconLocationData {
	k_ESteamPartyBeaconLocationDataInvalid = 0,
	k_ESteamPartyBeaconLocationDataName = 1,
	k_ESteamPartyBeaconLocationDataIconURLSmall = 2,
	k_ESteamPartyBeaconLocationDataIconURLMedium = 3,
	k_ESteamPartyBeaconLocationDataIconURLLarge = 4,
};

struct FavoritesListChanged_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 2 };
	uint32 m_nIP;
	uint32 m_nQueryPort;
	uint32 m_nConnPort;
	uint32 m_nAppID;
	uint32 m_nFlags;
	bool m_bAdd;
	AccountID_t m_unAccountId;
};

struct LobbyInvite_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 3 };
	uint64 m_ulSteamIDUser;
	uint64 m_ulSteamIDLobby;
	uint64 m_ulGameID;
};

struct LobbyEnter_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 4 };
	uint64 m_ulSteamIDLobby;
	uint32 m_rgfChatPermissions;
	bool m_bLocked;
	uint32 m_EChatRoomEnterResponse;
};

struct LobbyDataUpdate_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 5 };
	uint64 m_ulSteamIDLobby;
	uint64 m_ulSteamIDMember;
	uint8 m_bSuccess;
};

struct LobbyChatUpdate_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 6 };
	uint64 m_ulSteamIDLobby;
	uint64 m_ulSteamIDUserChanged;
	uint64 m_ulSteamIDMakingChange;
	uint32 m_rgfChatMemberStateChange;
};

struct LobbyChatMsg_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 7 };
	uint64 m_ulSteamIDLobby;
	uint64 m_ulSteamIDUser;
	uint8 m_eChatEntryType;
	uint32 m_iChatID;
};

struct LobbyGameCreated_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 9 };
	uint64 m_ulSteamIDLobby;
	uint64 m_ulSteamIDGameServer;
	uint32 m_unIP;
	uint16 m_usPort;
};

struct LobbyMatchList_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 10 };
	uint32 m_nLobbiesMatching;
};

struct LobbyKicked_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 12 };
	uint64 m_ulSteamIDLobby;
	uint64 m_ulSteamIDAdmin;
	uint8 m_bKickedDueToDisconnect;
};

struct LobbyCreated_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 13 };
	EResult m_eResult;
	uint64 m_ulSteamIDLobby;
};

struct FavoritesListAccountsUpdated_t {
	enum { k_iCallback = k_iSteamMatchmakingCallbacks + 16 };
	EResult m_eResult;
};

struct JoinPartyCallback_t {
	enum { k_iCallback = k_iSteamPartiesCallbacks + 1 };
	EResult m_eResult;
	PartyBeaconID_t m_ulBeaconID;
	CSteamID m_SteamIDBeaconOwner;
	char m_rgchConnectString[256];
};

struct CreateBeaconCallback_t {
	enum { k_iCallback = k_iSteamPartiesCallbacks + 2 };
	EResult m_eResult;
	PartyBeaconID_t m_ulBeaconID;
};

struct ReservationNotificationCallback_t {
	enum { k_iCallback = k_iSteamPartiesCallbacks + 3 };
	PartyBeaconID_t m_ulBeaconID;
	CSteamID m_steamIDJoiner;
};

struct ChangeNumOpenSlotsCallback_t {
	enum { k_iCallback = k_iSteamPartiesCallbacks + 4 };
	EResult m_eResult;
};

struct AvailableBeaconLocationsUpdated_t {
	enum { k_iCallback = k_iSteamPartiesCallbacks + 5 };
};

struct ActiveBeaconsUpdated_t {
	enum { k_iCallback = k_iSteamPartiesCallbacks + 6 };
};
#pragma pack(pop)

const int k_cbMaxGameServerGameDir = 32;
const int k_cbMaxGameServerMapName = 32;
const int k_cbMaxGameServerGameDescription = 64;
const int k_cbMaxGameServerName = 64;
const int k_cbMaxGameServerTags = 128;
const int k_cbMaxGameServerGameData = 2048;

struct MatchMakingKeyValuePair_t {
	MatchMakingKeyValuePair_t() { m_szKey[0] = m_szValue[0] = 0; }
	MatchMakingKeyValuePair_t( const char *pchKey, const char *pchValue )
	{
		strncpy( m_szKey, pchKey, sizeof(m_szKey) );
		m_szKey[ sizeof( m_szKey ) - 1 ] = '\0';
		strncpy( m_szValue, pchValue, sizeof(m_szValue) );
		m_szValue[ sizeof( m_szValue ) - 1 ] = '\0';
	}
	char m_szKey[ 256 ];
	char m_szValue[ 256 ];
};


enum EMatchMakingServerResponse {
	eServerResponded = 0,
	eServerFailedToRespond,
	eNoServersListedOnMasterServer
};

enum EMatchMakingType {
	eInternetServer = 0,
	eLANServer,
	eFriendsServer,
	eFavoritesServer,
	eHistoryServer,
	eSpectatorServer,
	eInvalidServer 
};

class servernetadr_t {
public:
	servernetadr_t() : m_usConnectionPort(0), m_usQueryPort(0), m_unIP(0) {}
	
	void Init(unsigned int ip, uint16 usQueryPort, uint16 usConnectionPort) {
        m_unIP = ip;
        m_usQueryPort = usQueryPort;
        m_usConnectionPort = usConnectionPort;
    }
	
	uint16 GetQueryPort() const { return m_usQueryPort; }

	void SetQueryPort(uint16 usPort) { m_usQueryPort = usPort; }

	uint16 GetConnectionPort() const { return m_usConnectionPort; }

	void SetConnectionPort(uint16 usPort) { m_usConnectionPort = usPort; }

	uint32 GetIP() const { return m_unIP; }

	void SetIP(uint32 unIP) { m_unIP = unIP; }

	const char *GetConnectionAddressString() const { return ToString(m_unIP, m_usConnectionPort); }

	const char *GetQueryAddressString() const { return ToString(m_unIP, m_usQueryPort); }

	bool operator<(const servernetadr_t &netadr) const { return (m_unIP < netadr.m_unIP) || (m_unIP == netadr.m_unIP && m_usQueryPort < netadr.m_usQueryPort); }

	void operator=(const servernetadr_t &that) {
		m_usConnectionPort = that.m_usConnectionPort;
		m_usQueryPort = that.m_usQueryPort;
		m_unIP = that.m_unIP;
	}
	bool operator==(const servernetadr_t &rhs) const {
		return
			m_usConnectionPort == rhs.m_usConnectionPort &&
			m_usQueryPort == rhs.m_usQueryPort &&
			m_unIP == rhs.m_unIP;
	}

	
private:
	const char *ToString(uint32 unIP, uint16 usPort) const {
        static char s[4][64];
        static int nBuf = 0;
        unsigned char *ipByte = (unsigned char *)&unIP;
        #ifdef PR_BIG_ENDIAN
            snprintf(s[nBuf], sizeof( s[nBuf] ), "%u.%u.%u.%u:%i", (int)(ipByte[0]), (int)(ipByte[1]), (int)(ipByte[2]), (int)(ipByte[3]), usPort );
        #else
            snprintf(s[nBuf], sizeof( s[nBuf] ), "%u.%u.%u.%u:%i", (int)(ipByte[3]), (int)(ipByte[2]), (int)(ipByte[1]), (int)(ipByte[0]), usPort );
        #endif
        const char *pchRet = s[nBuf];
        ++nBuf;
        nBuf %= ( (sizeof(s)/sizeof(s[0])) );
        return pchRet;
    }

	uint16	m_usConnectionPort;

	uint16	m_usQueryPort;

	uint32  m_unIP;
};

class gameserveritem_t {
public:
	gameserveritem_t() {
        m_szGameDir[0] = m_szMap[0] = m_szGameDescription[0] = m_szServerName[0] = 0;
        m_bHadSuccessfulResponse = m_bDoNotRefresh = m_bPassword = m_bSecure = false;
        m_nPing = m_nAppID = m_nPlayers = m_nMaxPlayers = m_nBotPlayers = m_ulTimeLastPlayed = m_nServerVersion = 0;
        m_nTotalFriendCount = 0;
        m_nCurrentFriendCount = 0;
        m_szGameTags[0] = 0;
    }

	const char* GetName() const {
        if ( m_szServerName[0] == 0 )
            return m_NetAdr.GetConnectionAddressString();
        else
            return m_szServerName;
    }

	void SetName( const char *pName ) {
        strncpy(m_szServerName, pName, sizeof(m_szServerName));
        m_szServerName[sizeof(m_szServerName) - 1] = '\0';
    }

public:
	servernetadr_t m_NetAdr;
	int m_nPing;
	bool m_bHadSuccessfulResponse;
	bool m_bDoNotRefresh;
	char m_szGameDir[k_cbMaxGameServerGameDir];
	char m_szMap[k_cbMaxGameServerMapName];
	char m_szGameDescription[k_cbMaxGameServerGameDescription];
	uint32 m_nAppID;
	int m_nPlayers;
	int m_nMaxPlayers;
	int m_nBotPlayers;
	bool m_bPassword;
	bool m_bSecure;
	uint32 m_ulTimeLastPlayed;
	int	m_nServerVersion;
private:
	char m_szServerName[k_cbMaxGameServerName];
public:
	bool operator==( const gameserveritem_t &rhs ) const { return m_NetAdr == rhs.m_NetAdr; }

	char m_szGameTags[k_cbMaxGameServerTags];

	CSteamID m_steamID;
	int m_nCurrentFriendCount;
	int m_nTotalFriendCount;
};

class ISteamMatchmakingServerListResponseLegacy {
public:
	virtual void ServerResponded(int iServer) = 0; 
	virtual void ServerFailedToRespond(int iServer) = 0; 
	virtual void RefreshComplete(EMatchMakingServerResponse response) = 0; 
};

class ISteamMatchmakingServerListResponse {
public:
	virtual void ServerResponded(HServerListRequest hRequest, int iServer) = 0; 

	virtual void ServerFailedToRespond(HServerListRequest hRequest, int iServer) = 0; 

	virtual void RefreshComplete(HServerListRequest hRequest, EMatchMakingServerResponse response) = 0; 
};

class ISteamMatchmakingPingResponse {
public:
	virtual void ServerResponded(gameserveritem_t &server) = 0;

	virtual void ServerFailedToRespond() = 0;
};

class ISteamMatchmakingPlayersResponse {
public:
	virtual void AddPlayerToList(const char *pchName, int nScore, float flTimePlayed) = 0;

	virtual void PlayersFailedToRespond() = 0;

	virtual void PlayersRefreshComplete() = 0;
};

class ISteamMatchmakingRulesResponse {
public:
	virtual void RulesResponded(const char *pchRule, const char *pchValue) = 0;

	virtual void RulesFailedToRespond() = 0;

	virtual void RulesRefreshComplete() = 0;
};

class ISteamMatchmakingServerFriendsResponse {
public:
	virtual void AddFriendToList(CSteamID steamID, const char *pchName, bool bCurrentlyConnected) = 0;

	virtual void FriendsFailedToRespond() = 0;

	virtual void FriendsRefreshComplete() = 0;
};