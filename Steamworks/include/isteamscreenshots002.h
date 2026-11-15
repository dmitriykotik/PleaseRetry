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

#include "isteamscreenshots.h"

class ISteamScreenshots002 {
public:
	virtual ScreenshotHandle WriteScreenshot(void *pubRGB, uint32 cubRGB, int nWidth, int nHeight) = 0;

	virtual ScreenshotHandle AddScreenshotToLibrary(const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight) = 0;

	virtual void TriggerScreenshot() = 0;

	virtual void HookScreenshots(bool bHook) = 0;

	virtual bool SetLocation(ScreenshotHandle hScreenshot, const char *pchLocation) = 0;

	virtual bool TagUser(ScreenshotHandle hScreenshot, CSteamID steamID) = 0;

	virtual bool TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID) = 0;
};

#define STEAMSCREENSHOTS_INTERFACE_VERSION_002 "STEAMSCREENSHOTS_INTERFACE_VERSION002"