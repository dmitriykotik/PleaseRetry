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

typedef int32 HSteamPipe;
typedef int32 HSteamUser;

const int k_cchMaxSteamErrMsg = 1024;
typedef char SteamErrMsg[k_cchMaxSteamErrMsg];

extern "C" typedef void ( PR_CALLTYPE *SteamAPIWarningMessageHook_t )(int, const char *);
extern "C" typedef uint32 ( PR_CALLTYPE *SteamAPI_CheckCallbackRegistered_t )(int iCallbackNum);

PR_API void PR_CALLTYPE SteamAPI_RunCallbacks();
PR_API void PR_CALLTYPE SteamGameServer_RunCallbacks();

class CCallbackBase {
public:
	CCallbackBase() { m_nCallbackFlags = 0; m_iCallback = 0; }
	virtual void Run(void *pvParam) = 0;
	virtual void Run(void *pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall) = 0;
	int GetICallback() { return m_iCallback; }
	virtual int GetCallbackSizeBytes() = 0;

protected:
	enum { k_ECallbackFlagsRegistered = 0x01, k_ECallbackFlagsGameServer = 0x02 };
	uint8 m_nCallbackFlags;
	int m_iCallback;
	friend class CCallbackMgr;

private:
	CCallbackBase(const CCallbackBase&);
	CCallbackBase& operator=(const CCallbackBase&);
};