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
#include "steamremotestoragepublic.h"
#include "steamapiinternal.h"

typedef uint32 ScreenshotHandle; 

enum EVRScreenshotType {
	k_EVRScreenshotType_None			= 0,
	k_EVRScreenshotType_Mono			= 1,
	k_EVRScreenshotType_Stereo			= 2,
	k_EVRScreenshotType_MonoCubemap		= 3,
	k_EVRScreenshotType_MonoPanorama	= 4,
	k_EVRScreenshotType_StereoPanorama	= 5
};

#if defined(PR_CALLBACK_PACK_SMALL)
    #pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif
struct ScreenshotReady_t {
	enum { k_iCallback = k_iSteamScreenshotsCallbacks + 1 };
	ScreenshotHandle m_hLocal;
	EResult m_eResult;
};

struct ScreenshotRequested_t {
	enum { k_iCallback = k_iSteamScreenshotsCallbacks + 2 };
};
#pragma pack(pop)

class ISteamScreenshots;