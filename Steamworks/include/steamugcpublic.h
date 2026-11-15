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
#include "steamremotestoragepublic.h"

#if defined(PR_CALLBACK_PACK_SMALL)
	#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
	#pragma pack(push, 8)
#else
	#error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

typedef uint64 UGCQueryHandle_t;
typedef uint64 UGCUpdateHandle_t;

const UGCQueryHandle_t k_UGCQueryHandleInvalid = 0xffffffffffffffffull;
const UGCUpdateHandle_t k_UGCUpdateHandleInvalid = 0xffffffffffffffffull;

enum EUGCMatchingUGCType {
	k_EUGCMatchingUGCType_Items				 = 0,
	k_EUGCMatchingUGCType_Items_Mtx			 = 1,
	k_EUGCMatchingUGCType_Items_ReadyToUse	 = 2,
	k_EUGCMatchingUGCType_Collections		 = 3,
	k_EUGCMatchingUGCType_Artwork			 = 4,
	k_EUGCMatchingUGCType_Videos			 = 5,
	k_EUGCMatchingUGCType_Screenshots		 = 6,
	k_EUGCMatchingUGCType_AllGuides			 = 7,
	k_EUGCMatchingUGCType_WebGuides			 = 8,
	k_EUGCMatchingUGCType_IntegratedGuides	 = 9,
	k_EUGCMatchingUGCType_UsableInGame		 = 10,
	k_EUGCMatchingUGCType_ControllerBindings = 11,
	k_EUGCMatchingUGCType_GameManagedItems	 = 12,
	k_EUGCMatchingUGCType_All				 = ~0,
};

enum EUserUGCList {
	k_EUserUGCList_Published,
	k_EUserUGCList_VotedOn,
	k_EUserUGCList_VotedUp,
	k_EUserUGCList_VotedDown,
	k_EUserUGCList_WillVoteLater,
	k_EUserUGCList_Favorited,
	k_EUserUGCList_Subscribed,
	k_EUserUGCList_UsedOrPlayed,
	k_EUserUGCList_Followed,
};

enum EUserUGCListSortOrder {
	k_EUserUGCListSortOrder_CreationOrderDesc,
	k_EUserUGCListSortOrder_CreationOrderAsc,
	k_EUserUGCListSortOrder_TitleAsc,
	k_EUserUGCListSortOrder_LastUpdatedDesc,
	k_EUserUGCListSortOrder_SubscriptionDateDesc,
	k_EUserUGCListSortOrder_VoteScoreDesc,
	k_EUserUGCListSortOrder_ForModeration,
};

enum EUGCQuery {
	k_EUGCQuery_RankedByVote								  = 0,
	k_EUGCQuery_RankedByPublicationDate						  = 1,
	k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate		  = 2,
	k_EUGCQuery_RankedByTrend								  = 3,
	k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate	  = 4,
	k_EUGCQuery_CreatedByFriendsRankedByPublicationDate		  = 5,
	k_EUGCQuery_RankedByNumTimesReported					  = 6,
	k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = 7,
	k_EUGCQuery_NotYetRated									  = 8,
	k_EUGCQuery_RankedByTotalVotesAsc						  = 9,
	k_EUGCQuery_RankedByVotesUp								  = 10,
	k_EUGCQuery_RankedByTextSearch							  = 11,
	k_EUGCQuery_RankedByTotalUniqueSubscriptions			  = 12,
	k_EUGCQuery_RankedByPlaytimeTrend						  = 13,
	k_EUGCQuery_RankedByTotalPlaytime						  = 14,
	k_EUGCQuery_RankedByAveragePlaytimeTrend				  = 15,
	k_EUGCQuery_RankedByLifetimeAveragePlaytime				  = 16,
	k_EUGCQuery_RankedByPlaytimeSessionsTrend				  = 17,
	k_EUGCQuery_RankedByLifetimePlaytimeSessions			  = 18,
	k_EUGCQuery_RankedByLastUpdatedDate						  = 19,
	k_EUGCQuery_RankedByNumParentItems						  = 20,
	k_EUGCQuery_RankedByNumParentCollections				  = 21,
};

enum EItemUpdateStatus {
	k_EItemUpdateStatusInvalid 				= 0,
	k_EItemUpdateStatusPreparingConfig 		= 1,
	k_EItemUpdateStatusPreparingContent		= 2,
	k_EItemUpdateStatusUploadingContent		= 3,
	k_EItemUpdateStatusUploadingPreviewFile	= 4,
	k_EItemUpdateStatusCommittingChanges	= 5
};

enum EItemState {
	k_EItemStateNone			= 0,
	k_EItemStateSubscribed		= 1,
	k_EItemStateLegacyItem		= 2,
	k_EItemStateInstalled		= 4,
	k_EItemStateNeedsUpdate		= 8,
	k_EItemStateDownloading		= 16,
	k_EItemStateDownloadPending	= 32,
	k_EItemStateDisabledLocally = 64,
};

enum EItemStatistic {
	k_EItemStatistic_NumSubscriptions					 = 0,
	k_EItemStatistic_NumFavorites						 = 1,
	k_EItemStatistic_NumFollowers						 = 2,
	k_EItemStatistic_NumUniqueSubscriptions				 = 3,
	k_EItemStatistic_NumUniqueFavorites					 = 4,
	k_EItemStatistic_NumUniqueFollowers					 = 5,
	k_EItemStatistic_NumUniqueWebsiteViews				 = 6,
	k_EItemStatistic_ReportScore						 = 7,
	k_EItemStatistic_NumSecondsPlayed					 = 8,
	k_EItemStatistic_NumPlaytimeSessions				 = 9,
	k_EItemStatistic_NumComments						 = 10,
	k_EItemStatistic_NumSecondsPlayedDuringTimePeriod	 = 11,
	k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod = 12,
};

