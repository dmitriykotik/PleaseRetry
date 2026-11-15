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

#include "isteamunifiedmessages.h"

class ISteamUnifiedMessages001 {
public:
    virtual ClientUnifiedMessageHandle SendMethod(const char *pchServiceMethod, const void *pRequestBuffer, uint32 unRequestBufferSize, uint64 unContext) = 0;

    virtual bool GetMethodResponseInfo(ClientUnifiedMessageHandle hHandle, uint32 *punResponseSize, EResult *peResult) = 0;

    virtual bool GetMethodResponseData(ClientUnifiedMessageHandle hHandle, void *pResponseBuffer, uint32 unResponseBufferSize, bool bAutoRelease) = 0;

    virtual bool ReleaseMethod(ClientUnifiedMessageHandle hHandle) = 0;

    virtual bool SendNotification(const char *pchServiceNotification, const void *pNotificationBuffer, uint32 unNotificationBufferSize) = 0;
};

#define STEAMUNIFIEDMESSAGES_INTERFACE_VERSION_001 "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001"