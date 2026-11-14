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

class ISteamMatchmaking006 {
public:
	virtual int GetFavoriteGameCount() = 0;

	virtual bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer) = 0;

	virtual int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) = 0;

	virtual bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) = 0;

	virtual SteamAPICall_t RequestLobbyList() = 0;

	virtual void AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch) = 0;

	virtual void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType) = 0;

	virtual void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo) = 0;

	virtual CSteamID GetLobbyByIndex(int iLobby) = 0;

	virtual SteamAPICall_t CreateLobby(ELobbyType eLobbyType) = 0;

	virtual SteamAPICall_t JoinLobby(CSteamID steamIDLobby) = 0;

	virtual void LeaveLobby(CSteamID steamIDLobby) = 0;

	virtual bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) = 0;

	virtual int GetNumLobbyMembers(CSteamID steamIDLobby) = 0;

	virtual CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) = 0;

	virtual const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey) = 0;

	virtual bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue) = 0;

	virtual const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey) = 0;

	virtual void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue) = 0;

	virtual bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody) = 0;

	virtual int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType) = 0;

	virtual bool RequestLobbyData(CSteamID steamIDLobby) = 0;

	virtual void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) = 0;

	virtual bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer) = 0;

	virtual bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers) = 0;

	virtual int GetLobbyMemberLimit(CSteamID steamIDLobby) = 0;

	virtual bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType) = 0;

	virtual CSteamID GetLobbyOwner(CSteamID steamIDLobby) = 0;
};

#define STEAMMATCHMAKING_INTERFACE_VERSION_006 "SteamMatchMaking006"