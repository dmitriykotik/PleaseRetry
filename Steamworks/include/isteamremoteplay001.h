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

#include "isteamremoteplay.h"

class ISteamRemotePlay001 {
public:
	virtual uint32 GetSessionCount() = 0;

	virtual RemotePlaySessionID_t GetSessionID(int iSessionIndex) = 0;

	virtual CSteamID GetSessionSteamID(RemotePlaySessionID_t unSessionID) = 0;

	virtual const char *GetSessionClientName(RemotePlaySessionID_t unSessionID) = 0;

	virtual ESteamDeviceFormFactor GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID) = 0;

	virtual bool BGetSessionClientResolution(RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY) = 0;

	virtual bool BSendRemotePlayTogetherInvite(CSteamID steamIDFriend) = 0;
};

#define STEAMREMOTEPLAY_INTERFACE_VERSION_001 "STEAMREMOTEPLAY_INTERFACE_VERSION001"