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

class ISteamTimeline004 {
public:
    virtual void SetTimelineTooltip(const char *pchDescription, float flTimeDelta) = 0;

    virtual void ClearTimelineTooltip(float flTimeDelta) = 0;

    virtual void SetTimelineGameMode(ETimelineGameMode eMode) = 0;

    virtual TimelineEventHandle_t AddInstantaneousTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unIconPriority, float flStartOffsetSeconds = 0.f, ETimelineEventClipPriority ePossibleClip = k_ETimelineEventClipPriority_None) = 0;

    virtual TimelineEventHandle_t AddRangeTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unIconPriority, float flStartOffsetSeconds = 0.f, float flDuration = 0.f, ETimelineEventClipPriority ePossibleClip = k_ETimelineEventClipPriority_None) = 0;

    virtual TimelineEventHandle_t StartRangeTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unPriority, float flStartOffsetSeconds, ETimelineEventClipPriority ePossibleClip) = 0;

    virtual void UpdateRangeTimelineEvent(TimelineEventHandle_t ulEvent, const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unPriority, ETimelineEventClipPriority ePossibleClip) = 0;

    virtual void EndRangeTimelineEvent(TimelineEventHandle_t ulEvent, float flEndOffsetSeconds) = 0;

    virtual void RemoveTimelineEvent(TimelineEventHandle_t ulEvent) = 0;

    virtual SteamAPICall_t DoesEventRecordingExist(TimelineEventHandle_t ulEvent) = 0;

    virtual void StartGamePhase() = 0;

    virtual void EndGamePhase() = 0;

    virtual void SetGamePhaseID(const char *pchPhaseID) = 0;

    virtual SteamAPICall_t DoesGamePhaseRecordingExist(const char *pchPhaseID) = 0;

    virtual void AddGamePhaseTag(const char *pchTagName, const char *pchTagIcon, const char *pchTagGroup, uint32 unPriority) = 0;

    virtual void SetGamePhaseAttribute(const char *pchAttributeGroup, const char *pchAttributeValue, uint32 unPriority) = 0;

    virtual void OpenOverlayToGamePhase(const char *pchPhaseID) = 0;

    virtual void OpenOverlayToTimelineEvent(const TimelineEventHandle_t ulEvent) = 0;
};

#define STEAMTIMELINE_INTERFACE_VERSION_004 "STEAMTIMELINE_INTERFACE_V004"