enum EItemPreviewType {
	k_EItemPreviewType_Image							= 0,
	k_EItemPreviewType_YouTubeVideo						= 1,
	k_EItemPreviewType_Sketchfab						= 2,
	k_EItemPreviewType_EnvironmentMap_HorizontalCross	= 3,
	k_EItemPreviewType_EnvironmentMap_LatLong			= 4,
	k_EItemPreviewType_Clip								= 5,
	k_EItemPreviewType_ReservedMax						= 255,
};

enum EUGCContentDescriptorID {
	k_EUGCContentDescriptor_NudityOrSexualContent	= 1,
	k_EUGCContentDescriptor_FrequentViolenceOrGore	= 2,
	k_EUGCContentDescriptor_AdultOnlySexualContent	= 3,
	k_EUGCContentDescriptor_GratuitousSexualContent = 4,
	k_EUGCContentDescriptor_AnyMatureContent		= 5,
};

const uint32 kNumUGCResultsPerPage = 50;
const uint32 k_cchDeveloperMetadataMax = 10000;

struct SteamUGCDetails_t {
	PublishedFileId_t m_nPublishedFileId;
	EResult m_eResult;
	EWorkshopFileType m_eFileType;
	AppId_t m_nCreatorAppID;
	AppId_t m_nConsumerAppID;
	char m_rgchTitle[k_cchPublishedDocumentTitleMax];
	char m_rgchDescription[k_cchPublishedDocumentDescriptionMax];
	uint64 m_ulSteamIDOwner;
	uint32 m_rtimeCreated;
	uint32 m_rtimeUpdated;
	uint32 m_rtimeAddedToUserList;
	ERemoteStoragePublishedFileVisibility m_eVisibility;
	bool m_bBanned;
	bool m_bAcceptedForUse;
	bool m_bTagsTruncated;
	char m_rgchTags[k_cchTagListMax];
	UGCHandle_t m_hFile;
	UGCHandle_t m_hPreviewFile;
	char m_pchFileName[k_cchFilenameMax];
	int32 m_nFileSize;
	int32 m_nPreviewFileSize;
	char m_rgchURL[k_cchPublishedFileURLMax];
	uint32 m_unVotesUp;
	uint32 m_unVotesDown;
	float m_flScore;
	uint32 m_unNumChildren;
	uint64 m_ulTotalFilesSize;
};

struct SteamUGCQueryCompleted_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 1 };
	UGCQueryHandle_t m_handle;
	EResult m_eResult;
	uint32 m_unNumResultsReturned;
	uint32 m_unTotalMatchingResults;
	bool m_bCachedData;
	char m_rgchNextCursor[k_cchPublishedFileURLMax];
};

struct SteamUGCRequestUGCDetailsResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 2 };
	SteamUGCDetails_t m_details;
	bool m_bCachedData;
};

struct CreateItemResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 3 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
};

struct SubmitItemUpdateResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 4 };
	EResult m_eResult;
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
	PublishedFileId_t m_nPublishedFileId;
};

struct ItemInstalled_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 5 };
	AppId_t m_unAppID;
	PublishedFileId_t m_nPublishedFileId;
	UGCHandle_t m_hLegacyContent;
	uint64 m_unManifestID;
};

struct DownloadItemResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 6 };
	AppId_t m_unAppID;
	PublishedFileId_t m_nPublishedFileId;
	EResult m_eResult;
};

struct UserFavoriteItemsListChanged_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 7 };
	PublishedFileId_t m_nPublishedFileId;
	EResult m_eResult;
	bool m_bWasAddRequest;
};

struct SetUserItemVoteResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 8 };
	PublishedFileId_t m_nPublishedFileId;
	EResult m_eResult;
	bool m_bVoteUp;
};

struct GetUserItemVoteResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 9 };
	PublishedFileId_t m_nPublishedFileId;
	EResult m_eResult;
	bool m_bVotedUp;
	bool m_bVotedDown;
	bool m_bVoteSkipped;
};

struct StartPlaytimeTrackingResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 10 };
	EResult m_eResult;
};

struct StopPlaytimeTrackingResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 11 };
	EResult m_eResult;
};

struct AddUGCDependencyResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 12 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	PublishedFileId_t m_nChildPublishedFileId;
};

struct RemoveUGCDependencyResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 13 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	PublishedFileId_t m_nChildPublishedFileId;
};

struct AddAppDependencyResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 14 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nAppID;
};

struct RemoveAppDependencyResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 15 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nAppID;
};

struct GetAppDependenciesResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 16 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_rgAppIDs[32];
	uint32 m_nNumAppDependencies;
	uint32 m_nTotalNumAppDependencies;
};

struct DeleteItemResult_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 17 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
};

struct UserSubscribedItemsListChanged_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 18 };
	AppId_t m_nAppID;
};

struct WorkshopEULAStatus_t {
	enum { k_iCallback = k_iSteamUGCCallbacks + 20 };
	EResult m_eResult;
	AppId_t m_nAppID;
	uint32 m_unVersion;
	RTime32 m_rtAction;
	bool m_bAccepted;
	bool m_bNeedsAction;
};

#pragma pack(pop)