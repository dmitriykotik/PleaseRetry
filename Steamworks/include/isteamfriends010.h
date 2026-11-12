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

class ISteamFriends010 {
public:
	virtual const char *GetPersonaName() = 0;

	virtual void SetPersonaName_old( const char *pchPersonaName ) = 0;

	virtual EPersonaState GetPersonaState() = 0;

	virtual int GetFriendCount( int iFriendFlags ) = 0;

	virtual CSteamID GetFriendByIndex( int iFriend, int iFriendFlags ) = 0;

	virtual EFriendRelationship GetFriendRelationship( CSteamID steamIDFriend ) = 0;

	virtual EPersonaState GetFriendPersonaState( CSteamID steamIDFriend ) = 0;

	virtual const char *GetFriendPersonaName( CSteamID steamIDFriend ) = 0;

	virtual bool GetFriendGamePlayed( CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo ) = 0;

	virtual const char *GetFriendPersonaNameHistory( CSteamID steamIDFriend, int iPersonaName ) = 0;

	virtual bool HasFriend( CSteamID steamIDFriend, int iFriendFlags ) = 0;

	virtual int GetClanCount() = 0;

	virtual CSteamID GetClanByIndex( int iClan ) = 0;

	virtual const char *GetClanName( CSteamID steamIDClan ) = 0;

	virtual const char *GetClanTag( CSteamID steamIDClan ) = 0;

	virtual bool GetClanActivityCounts( CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting ) = 0;

	virtual SteamAPICall_t DownloadClanActivityCounts( CSteamID groupIDs[], int nIds ) = 0;

	virtual int GetFriendCountFromSource( CSteamID steamIDSource ) = 0;

	virtual CSteamID GetFriendFromSourceByIndex( CSteamID steamIDSource, int iFriend ) = 0;

	virtual bool IsUserInSource( CSteamID steamIDUser, CSteamID steamIDSource ) = 0;

	virtual void SetInGameVoiceSpeaking( CSteamID steamIDUser, bool bSpeaking ) = 0;

	virtual void ActivateGameOverlay( const char *pchDialog ) = 0;

	virtual void ActivateGameOverlayToUser( const char *pchDialog, CSteamID steamID ) = 0;

	virtual void ActivateGameOverlayToWebPage( const char *pchURL ) = 0;

	virtual void ActivateGameOverlayToStore( AppId_t nAppID ) = 0;

	virtual void SetPlayedWith( CSteamID steamIDUserPlayedWith ) = 0;

	virtual void ActivateGameOverlayInviteDialog( CSteamID steamIDLobby ) = 0;

	virtual int GetSmallFriendAvatar( CSteamID steamIDFriend ) = 0;

	virtual int GetMediumFriendAvatar( CSteamID steamIDFriend ) = 0;

	virtual int GetLargeFriendAvatar( CSteamID steamIDFriend ) = 0;

	virtual bool RequestUserInformation( CSteamID steamIDUser, bool bRequireNameOnly ) = 0;

	virtual SteamAPICall_t RequestClanOfficerList( CSteamID steamIDClan ) = 0;

	virtual CSteamID GetClanOwner( CSteamID steamIDClan ) = 0;

	virtual int GetClanOfficerCount( CSteamID steamIDClan ) = 0;

	virtual CSteamID GetClanOfficerByIndex( CSteamID steamIDClan, int iOfficer ) = 0;

	virtual EUserRestriction GetUserRestrictions_old() = 0;

	virtual bool SetRichPresence( const char *pchKey, const char *pchValue ) = 0;

	virtual void ClearRichPresence() = 0;

	virtual const char *GetFriendRichPresence( CSteamID steamIDFriend, const char *pchKey ) = 0;

	virtual int GetFriendRichPresenceKeyCount( CSteamID steamIDFriend ) = 0;

	virtual const char *GetFriendRichPresenceKeyByIndex( CSteamID steamIDFriend, int iKey ) = 0;

	virtual bool InviteUserToGame( CSteamID steamIDFriend, const char *pchConnectString ) = 0;

	virtual int GetCoplayFriendCount() = 0;

	virtual CSteamID GetCoplayFriend( int iCoplayFriend ) = 0;

	virtual int GetFriendCoplayTime( CSteamID steamIDFriend ) = 0;

	virtual AppId_t GetFriendCoplayGame( CSteamID steamIDFriend ) = 0;

	virtual SteamAPICall_t JoinClanChatRoom( CSteamID groupID ) = 0;
	
	virtual bool LeaveClanChatRoom( CSteamID groupID ) = 0;

	virtual int GetClanChatMemberCount( CSteamID groupID ) = 0;

	virtual CSteamID GetChatMemberByIndex( CSteamID groupID, int iIndex ) = 0;

	virtual bool SendClanChatMessage( CSteamID groupID, const char *cszMessage ) = 0;

	virtual int GetClanChatMessage( CSteamID groupID, int iChatID, void *pvData, int cubData, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter ) = 0;
	
	virtual bool IsClanChatAdmin( CSteamID groupID, CSteamID userID ) = 0;
	virtual bool IsClanChatWindowOpenInSteam( CSteamID groupID ) = 0;

	virtual bool OpenClanChatWindowInSteam( CSteamID groupID ) = 0;

	virtual bool CloseClanChatWindowInSteam( CSteamID groupID ) = 0;

	virtual bool SetListenForFriendsMessages( bool bListen ) = 0;

	virtual bool ReplyToFriendMessage( CSteamID friendID, const char *cszMessage ) = 0;
	
	virtual int GetFriendMessage( CSteamID friendID, int iChatID, void *pvData, int cubData, EChatEntryType *peChatEntryType ) = 0;
};

#define STEAMFRIENDS_INTERFACE_VERSION_010 "SteamFriends010"