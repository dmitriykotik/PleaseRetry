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

const uint32 k_unMaxCloudFileChunkSize = 100 * 1024 * 1024;

#if defined(PR_CALLBACK_PACK_SMALL)
	#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
	#pragma pack(push, 8)
#else
	#error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 
struct SteamParamStringArray_t {
	const char ** m_ppStrings;
	int32 m_nNumStrings;
};
#pragma pack(pop)

typedef uint64 UGCHandle_t;
typedef uint64 PublishedFileUpdateHandle_t;
typedef uint64 PublishedFileId_t;
const PublishedFileId_t k_PublishedFileIdInvalid = 0;
const UGCHandle_t k_UGCHandleInvalid = 0xffffffffffffffffull;
const PublishedFileUpdateHandle_t k_PublishedFileUpdateHandleInvalid = 0xffffffffffffffffull;

typedef uint64 UGCFileWriteStreamHandle_t;
const UGCFileWriteStreamHandle_t k_UGCFileStreamHandleInvalid = 0xffffffffffffffffull;

const uint32 k_cchPublishedDocumentTitleMax = 128 + 1;
const uint32 k_cchPublishedDocumentDescriptionMax = 8000;
const uint32 k_cchPublishedDocumentChangeDescriptionMax = 8000;
const uint32 k_unEnumeratePublishedFilesMaxResults = 50;
const uint32 k_cchTagListMax = 1024 + 1;
const uint32 k_cchFilenameMax = 260;
const uint32 k_cchPublishedFileURLMax = 256;


enum ERemoteStoragePlatform {
	k_ERemoteStoragePlatformNone		= 0,
	k_ERemoteStoragePlatformWindows		= (1 << 0),
	k_ERemoteStoragePlatformOSX			= (1 << 1),
	k_ERemoteStoragePlatformPS3			= (1 << 2),
	k_ERemoteStoragePlatformLinux		= (1 << 3),
	k_ERemoteStoragePlatformSwitch		= (1 << 4),
	k_ERemoteStoragePlatformAndroid		= (1 << 5),
	k_ERemoteStoragePlatformIOS			= (1 << 6),

	k_ERemoteStoragePlatformAll = 0xffffffff
};

enum ERemoteStoragePublishedFileVisibility {
	k_ERemoteStoragePublishedFileVisibilityPublic = 0,
	k_ERemoteStoragePublishedFileVisibilityFriendsOnly = 1,
	k_ERemoteStoragePublishedFileVisibilityPrivate = 2,
	k_ERemoteStoragePublishedFileVisibilityUnlisted = 3,
};


enum EWorkshopFileType {
	k_EWorkshopFileTypeFirst = 0,

	k_EWorkshopFileTypeCommunity			  = 0,
	k_EWorkshopFileTypeMicrotransaction		  = 1,
	k_EWorkshopFileTypeCollection			  = 2,
	k_EWorkshopFileTypeArt					  = 3,
	k_EWorkshopFileTypeVideo				  = 4,
	k_EWorkshopFileTypeScreenshot			  = 5,
	k_EWorkshopFileTypeGame					  = 6,
	k_EWorkshopFileTypeSoftware				  = 7,
	k_EWorkshopFileTypeConcept				  = 8,
	k_EWorkshopFileTypeWebGuide				  = 9,
	k_EWorkshopFileTypeIntegratedGuide		  = 10,
	k_EWorkshopFileTypeMerch				  = 11,
	k_EWorkshopFileTypeControllerBinding	  = 12,
	k_EWorkshopFileTypeSteamworksAccessInvite = 13,
	k_EWorkshopFileTypeSteamVideo			  = 14,
	k_EWorkshopFileTypeGameManagedItem		  = 15,
	k_EWorkshopFileTypeClip					  = 16,

	k_EWorkshopFileTypeMax = 17
	
};

enum EWorkshopVote {
	k_EWorkshopVoteUnvoted = 0,
	k_EWorkshopVoteFor = 1,
	k_EWorkshopVoteAgainst = 2,
	k_EWorkshopVoteLater = 3,
};

enum EWorkshopFileAction {
	k_EWorkshopFileActionPlayed = 0,
	k_EWorkshopFileActionCompleted = 1,
};

enum EWorkshopEnumerationType {
	k_EWorkshopEnumerationTypeRankedByVote = 0,
	k_EWorkshopEnumerationTypeRecent = 1,
	k_EWorkshopEnumerationTypeTrending = 2,
	k_EWorkshopEnumerationTypeFavoritesOfFriends = 3,
	k_EWorkshopEnumerationTypeVotedByFriends = 4,
	k_EWorkshopEnumerationTypeContentByFriends = 5,
	k_EWorkshopEnumerationTypeRecentFromFollowedUsers = 6,
};

enum EWorkshopVideoProvider {
	k_EWorkshopVideoProviderNone = 0,
	k_EWorkshopVideoProviderYoutube = 1
};


