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

#include "isteammatchmaking.h"

class ISteamMatchmaking001 {
public:
	virtual int GetFavoriteGameCount() = 0;

	virtual bool GetFavoriteGame(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer) = 0;

	virtual int AddFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) = 0;

	virtual bool RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags) = 0;

	virtual bool GetFavoriteGame2(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer) = 0;

	virtual int AddFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) = 0;

	virtual bool RemoveFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) = 0;

	virtual void RequestLobbyList(uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters) = 0;

	virtual CSteamID GetLobbyByIndex(int iLobby) = 0;

	virtual void CreateLobby(uint64 ulGameID, bool bPrivate) = 0;

	virtual void JoinLobby(CSteamID steamIDLobby) = 0;

	virtual void LeaveLobby(CSteamID steamIDLobby) = 0;

	virtual bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) = 0;

	virtual int GetNumLobbyMembers(CSteamID steamIDLobby) = 0;

	virtual CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) = 0;

	virtual const char *GetLobbyData(CSteamID SteamIDLobby, const char *pchKey) = 0;

	virtual void SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue) = 0;

	virtual const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey) = 0;

	virtual void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue) = 0;

	virtual void ChangeLobbyAdmin(CSteamID steamIDLobby, CSteamID steamIDNewAdmin) = 0;

	virtual bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody) = 0;

	virtual int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType) = 0;

	virtual bool RequestLobbyData(CSteamID steamIDLobby) = 0;
};

#define STEAMMATCHMAKING_INTERFACE_VERSION_001 "SteamMatchMaking001"