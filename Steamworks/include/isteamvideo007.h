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

#include "isteamvideo.h"

class ISteamVideo007 {
public:
    virtual void GetVideoURL(AppId_t unVideoAppID) = 0;

    virtual bool IsBroadcasting(int *pnNumViewers) = 0;

    virtual void GetOPFSettings(AppId_t unVideoAppID) = 0;

    virtual bool GetOPFStringForApp(AppId_t unVideoAppID, char *pchBuffer, int32 *pnBufferSize) = 0;
};

#define STEAMVIDEO_INTERFACE_VERSION_007 "STEAMVIDEO_INTERFACE_V007"