enum EUGCReadAction {
	k_EUGCRead_ContinueReadingUntilFinished = 0,
	k_EUGCRead_ContinueReading = 1,
	k_EUGCRead_Close = 2,	
};

enum ERemoteStorageLocalFileChange {
	k_ERemoteStorageLocalFileChange_Invalid = 0,
	k_ERemoteStorageLocalFileChange_FileUpdated = 1,
	k_ERemoteStorageLocalFileChange_FileDeleted = 2,
};

enum ERemoteStorageFilePathType {
	k_ERemoteStorageFilePathType_Invalid = 0,
	k_ERemoteStorageFilePathType_Absolute = 1,
	k_ERemoteStorageFilePathType_APIFilename = 2,
};

#if defined(PR_CALLBACK_PACK_SMALL)
	#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
	#pragma pack(push, 8)
#else
	#error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

struct RemoteStorageFileShareResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 7 };
	EResult m_eResult;
	UGCHandle_t m_hFile;
	char m_rgchFilename[k_cchFilenameMax];
};

struct RemoteStorageDownloadUGCResultDeprecated_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 8 };
	EResult m_eResult;
	UGCHandle_t m_hFile;
	AppId_t m_nAppID;
	int32 m_nSizeInBytes;
	char *m_pchFileName;
	uint64 m_ulSteamIDOwner;
};

struct RemoteStoragePublishFileResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 9 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
};

struct RemoteStorageGetPublishedFileDetailsResultDeprecated_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 10 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nCreatorAppID;
	AppId_t m_nConsumerAppID;
	char m_rgchTitle[k_cchPublishedDocumentTitleMax];
	char m_rgchDescription[k_cchPublishedDocumentDescriptionMax];
	UGCHandle_t m_hFile;
	UGCHandle_t m_hPreviewFile;
	uint64 m_ulSteamIDOwner;
	uint32 m_rtimeCreated;
	uint32 m_rtimeUpdated;
	ERemoteStoragePublishedFileVisibility m_eVisibility;
	bool m_bBanned;
	char m_rgchTags[k_cchTagListMax];
	bool m_bTagsTruncated;
	char m_pchFileName[k_cchFilenameMax];
};

struct RemoteStorageDeletePublishedFileResult_t
{
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 11 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
};

struct RemoteStorageEnumerateUserPublishedFilesResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 12 };
	EResult m_eResult;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[k_unEnumeratePublishedFilesMaxResults];
};

struct RemoteStorageSubscribePublishedFileResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 13 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
};

struct RemoteStorageEnumerateUserSubscribedFilesResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 14 };
	EResult m_eResult;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[k_unEnumeratePublishedFilesMaxResults];
	uint32 m_rgRTimeSubscribed[k_unEnumeratePublishedFilesMaxResults];
};

struct RemoteStorageUnsubscribePublishedFileResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 15 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
};

struct RemoteStorageUpdatePublishedFileResult_t
{
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 16 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
};

struct RemoteStorageDownloadUGCResult_t
{
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 17 };
	EResult m_eResult;
	UGCHandle_t m_hFile;
	AppId_t m_nAppID;
	int32 m_nSizeInBytes;
	char m_pchFileName[k_cchFilenameMax];
	uint64 m_ulSteamIDOwner;
};

struct RemoteStorageGetPublishedFileDetailsResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 18 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nCreatorAppID;
	AppId_t m_nConsumerAppID;
	char m_rgchTitle[k_cchPublishedDocumentTitleMax];
	char m_rgchDescription[k_cchPublishedDocumentDescriptionMax];
	UGCHandle_t m_hFile;
	UGCHandle_t m_hPreviewFile;
	uint64 m_ulSteamIDOwner;
	uint32 m_rtimeCreated;
	uint32 m_rtimeUpdated;
	ERemoteStoragePublishedFileVisibility m_eVisibility;
	bool m_bBanned;
	char m_rgchTags[k_cchTagListMax];
	bool m_bTagsTruncated;
	char m_pchFileName[k_cchFilenameMax];
	int32 m_nFileSize;
	int32 m_nPreviewFileSize;
	char m_rgchURL[k_cchPublishedFileURLMax];
	EWorkshopFileType m_eFileType;
	bool m_bAcceptedForUse;
};


struct RemoteStorageEnumerateWorkshopFilesResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 19 };
	EResult m_eResult;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[k_unEnumeratePublishedFilesMaxResults];
	float m_rgScore[k_unEnumeratePublishedFilesMaxResults];
	AppId_t m_nAppId;
	uint32 m_unStartIndex;
};

struct RemoteStorageGetPublishedItemVoteDetailsResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 20 };
	EResult m_eResult;
	PublishedFileId_t m_unPublishedFileId;
	int32 m_nVotesFor;
	int32 m_nVotesAgainst;
	int32 m_nReports;
	float m_fScore;
};

struct RemoteStoragePublishedFileSubscribed_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 21 };
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nAppID;
};

