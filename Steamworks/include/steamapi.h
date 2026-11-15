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
#include "steamapiinternal.h"

enum ESteamAPIInitResult {
    k_ESteamAPIInitResult_OK = 0,
    k_ESteamAPIInitResult_FailedGeneric = 1,
    k_ESteamAPIInitResult_NoSteamClient = 2,
    k_ESteamAPIInitResult_VersionMismatch = 3,
};

enum EServerMode {
    eServerModeInvalid = 0,
    eServerModeNoAuthentication = 1,
    eServerModeAuthentication = 2,
    eServerModeAuthenticationAndSecure = 3,
};

const uint16 STEAMGAMESERVER_QUERY_PORT_SHARED = 0xffff;
const uint16 MASTERSERVERUPDATERPORT_USEGAMESOCKETSHARE = STEAMGAMESERVER_QUERY_PORT_SHARED;

#if defined(_PS3)
    PR_API bool PR_CALLTYPE SteamAPI_Init(SteamPS3Params_t *pParams);
#else
    PR_API bool PR_CALLTYPE SteamAPI_Init();
#endif

PR_API bool PR_CALLTYPE SteamAPI_InitSafe();
PR_API ESteamAPIInitResult PR_CALLTYPE SteamAPI_InitFlat(SteamErrMsg *pOutErrMsg);
PR_API ESteamAPIInitResult PR_CALLTYPE SteamInternal_SteamAPI_Init(const char *pszInternalCheckInterfaceVersions, SteamErrMsg *pOutErrMsg);
PR_API void PR_CALLTYPE SteamAPI_Shutdown();
PR_API bool PR_CALLTYPE SteamAPI_RestartApp(uint32 unOwnAppID);
PR_API bool PR_CALLTYPE SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID);
PR_API void PR_CALLTYPE SteamAPI_ReleaseCurrentThreadMemory();
PR_API void PR_CALLTYPE SteamAPI_WriteMiniDump(uint32 uStructuredExceptionCode, void *pvExceptionInfo, uint32 uBuildID);
PR_API void PR_CALLTYPE SteamAPI_SetMiniDumpComment(const char *pchMsg);
PR_API bool PR_CALLTYPE SteamAPI_IsSteamRunning();
PR_API const char *PR_CALLTYPE SteamAPI_GetSteamInstallPath();
PR_API void PR_CALLTYPE SteamAPI_SetTryCatchCallbacks(bool bTryCatchCallbacks);
PR_API void PR_CALLTYPE SteamAPI_RunCallbacks();
PR_API void PR_CALLTYPE SteamAPI_UseBreakpadCrashHandler(char const *pchVersion, char const *pchDate, char const *pchTime, bool bFullMemoryDumps, void *pvContext, PFNPreMinidumpCallback m_pfnPreMinidumpCallback);
PR_API void PR_CALLTYPE SteamAPI_SetBreakpadAppID(uint32 unAppID);

PR_API void PR_CALLTYPE SteamAPI_ManualDispatch_Init();
PR_API void PR_CALLTYPE SteamAPI_ManualDispatch_RunFrame(HSteamPipe hSteamPipe);
PR_API bool PR_CALLTYPE SteamAPI_ManualDispatch_GetNextCallback(HSteamPipe hSteamPipe, CallbackMsg_t *pCallbackMsg);
PR_API void PR_CALLTYPE SteamAPI_ManualDispatch_FreeLastCallback(HSteamPipe hSteamPipe);
PR_API bool PR_CALLTYPE SteamAPI_ManualDispatch_GetAPICallResult(HSteamPipe hSteamPipe, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed);

PR_API void PR_CALLTYPE Steam_RunCallbacks(HSteamPipe hSteamPipe, bool bGameServerCallbacks);
PR_API void PR_CALLTYPE Steam_RegisterInterfaceFuncs(void *hModule);
PR_API HSteamUser PR_CALLTYPE Steam_GetHSteamUserCurrent();
PR_API HSteamPipe PR_CALLTYPE GetHSteamPipe();
PR_API HSteamUser PR_CALLTYPE GetHSteamUser();
PR_API HSteamPipe PR_CALLTYPE SteamAPI_GetHSteamPipe();
PR_API HSteamUser PR_CALLTYPE SteamAPI_GetHSteamUser();
PR_API HSteamPipe PR_CALLTYPE SteamGameServer_GetHSteamPipe();
PR_API HSteamUser PR_CALLTYPE SteamGameServer_GetHSteamUser();
PR_API bool PR_CALLTYPE SteamInternal_Init();
PR_API void *PR_CALLTYPE SteamInternal_ContextInit(void *pContextInitData);
PR_API void *PR_CALLTYPE SteamInternal_CreateInterface(const char *ver);
PR_API void *PR_CALLTYPE SteamInternal_FindOrCreateUserInterface(HSteamUser hSteamUser, const char *pszVersion);
PR_API void *PR_CALLTYPE SteamInternal_FindOrCreateGameServerInterface(HSteamUser hSteamUser, const char *pszVersion);
PR_API void PR_CALLTYPE SteamAPI_RegisterCallback(class CCallbackBase *pCallback, int iCallback);
PR_API void PR_CALLTYPE SteamAPI_UnregisterCallback(class CCallbackBase *pCallback);
PR_API void PR_CALLTYPE SteamAPI_RegisterCallResult(class CCallbackBase *pCallback, SteamAPICall_t hAPICall);
PR_API void PR_CALLTYPE SteamAPI_UnregisterCallResult(class CCallbackBase *pCallback, SteamAPICall_t hAPICall);

PR_API bool PR_CALLTYPE SteamGameServer_Init(uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString);
PR_API bool PR_CALLTYPE SteamGameServer_InitSafe(uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString);
PR_API bool PR_CALLTYPE SteamInternal_GameServer_Init(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString);
PR_API ESteamAPIInitResult PR_CALLTYPE SteamInternal_GameServer_Init_V2(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString, const char *pszInternalCheckInterfaceVersions, SteamErrMsg *pOutErrMsg);
PR_API void PR_CALLTYPE SteamGameServer_Shutdown();
PR_API void PR_CALLTYPE SteamGameServer_RunCallbacks();
PR_API bool PR_CALLTYPE SteamGameServer_BSecure();
PR_API uint64 PR_CALLTYPE SteamGameServer_GetSteamID();
PR_API uint32 PR_CALLTYPE SteamGameServer_GetIPCCallCount();