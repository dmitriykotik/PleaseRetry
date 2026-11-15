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
	#error isteamclientpublic.h must be included
#endif 

struct GetVideoURLResult_t {
	enum { k_iCallback = k_iSteamVideoCallbacks + 11 };
	EResult m_eResult;
	AppId_t m_unVideoAppID;
	char m_rgchURL[256];
};

struct GetOPFSettingsResult_t {
	enum { k_iCallback = k_iSteamVideoCallbacks + 24 };
	EResult m_eResult;
	AppId_t m_unVideoAppID;
};

struct BroadcastUploadStart_t {
	enum { k_iCallback = k_iSteamVideoCallbacks + 4 };
	bool m_bIsRTMP;
};

struct BroadcastUploadStop_t {
	enum { k_iCallback = k_iSteamVideoCallbacks + 5 };
	EBroadcastUploadResult m_eResult;
};
#pragma pack( pop )

class ISteamVideo;