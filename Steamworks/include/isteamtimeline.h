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

#include "steamtypes.h"
#include "steamclientpublic.h"
#include "steamapiinternal.h"

#if defined(PR_CALLBACK_PACK_SMALL)
	#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
	#pragma pack(push, 8)
#else
	#error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif

enum ETimelineGameMode {
	k_ETimelineGameMode_Invalid = 0,
	k_ETimelineGameMode_Playing = 1,
	k_ETimelineGameMode_Staging = 2,
	k_ETimelineGameMode_Menus = 3,
	k_ETimelineGameMode_LoadingScreen = 4,

	k_ETimelineGameMode_Max,
};

enum ETimelineEventClipPriority {
	k_ETimelineEventClipPriority_Invalid = 0,
	k_ETimelineEventClipPriority_None = 1,
	k_ETimelineEventClipPriority_Standard = 2,
	k_ETimelineEventClipPriority_Featured = 3,
};


const uint32 k_unMaxTimelinePriority = 1000;
const uint32 k_unTimelinePriority_KeepCurrentValue = 1000000;
const float k_flMaxTimelineEventDuration = 600.f;
const uint32 k_cchMaxPhaseIDLength = 64;

typedef uint64 TimelineEventHandle_t;

struct SteamTimelineGamePhaseRecordingExists_t {
	enum { k_iCallback = k_iSteamTimelineCallbacks + 1 };
	char m_rgchPhaseID[k_cchMaxPhaseIDLength];
	uint64 m_ulRecordingMS;
	uint64 m_ulLongestClipMS;
	uint32 m_unClipCount;
	uint32 m_unScreenshotCount;
};

struct SteamTimelineEventRecordingExists_t {
	enum { k_iCallback = k_iSteamTimelineCallbacks + 2 };
	uint64 m_ulEventID;
	bool m_bRecordingExists;
};

#pragma pack(pop)

class ISteamTimeline;