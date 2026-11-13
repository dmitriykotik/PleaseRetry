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
#elif defined( PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif

typedef uint64 SteamItemInstanceID_t;

static const SteamItemInstanceID_t k_SteamItemInstanceIDInvalid = (SteamItemInstanceID_t)~0;

typedef int32 SteamItemDef_t;


enum ESteamItemFlags {
	k_ESteamItemNoTrade = 1 << 0,
	k_ESteamItemRemoved = 1 << 8,
	k_ESteamItemConsumed = 1 << 9,
};

struct SteamItemDetails_t {
	SteamItemInstanceID_t m_itemId;
	SteamItemDef_t m_iDefinition;
	uint16 m_unQuantity;
	uint16 m_unFlags;
};

typedef int32 SteamInventoryResult_t;

static const SteamInventoryResult_t k_SteamInventoryResultInvalid = -1;

typedef uint64 SteamInventoryUpdateHandle_t;
const SteamInventoryUpdateHandle_t k_SteamInventoryUpdateHandleInvalid = 0xffffffffffffffffull;

struct SteamInventoryResultReady_t {
	enum { k_iCallback = k_iSteamInventoryCallbacks + 0 };
	SteamInventoryResult_t m_handle;
	EResult m_result;
};

struct SteamInventoryFullUpdate_t {
	enum { k_iCallback = k_iSteamInventoryCallbacks + 1 };
	SteamInventoryResult_t m_handle;
};

struct SteamInventoryDefinitionUpdate_t {
	enum { k_iCallback = k_iSteamInventoryCallbacks + 2 };
};

struct SteamInventoryEligiblePromoItemDefIDs_t {
	enum { k_iCallback = k_iSteamInventoryCallbacks + 3 };
	EResult m_result;
	CSteamID m_steamID;
	int m_numEligiblePromoItemDefs;
	bool m_bCachedData;
};

struct SteamInventoryStartPurchaseResult_t {
	enum { k_iCallback = k_iSteamInventoryCallbacks + 4 };
	EResult m_result;
	uint64 m_ulOrderID;
	uint64 m_ulTransID;
};

struct SteamInventoryRequestPricesResult_t {
	enum { k_iCallback = k_iSteamInventoryCallbacks + 5 };
	EResult m_result;
	char m_rgchCurrency[4];
};
#pragma pack(pop)

class ISteamInventory;