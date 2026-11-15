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

typedef uint64 ClientUnifiedMessageHandle;
const ClientUnifiedMessageHandle k_InvalidUnifiedMessageHandle = 0;

#if defined(PR_CALLBACK_PACK_SMALL)
	#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
	#pragma pack(push, 8)
#else
	#error isteamclientpublic.h must be included
#endif 

struct SteamUnifiedMessagesSendMethodResult_t {
	enum { k_iCallback = k_iSteamUnifiedMessagesCallbacks + 1 };
	ClientUnifiedMessageHandle m_hHandle;
	uint64 m_unContext;
	EResult m_eResult;
	uint32 m_unResponseSize;
};
#pragma pack( pop )

class ISteamUnifiedMessages;