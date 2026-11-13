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

#include "isteaminventory.h"

class ISteamInventory001 {
public:
	virtual EResult GetResultStatus(SteamInventoryResult_t resultHandle) = 0;

	virtual bool GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize) = 0;

	virtual uint32 GetResultTimestamp(SteamInventoryResult_t resultHandle) = 0;

	virtual bool CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected) = 0;

	virtual void DestroyResult(SteamInventoryResult_t resultHandle) = 0;

	virtual bool GetAllItems(SteamInventoryResult_t *pResultHandle) = 0;

	virtual bool GetItemsByID(SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs) = 0;

	virtual bool SerializeResult(SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize) = 0;

	virtual bool DeserializeResult(SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE = false) = 0;

	virtual bool GenerateItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength) = 0;

	virtual bool GrantPromoItems(SteamInventoryResult_t *pResultHandle) = 0;

	virtual bool AddPromoItem(SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef) = 0;

	virtual bool AddPromoItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength) = 0;

	virtual bool ConsumeItem(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity) = 0;

	virtual bool ExchangeItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength) = 0;

	virtual bool TransferItemQuantity(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest) = 0;

	virtual void SendItemDropHeartbeat() = 0;

	virtual bool TriggerItemDrop(SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition) = 0;

	virtual bool TradeItems(SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength) = 0;

	virtual bool LoadItemDefinitions() = 0;

	virtual bool GetItemDefinitionIDs(SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize) = 0;

	virtual bool GetItemDefinitionProperty(SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut) = 0;

	virtual SteamAPICall_t RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID) = 0;

	virtual bool GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize) = 0;
};

#define STEAMINVENTORY_INTERFACE_VERSION_001 "STEAMINVENTORY_INTERFACE_V001"