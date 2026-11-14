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
#include "steamnetworkingtypes.h"
#include "steamapiinternal.h"

constexpr int k_cbSteamNetworkingSocketsFakeUDPPortRecommendedMTU = 1200;
constexpr int k_cbSteamNetworkingSocketsFakeUDPPortMaxMessageSize = 4096;

class ISteamNetworkingFakeUDPPort {
public:
    virtual void DestroyFakeUDPPort() = 0;

    virtual EResult SendMessageToFakeIP(const SteamNetworkingIPAddr &remoteAddress, const void *pData, uint32 cbData, int nSendFlags) = 0;

    virtual int ReceiveMessages(SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) = 0;

    virtual void ScheduleCleanup(const SteamNetworkingIPAddr &remoteAddress) = 0;
};

#if defined(PR_CALLBACK_PACK_SMALL)
    #pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error "Must define PR_CALLBACK_PACK_SMALL or PR_CALLBACK_PACK_LARGE"
#endif

struct SteamNetworkingFakeIPResult_t {
	enum { k_iCallback = k_iSteamNetworkingSocketsCallbacks + 3 };
	EResult m_eResult;
	SteamNetworkingIdentity m_identity;
	uint32 m_unIP;
	enum { k_nMaxReturnPorts = 8 };
	uint16 m_unPorts[k_nMaxReturnPorts];
};

#pragma pack(pop)