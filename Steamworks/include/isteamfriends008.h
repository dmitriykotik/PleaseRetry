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

#include "isteamfriends.h"

class ISteamFriends008 {
public:
	virtual const char *GetPersonaName() = 0;
	
	virtual void SetPersonaName(const char *pchPersonaName) = 0;

	virtual EPersonaState GetPersonaState() = 0;

	virtual int GetFriendCount(int iFriendFlags) = 0;

	virtual CSteamID GetFriendByIndex(int iFriend, int iFriendFlags) = 0;

	virtual EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend) = 0;

	virtual EPersonaState GetFriendPersonaState(CSteamID steamIDFriend) = 0;

	virtual const char *GetFriendPersonaName(CSteamID steamIDFriend) = 0;

	virtual bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) = 0;

	virtual const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) = 0;

	virtual bool HasFriend(CSteamID steamIDFriend, int iFriendFlags) = 0;

	virtual int GetClanCount() = 0;

	virtual CSteamID GetClanByIndex(int iClan) = 0;

	virtual const char *GetClanName(CSteamID steamIDClan) = 0;

	virtual const char *GetClanTag(CSteamID steamIDClan) = 0;

	virtual int GetFriendCountFromSource(CSteamID steamIDSource) = 0;

	virtual CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) = 0;

	virtual bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) = 0;

	virtual void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) = 0;

	virtual void ActivateGameOverlay(const char *pchDialog) = 0;

	virtual void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) = 0;

	virtual void ActivateGameOverlayToWebPage(const char *pchURL) = 0;

	virtual void ActivateGameOverlayToStore(AppId_t nAppID) = 0;

	virtual void SetPlayedWith(CSteamID steamIDUserPlayedWith) = 0;

	virtual void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) = 0;

	virtual int GetSmallFriendAvatar(CSteamID steamIDFriend) = 0;

	virtual int GetMediumFriendAvatar(CSteamID steamIDFriend) = 0;

	virtual int GetLargeFriendAvatar(CSteamID steamIDFriend) = 0;

	virtual bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) = 0;

	virtual SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan) = 0;

	virtual CSteamID GetClanOwner(CSteamID steamIDClan) = 0;

	virtual int GetClanOfficerCount(CSteamID steamIDClan) = 0;

	virtual CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) = 0;

	virtual uint32 GetUserRestrictions() = 0;
};

#define STEAMFRIENDS_INTERFACE_VERSION_008 "SteamFriends008"