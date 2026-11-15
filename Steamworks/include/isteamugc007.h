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

#include "isteamugc.h"

class ISteamUGC007 {
public:
    virtual UGCQueryHandle_t CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) = 0;

    virtual UGCQueryHandle_t CreateQueryAllUGCRequest(EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) = 0;

    virtual UGCQueryHandle_t CreateQueryUGCDetailsRequest(PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs) = 0;

    virtual SteamAPICall_t SendQueryUGCRequest(UGCQueryHandle_t handle) = 0;

    virtual bool GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t *pDetails) = 0;

    virtual bool GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize) = 0;

    virtual bool GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize) = 0;

    virtual bool GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries) = 0;

    virtual bool GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 *pStatValue) = 0;

    virtual uint32 GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index) = 0;

    virtual bool GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, bool *pbIsImage) = 0;

    virtual uint32 GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index) = 0;

    virtual bool GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize) = 0;

    virtual bool ReleaseQueryUGCRequest(UGCQueryHandle_t handle) = 0;

    virtual bool AddRequiredTag(UGCQueryHandle_t handle, const char *pTagName) = 0;

    virtual bool AddExcludedTag(UGCQueryHandle_t handle, const char *pTagName) = 0;

    virtual bool SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags) = 0;

    virtual bool SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) = 0;

    virtual bool SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata) = 0;

    virtual bool SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren) = 0;

    virtual bool SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) = 0;

    virtual bool SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) = 0;

    virtual bool SetLanguage(UGCQueryHandle_t handle, const char *pchLanguage) = 0;

    virtual bool SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) = 0;

    virtual bool SetCloudFileNameFilter(UGCQueryHandle_t handle, const char *pMatchCloudFileName) = 0;

    virtual bool SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) = 0;

    virtual bool SetSearchText(UGCQueryHandle_t handle, const char *pSearchText) = 0;

    virtual bool SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) = 0;

    virtual bool AddRequiredKeyValueTag(UGCQueryHandle_t handle, const char *pKey, const char *pValue) = 0;

    virtual SteamAPICall_t RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) = 0;

    virtual SteamAPICall_t CreateItem(AppId_t nConsumerAppId, EWorkshopFileType eFileType) = 0;

    virtual UGCUpdateHandle_t StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) = 0;

    virtual bool SetItemTitle(UGCUpdateHandle_t handle, const char *pchTitle) = 0;

    virtual bool SetItemDescription(UGCUpdateHandle_t handle, const char *pchDescription) = 0;

    virtual bool SetItemUpdateLanguage(UGCUpdateHandle_t handle, const char *pchLanguage) = 0;

    virtual bool SetItemMetadata(UGCUpdateHandle_t handle, const char *pchMetaData) = 0;

    virtual bool SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility) = 0;

    virtual bool SetItemTags(UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags) = 0;

    virtual bool SetItemContent(UGCUpdateHandle_t handle, const char *pszContentFolder) = 0;

    virtual bool SetItemPreview(UGCUpdateHandle_t handle, const char *pszPreviewFile) = 0;

    virtual bool RemoveItemKeyValueTags(UGCUpdateHandle_t handle, const char *pchKey) = 0;

    virtual bool AddItemKeyValueTag(UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue) = 0;

    virtual SteamAPICall_t SubmitItemUpdate(UGCUpdateHandle_t handle, const char *pchChangeNote) = 0;

    virtual EItemUpdateStatus GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal) = 0;

    virtual SteamAPICall_t SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp) = 0;

    virtual SteamAPICall_t GetUserItemVote(PublishedFileId_t nPublishedFileID) = 0;

    virtual SteamAPICall_t AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) = 0;

    virtual SteamAPICall_t RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) = 0;

    virtual SteamAPICall_t SubscribeItem(PublishedFileId_t nPublishedFileID) = 0;

    virtual SteamAPICall_t UnsubscribeItem(PublishedFileId_t nPublishedFileID) = 0;

    virtual uint32 GetNumSubscribedItems() = 0;

    virtual uint32 GetSubscribedItems(PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries) = 0;

    virtual uint32 GetItemState(PublishedFileId_t nPublishedFileID) = 0;

    virtual bool GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp) = 0;

    virtual bool GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal) = 0;

    virtual bool DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority) = 0;

    virtual bool BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, const char *pszFolder) = 0;

    virtual void SuspendDownloads(bool bSuspend) = 0;
};

#define STEAMUGC_INTERFACE_VERSION_007 "STEAMUGC_INTERFACE_VERSION007"