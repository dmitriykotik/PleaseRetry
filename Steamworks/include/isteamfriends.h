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

enum EFriendRelationship {
	k_EFriendRelationshipNone = 0,
	k_EFriendRelationshipBlocked = 1,
	k_EFriendRelationshipRequestRecipient = 2,
	k_EFriendRelationshipFriend = 3,
	k_EFriendRelationshipRequestInitiator = 4,
	k_EFriendRelationshipIgnored = 5,
	k_EFriendRelationshipIgnoredFriend = 6,
};

typedef int16 FriendsGroupID_t;

enum EPersonaState {
	k_EPersonaStateOffline = 0,
	k_EPersonaStateOnline = 1,
	k_EPersonaStateBusy = 2,
	k_EPersonaStateAway = 3,
	k_EPersonaStateSnooze = 4,
	k_EPersonaStateMax,
};

#if defined(PR_CALLBACK_PACK_SMALL)
#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
#pragma pack(push, 8)
#else
#error steamclientpublic.h must be included
#endif 
struct FriendGameInfo_t {
	CGameID m_gameID;
	uint32 m_unGameIP;
	uint16 m_usGamePort;
	uint16 m_usQueryPort;
	CSteamID m_steamIDLobby;
};
#pragma pack(pop)

enum EUserRestriction {
	k_nUserRestrictionNone		= 0,
	k_nUserRestrictionUnknown	= 1,
	k_nUserRestrictionAnyChat	= 2,
	k_nUserRestrictionVoiceChat	= 4,
	k_nUserRestrictionGroupChat	= 8,
	k_nUserRestrictionRating	= 16,
	k_nUserRestrictionGameInvites	= 32,
	k_nUserRestrictionTrading	= 64,
};

enum EOverlayToStoreFlag {
	k_EOverlayToStoreFlag_None = 0,
	k_EOverlayToStoreFlag_AddToCart = 1,
	k_EOverlayToStoreFlag_AddToCartAndShow = 2,
};

enum EActivateGameOverlayToWebPageMode {
	k_EActivateGameOverlayToWebPageMode_Default = 0,
	k_EActivateGameOverlayToWebPageMode_Modal = 1
};

enum ECommunityProfileItemType {
	k_ECommunityProfileItemType_AnimatedAvatar		 = 0,
	k_ECommunityProfileItemType_AvatarFrame			 = 1,
	k_ECommunityProfileItemType_ProfileModifier		 = 2,
	k_ECommunityProfileItemType_ProfileBackground	 = 3,
	k_ECommunityProfileItemType_MiniProfileBackground = 4,
};
enum ECommunityProfileItemProperty {
	k_ECommunityProfileItemProperty_ImageSmall	   = 0,
	k_ECommunityProfileItemProperty_ImageLarge	   = 1,
	k_ECommunityProfileItemProperty_InternalName   = 2,
	k_ECommunityProfileItemProperty_Title		   = 3,
	k_ECommunityProfileItemProperty_Description	   = 4,
	k_ECommunityProfileItemProperty_AppID		   = 5,
	k_ECommunityProfileItemProperty_TypeID		   = 6,
	k_ECommunityProfileItemProperty_Class		   = 7,
	k_ECommunityProfileItemProperty_MovieWebM	   = 8,
	k_ECommunityProfileItemProperty_MovieMP4	   = 9,
	k_ECommunityProfileItemProperty_MovieWebMSmall = 10,
	k_ECommunityProfileItemProperty_MovieMP4Small  = 11,
};

class ISteamFriends;