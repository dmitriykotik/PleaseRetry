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

class ISteamRemotePlay003 {
public:
	virtual uint32 GetSessionCount() = 0;

	virtual RemotePlaySessionID_t GetSessionID(int iSessionIndex) = 0;

	virtual CSteamID GetSessionSteamID(RemotePlaySessionID_t unSessionID) = 0;

	virtual const char *GetSessionClientName(RemotePlaySessionID_t unSessionID) = 0;

	virtual ESteamDeviceFormFactor GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID) = 0;

	virtual bool BGetSessionClientResolution(RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY) = 0;

	virtual bool ShowRemotePlayTogetherUI() = 0;

	virtual bool BSendRemotePlayTogetherInvite(CSteamID steamIDFriend) = 0;

	virtual bool BEnableRemotePlayTogetherDirectInput() = 0;

	virtual void DisableRemotePlayTogetherDirectInput() = 0;

	virtual uint32 GetInput(RemotePlayInput_t *pInput, uint32 unMaxEvents) = 0;

	virtual void SetMouseVisibility(RemotePlaySessionID_t unSessionID, bool bVisible) = 0;

	virtual void SetMousePosition(RemotePlaySessionID_t unSessionID, float flNormalizedX, float flNormalizedY) = 0;

	virtual RemotePlayCursorID_t CreateMouseCursor(int nWidth, int nHeight, int nHotX, int nHotY, const void *pBGRA, int nPitch = 0) = 0;

	virtual void SetMouseCursor(RemotePlaySessionID_t unSessionID, RemotePlayCursorID_t unCursorID) = 0;
};

#define STEAMREMOTEPLAY_INTERFACE_VERSION_003 "STEAMREMOTEPLAY_INTERFACE_VERSION003"