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

class ISteamApps008 : public ISteamApps {
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
	virtual uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots) = 0;

	virtual uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize) = 0;
	virtual bool BIsAppInstalled(AppId_t appID) = 0;
	
	virtual CSteamID GetAppOwner() = 0; 

	virtual const char *GetLaunchQueryParam(const char *pchKey) = 0; 

	virtual bool GetDlcDownloadProgress(AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal) = 0; 

	virtual int GetAppBuildId() = 0;

	virtual void RequestAllProofOfPurchaseKeys() = 0;

	virtual SteamAPICall_t GetFileDetails(const char* pszFileName) = 0;

	virtual int GetLaunchCommandLine(char *pszCommandLine, int cubCommandLine) = 0;

	virtual bool BIsSubscribedFromFamilySharing() = 0;

	virtual bool BIsTimedTrial(uint32* punSecondsAllowed, uint32* punSecondsPlayed) = 0; 

	virtual bool SetDlcContext(AppId_t nAppID) = 0;

	virtual int  GetNumBetas(int *pnAvailable, int *pnPrivate) = 0;

	virtual bool GetBetaInfo(int iBetaIndex, uint32 *punFlags, uint32 *punBuildID, char *pchBetaName, int cchBetaName, char *pchDescription, int cchDescription) = 0;

	virtual bool SetActiveBeta(const char *pchBetaName) = 0;
};

#define STEAMAPPS_INTERFACE_VERSION_008 "STEAMAPPS_INTERFACE_VERSION008"