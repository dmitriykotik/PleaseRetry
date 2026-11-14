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
#include "steamnetworkingtypes.h"
#include "isteamnetworkingfakeudpport.h"

#if defined(PR_CALLBACK_PACK_SMALL)
	#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
	#pragma pack(push, 8)
#else
	#error "Must define PR_CALLBACK_PACK_SMALL or PR_CALLBACK_PACK_LARGE"
#endif

struct SteamNetConnectionStatusChangedCallback_t {
	enum { k_iCallback = k_iSteamNetworkingSocketsCallbacks + 1 };
	HSteamNetConnection m_hConn;
	SteamNetConnectionInfo_t m_info;
	ESteamNetworkingConnectionState m_eOldState;
};

struct SteamNetAuthenticationStatus_t {
	enum { k_iCallback = k_iSteamNetworkingSocketsCallbacks + 2 };
	ESteamNetworkingAvailability m_eAvail;
	char m_debugMsg[ 256 ];
};

#pragma pack(pop)

class ISteamNetworkingSockets;