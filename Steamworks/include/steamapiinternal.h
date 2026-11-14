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
#include "steamexports.h"
#include "steamapicommon.h"
#include "steamclientpublic.h"

PR_API HSteamPipe PR_CALLTYPE SteamAPI_GetHSteamPipe();
PR_API HSteamUser PR_CALLTYPE SteamAPI_GetHSteamUser();
PR_API HSteamPipe PR_CALLTYPE SteamGameServer_GetHSteamPipe();
PR_API HSteamUser PR_CALLTYPE SteamGameServer_GetHSteamUser();
PR_API void *PR_CALLTYPE SteamInternal_ContextInit(void *pContextInitData);
PR_API void *PR_CALLTYPE SteamInternal_CreateInterface(const char *ver);
PR_API void *PR_CALLTYPE SteamInternal_FindOrCreateUserInterface(HSteamUser hSteamUser, const char *pszVersion);
PR_API void *PR_CALLTYPE SteamInternal_FindOrCreateGameServerInterface(HSteamUser hSteamUser, const char *pszVersion);
PR_API void PR_CALLTYPE SteamAPI_RegisterCallback(class CCallbackBase *pCallback, int iCallback);
PR_API void PR_CALLTYPE SteamAPI_UnregisterCallback(class CCallbackBase *pCallback);
PR_API void PR_CALLTYPE SteamAPI_RegisterCallResult(class CCallbackBase *pCallback, SteamAPICall_t hAPICall);
PR_API void PR_CALLTYPE SteamAPI_UnregisterCallResult(class CCallbackBase *pCallback, SteamAPICall_t hAPICall);

#if defined(PR_CALLBACK_PACK_SMALL)
    #pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

struct CallbackMsg_t {
	HSteamUser m_hSteamUser;
	int m_iCallback;
	uint8 *m_pubParam;
	int m_cubParam;
};
#pragma pack(pop)

enum { k_iSteamUserCallbacks = 100 };
enum { k_iSteamGameServerCallbacks = 200 };
enum { k_iSteamFriendsCallbacks = 300 };
enum { k_iSteamBillingCallbacks = 400 };
enum { k_iSteamMatchmakingCallbacks = 500 };
enum { k_iSteamContentServerCallbacks = 600 };
enum { k_iSteamUtilsCallbacks = 700 };
enum { k_iSteamAppsCallbacks = 1000 };
enum { k_iSteamUserStatsCallbacks = 1100 };
enum { k_iSteamNetworkingCallbacks = 1200 };
enum { k_iSteamNetworkingSocketsCallbacks = 1220 };
enum { k_iSteamNetworkingMessagesCallbacks = 1250 };
enum { k_iSteamNetworkingUtilsCallbacks = 1280 };
enum { k_iSteamRemoteStorageCallbacks = 1300 };
enum { k_iSteamGameServerItemsCallbacks = 1500 };
enum { k_iSteamGameCoordinatorCallbacks = 1700 };
enum { k_iSteamGameServerStatsCallbacks = 1800 };
enum { k_iSteam2AsyncCallbacks = 1900 };
enum { k_iSteamGameStatsCallbacks = 2000 };
enum { k_iSteamHTTPCallbacks = 2100 };
enum { k_iSteamScreenshotsCallbacks = 2300 };
enum { k_iSteamStreamLauncherCallbacks = 2600 };
enum { k_iSteamControllerCallbacks = 2800 };
enum { k_iSteamUGCCallbacks = 3400 };
enum { k_iSteamStreamClientCallbacks = 3500 };
enum { k_iSteamMusicCallbacks = 4000 };
enum { k_iSteamMusicRemoteCallbacks = 4100 };
enum { k_iSteamGameNotificationCallbacks = 4400 }; 
enum { k_iSteamHTMLSurfaceCallbacks = 4500 };
enum { k_iSteamVideoCallbacks = 4600 };
enum { k_iSteamInventoryCallbacks = 4700 };
enum { k_ISteamParentalSettingsCallbacks = 5000 };
enum { k_iSteamGameSearchCallbacks = 5200 };
enum { k_iSteamPartiesCallbacks = 5300 };
enum { k_iSteamSTARCallbacks = 5500 };
enum { k_iSteamRemotePlayCallbacks = 5700 };
enum { k_iSteamChatCallbacks = 5900 };
enum { k_iSteamTimelineCallbacks = 6000 };