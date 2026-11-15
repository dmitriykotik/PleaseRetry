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

struct SteamServersConnected_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 1 };
};

struct SteamServerConnectFailure_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 2 };
	EResult m_eResult;
	bool m_bStillRetrying;
};

struct SteamServersDisconnected_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 3 };
	EResult m_eResult;
};

struct ClientGameServerDeny_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 13 };

	uint32 m_uAppID;
	uint32 m_unGameServerIP;
	uint16 m_usGameServerPort;
	uint16 m_bSecure;
	uint32 m_uReason;
};

struct IPCFailure_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 17 };
	enum EFailureType 
	{ 
		k_EFailureFlushedCallbackQueue, 
		k_EFailurePipeFail,
	};
	uint8 m_eFailureType;
};

struct LicensesUpdated_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 25 };
};

struct ValidateAuthTicketResponse_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 43 };
	CSteamID m_SteamID;
	EAuthSessionResponse m_eAuthSessionResponse;
	CSteamID m_OwnerSteamID;
};

struct MicroTxnAuthorizationResponse_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 52 };
	
	uint32 m_unAppID;
	uint64 m_ulOrderID;
	uint8 m_bAuthorized;
};

struct EncryptedAppTicketResponse_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 54 };

	EResult m_eResult;
};

struct GetAuthSessionTicketResponse_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 63 };
	HAuthTicket m_hAuthTicket;
	EResult m_eResult;
};

struct GameWebCallback_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 64 };
	char m_szURL[256];
};

struct StoreAuthURLResponse_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 65 };
	char m_szURL[512];
};

struct MarketEligibilityResponse_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 66 };
	bool m_bAllowed;
	EMarketNotAllowedReasonFlags m_eNotAllowedReason;
	RTime32 m_rtAllowedAtTime;

	int m_cdaySteamGuardRequiredDays;
	int m_cdayNewDeviceCooldown;
};

struct DurationControl_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 67 };

	EResult	m_eResult;
	AppId_t m_appid;

	bool m_bApplicable;
	int32 m_csecsLast5h;

	EDurationControlProgress m_progress;
	EDurationControlNotification m_notification;

	int32 m_csecsToday;
	int32 m_csecsRemaining;
};

struct GetTicketForWebApiResponse_t {
	enum { k_iCallback = k_iSteamUserCallbacks + 68 };
	HAuthTicket m_hAuthTicket;
	EResult m_eResult;
	int m_cubTicket;
	static const int k_nCubTicketMaxLength = 2560;
	uint8 m_rgubTicket[k_nCubTicketMaxLength];
};

#pragma pack(pop)