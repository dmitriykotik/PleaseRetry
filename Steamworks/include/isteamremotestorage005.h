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

#include "isteamremotestorage.h"

class ISteamRemoteStorage005 {
public:
	virtual bool FileWrite(const char *pchFile, const void *pvData, int32 cubData) = 0;

	virtual int32 FileRead(const char *pchFile, void *pvData, int32 cubDataToRead) = 0;

	virtual bool FileForget(const char *pchFile) = 0;

	virtual bool FileDelete(const char *pchFile) = 0;

	virtual SteamAPICall_t FileShare(const char *pchFile) = 0;

	virtual bool SetSyncPlatforms(const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) = 0;

	virtual bool FileExists(const char *pchFile) = 0;

	virtual bool FilePersisted(const char *pchFile) = 0;

	virtual int32 GetFileSize(const char *pchFile) = 0;

	virtual int64 GetFileTimestamp(const char *pchFile) = 0;

	virtual ERemoteStoragePlatform GetSyncPlatforms(const char *pchFile) = 0;

	virtual int32 GetFileCount() = 0;

	virtual const char *GetFileNameAndSize(int iFile, int32 *pnFileSizeInBytes) = 0;

	virtual bool GetQuota(int32 *pnTotalBytes, int32 *puAvailableBytes) = 0;

	virtual bool IsCloudEnabledForAccount() = 0;

	virtual bool IsCloudEnabledForApp() = 0;

	virtual void SetCloudEnabledForApp(bool bEnabled) = 0;

	virtual SteamAPICall_t UGCDownload(UGCHandle_t hContent) = 0;

	virtual bool GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner) = 0;

	virtual int32 UGCRead(UGCHandle_t hContent, void *pvData, int32 cubDataToRead) = 0;

	virtual int32 GetCachedUGCCount() = 0;

	virtual UGCHandle_t GetCachedUGCHandle(int32 iCachedContent) = 0;

	#if defined(_PS3) || defined(_SERVER)
		virtual void GetFileListFromServer() = 0;

		virtual bool FileFetch(const char *pchFile) = 0;

		virtual bool FilePersist(const char *pchFile) = 0;

		virtual bool SynchronizeToClient() = 0;

		virtual bool SynchronizeToServer() = 0;
		
		virtual bool ResetFileRequestState() = 0;
	#endif

	virtual SteamAPICall_t PublishFile(const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags) = 0;

	virtual SteamAPICall_t PublishWorkshopFile(const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, SteamParamStringArray_t *pTags) = 0;

	virtual SteamAPICall_t UpdatePublishedFile(RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest) = 0;

	virtual SteamAPICall_t GetPublishedFileDetails(PublishedFileId_t unPublishedFileId) = 0;

	virtual SteamAPICall_t DeletePublishedFile(PublishedFileId_t unPublishedFileId) = 0;

	virtual SteamAPICall_t EnumerateUserPublishedFiles(uint32 unStartIndex) = 0;

	virtual SteamAPICall_t SubscribePublishedFile(PublishedFileId_t unPublishedFileId) = 0;

	virtual SteamAPICall_t EnumerateUserSubscribedFiles(uint32 unStartIndex) = 0;

	virtual SteamAPICall_t UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) = 0;
};

#define STEAMREMOTESTORAGE_INTERFACE_VERSION_005 "STEAMREMOTESTORAGE_INTERFACE_VERSION005"