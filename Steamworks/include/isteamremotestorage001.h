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

class ISteamRemoteStorage001 {
public:
	virtual bool FileWrite(const char *pchFile, const void *pvData, int32 cubData) = 0;

	virtual int32 GetFileSize(const char *pchFile) = 0;

	virtual int32 FileRead(const char *pchFile, void *pvData, int32 cubDataToRead) = 0;

	virtual bool FileExists(const char *pchFile) = 0;

	virtual bool FileDelete(const char *pchFile) = 0;

	virtual int32 GetFileCount() = 0;

	virtual const char *GetFileNameAndSize(int iFile, int32 *pnFileSizeInBytes) = 0;

	virtual bool GetQuota(int32 *pnTotalBytes, int32 *puAvailableBytes) = 0;
};

#define STEAMREMOTESTORAGE_INTERFACE_VERSION_001 "STEAMREMOTESTORAGE_INTERFACE_VERSION001"