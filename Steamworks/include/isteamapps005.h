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

#include "isteamapps.h"

class ISteamApps005 : public ISteamApps {
public:
    virtual bool BIsSubscribed() = 0;
	virtual bool BIsLowViolence() = 0;
	virtual bool BIsCybercafe() = 0;
	virtual bool BIsVACBanned() = 0;
	virtual const char *GetCurrentGameLanguage() = 0;
	virtual const char *GetAvailableGameLanguages() = 0;

	virtual bool BIsSubscribedApp(AppId_t appID) = 0;

	virtual bool BIsDlcInstalled(AppId_t appID) = 0;

	virtual uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID) = 0;

	virtual bool BIsSubscribedFromFreeWeekend() = 0;

	virtual int GetDLCCount() = 0;

	virtual bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize) = 0;

	virtual void InstallDLC(AppId_t nAppID) = 0;
	virtual void UninstallDLC(AppId_t nAppID) = 0;

	virtual void RequestAppProofOfPurchaseKey(AppId_t nAppID) = 0;

	virtual bool GetCurrentBetaName(char *pchName, int cchNameBufferSize) = 0;
	virtual bool MarkContentCorrupt(bool bMissingFilesOnly) = 0;
	virtual uint32 GetInstalledDepots(DepotId_t *pvecDepots, uint32 cMaxDepots) = 0;

	virtual uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize) = 0;
	virtual bool BIsAppInstalled(AppId_t appID) = 0;
};

#define STEAMAPPS_INTERFACE_VERSION_005 "STEAMAPPS_INTERFACE_VERSION005"