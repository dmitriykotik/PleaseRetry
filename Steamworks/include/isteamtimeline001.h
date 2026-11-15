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

#include "isteamtimeline.h"

class ISteamTimeline001 {
public:
    virtual void SetTimelineStateDescription(const char *pchDescription, float flTimeDelta) = 0;
    
    virtual void ClearTimelineStateDescription(float flTimeDelta) = 0;

    virtual void AddTimelineEvent(const char *pchIcon, const char *pchTitle, const char *pchDescription, uint32 unPriority, float flStartOffsetSeconds, float flDurationSeconds, ETimelineEventClipPriority ePossibleClip) = 0;

    virtual void SetTimelineGameMode(ETimelineGameMode eMode) = 0;
};

#define STEAMTIMELINE_INTERFACE_VERSION_001 "STEAMTIMELINE_INTERFACE_V001"