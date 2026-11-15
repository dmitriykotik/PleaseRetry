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

class ISteamUGC001 {
public:
    virtual UGCQueryHandle_t CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) = 0;

    virtual UGCQueryHandle_t CreateQueryAllUGCRequest(EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) = 0;

    virtual SteamAPICall_t SendQueryUGCRequest(UGCQueryHandle_t handle) = 0;

    virtual bool GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t *pDetails) = 0;

    virtual bool ReleaseQueryUGCRequest(UGCQueryHandle_t handle) = 0;

    virtual bool AddRequiredTag(UGCQueryHandle_t handle, const char *pTagName) = 0;

    virtual bool AddExcludedTag(UGCQueryHandle_t handle, const char *pTagName) = 0;

    virtual bool SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) = 0;

    virtual bool SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) = 0;

    virtual bool SetCloudFileNameFilter(UGCQueryHandle_t handle, const char *pMatchCloudFileName) = 0;

    virtual bool SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) = 0;

    virtual bool SetSearchText(UGCQueryHandle_t handle, const char *pSearchText) = 0;
    
    virtual bool SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) = 0;

    virtual SteamAPICall_t RequestUGCDetails(PublishedFileId_t nPublishedFileID) = 0;
};

#define STEAMUGC_INTERFACE_VERSION_001 "STEAMUGC_INTERFACE_VERSION001"