struct RemoteStoragePublishedFileUnsubscribed_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 22 };
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nAppID;
};

struct RemoteStoragePublishedFileDeleted_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 23 };
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nAppID;
};

struct RemoteStorageUpdateUserPublishedItemVoteResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 24 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
};

struct RemoteStorageUserVoteDetails_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 25 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	EWorkshopVote m_eVote;
};

struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 26 };
	EResult m_eResult;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[k_unEnumeratePublishedFilesMaxResults];
};

struct RemoteStorageSetUserPublishedFileActionResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 27 };
	EResult m_eResult;
	PublishedFileId_t m_nPublishedFileId;
	EWorkshopFileAction m_eAction;
};

struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 28 };
	EResult m_eResult;
	EWorkshopFileAction m_eAction;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[k_unEnumeratePublishedFilesMaxResults];
	uint32 m_rgRTimeUpdated[k_unEnumeratePublishedFilesMaxResults];
};

struct RemoteStoragePublishFileProgress_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 29 };
	double m_dPercentFile;
	bool m_bPreview;
};

struct RemoteStoragePublishedFileUpdated_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 30 };
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nAppID;
	uint64 m_ulUnused;
};

struct RemoteStorageFileWriteAsyncComplete_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 31 };
	EResult	m_eResult;
};

struct RemoteStorageFileReadAsyncComplete_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 32 };
	SteamAPICall_t m_hFileReadAsync;
	EResult	m_eResult;
	uint32 m_nOffset;
	uint32 m_cubRead;
};

struct RemoteStorageLocalFileChange_t {
	enum { k_iCallback = k_iSteamRemoteStorageCallbacks + 33 };
};

struct RemoteStorageUpdatePublishedFileRequest_t {
public:
	RemoteStorageUpdatePublishedFileRequest_t() { Initialize(k_GIDNil); }

	RemoteStorageUpdatePublishedFileRequest_t(PublishedFileId_t unPublishedFileId) { Initialize(unPublishedFileId); }

	PublishedFileId_t GetPublishedFileId() { return m_unPublishedFileId; }

	void SetFile(const char *pchFile) {
		m_pchFile = pchFile;
		m_bUpdateFile = true;
	}

	const char *GetFile() { return m_pchFile; }
	bool BUpdateFile() { return m_bUpdateFile; }

	void SetPreviewFile(const char *pchPreviewFile) {
		m_pchPreviewFile = pchPreviewFile;
		m_bUpdatePreviewFile = true;
	}

	const char *GetPreviewFile() { return m_pchPreviewFile; }
	bool BUpdatePreviewFile() { return m_bUpdatePreviewFile; }

	void SetTitle(const char *pchTitle) {
		m_pchTitle = pchTitle;
		m_bUpdateTitle = true;
	}

	const char *GetTitle() { return m_pchTitle; }
	bool BUpdateTitle() { return m_bUpdateTitle; }

	void SetDescription(const char *pchDescription) {
		m_pchDescription = pchDescription;
		m_bUpdateDescription = true;
	}

	const char *GetDescription() { return m_pchDescription; }
	bool BUpdateDescription() { return m_bUpdateDescription; }

	void SetVisibility(ERemoteStoragePublishedFileVisibility eVisibility) {
		m_eVisibility = eVisibility;
		m_bUpdateVisibility = true;
	}

	const ERemoteStoragePublishedFileVisibility GetVisibility() { return m_eVisibility; }
	bool BUpdateVisibility() { return m_bUpdateVisibility; }

	void SetTags(SteamParamStringArray_t *pTags) {
		m_pTags = pTags;
		m_bUpdateTags = true;
	}

	SteamParamStringArray_t *GetTags() { return m_pTags; }
	bool BUpdateTags() { return m_bUpdateTags; }
	SteamParamStringArray_t **GetTagsPointer() { return &m_pTags; }

	void Initialize( PublishedFileId_t unPublishedFileId ) {
		m_unPublishedFileId = unPublishedFileId;
		m_pchFile = 0;
		m_pchPreviewFile = 0;
		m_pchTitle = 0;
		m_pchDescription = 0;
		m_pTags = 0;

		m_bUpdateFile = false;
		m_bUpdatePreviewFile = false;
		m_bUpdateTitle = false;
		m_bUpdateDescription = false;
		m_bUpdateTags = false;
		m_bUpdateVisibility = false;
	}

private:
	PublishedFileId_t m_unPublishedFileId;
	const char *m_pchFile;
	const char *m_pchPreviewFile;
	const char *m_pchTitle;
	const char *m_pchDescription;
	ERemoteStoragePublishedFileVisibility m_eVisibility;
	SteamParamStringArray_t *m_pTags;

	bool m_bUpdateFile;
	bool m_bUpdatePreviewFile;
	bool m_bUpdateTitle;
	bool m_bUpdateDescription;
	bool m_bUpdateVisibility;
	bool m_bUpdateTags;
};

#pragma pack(pop)