```
//==== PleaseRetryEmu / Copyright (C) 2026, dmitriykotik. MIT License. ========//
// This documentation is part of PleaseRetryEmu, an open-source project.
// This Software and documentation are provided strictly "AS IS", without
// warranty of any kind, express or implied.
//
// LEGAL NOTICE: This project is an independent compatibility layer and is NOT
// affiliated with, endorsed, or authorized by Valve Corporation. "Steam" and
// "Steamworks" are registered trademarks of Valve Corporation.
//
// Developed strictly for EDUCATIONAL, RESEARCH, and software preservation
// purposes. The author holds NO LIABILITY for any misuse, legal consequences,
// or third-party restrictions. All actions are performed at your own risk.
//=============================================================================//
```

# ISteamInventory

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  139   |
|   002   |  142   |
|   005   |  165   |

```
001 - 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, G
002 - 140, 141, 142, G
003 - 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `EResult GetResultStatus(SteamInventoryResult_t resultHandle)` |
| 2 | `bool GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)` |
| 3 | `uint32 GetResultTimestamp(SteamInventoryResult_t resultHandle)` |
| 4 | `bool CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)` |
| 5 | `void DestroyResult(SteamInventoryResult_t resultHandle)` |
| 6 | `bool GetAllItems(SteamInventoryResult_t *pResultHandle)` |
| 7 | `bool GetItemsByID(SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)` |
| 8 | `bool SerializeResult(SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)` |
| 9 | `bool DeserializeResult(SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE = false)` |
| 10 | `bool GenerateItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)` |
| 11 | `bool GrantPromoItems(SteamInventoryResult_t *pResultHandle)` |
| 12 | `bool AddPromoItem(SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)` |
| 13 | `bool AddPromoItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)` |
| 14 | `bool ConsumeItem(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)` |
| 15 | `bool ExchangeItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)` |
| 16 | `bool TransferItemQuantity(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)` |
| 17 | `void SendItemDropHeartbeat()` |
| 18 | `bool TriggerItemDrop(SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)` |
| 19 | `bool TradeItems(SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)` |
| 20 | `bool LoadItemDefinitions()` |
| 21 | `bool GetItemDefinitionIDs(SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)` |
| 22 | `bool GetItemDefinitionProperty(SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)` |
| 23 | `SteamAPICall_t RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID)` |
| 24 | `bool GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)` |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `EResult GetResultStatus(SteamInventoryResult_t resultHandle)` |
| 2 | `bool GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)` |
| 3 | `bool GetResultItemProperty(SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)` |
| 4 | `uint32 GetResultTimestamp(SteamInventoryResult_t resultHandle)` |
| 5 | `bool CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)` |
| 6 | `void DestroyResult(SteamInventoryResult_t resultHandle)` |
| 7 | `bool GetAllItems(SteamInventoryResult_t *pResultHandle)` |
| 8 | `bool GetItemsByID(SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)` |
| 9 | `bool SerializeResult(SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)` |
| 10 | `bool DeserializeResult(SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE = false)` |
| 11 | `bool GenerateItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)` |
| 12 | `bool GrantPromoItems(SteamInventoryResult_t *pResultHandle)` |
| 13 | `bool AddPromoItem(SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)` |
| 14 | `bool AddPromoItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)` |
| 15 | `bool ConsumeItem(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)` |
| 16 | `bool ExchangeItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)` |
| 17 | `bool TransferItemQuantity(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)` |
| 18 | `void SendItemDropHeartbeat()` |
| 19 | `bool TriggerItemDrop(SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)` |
| 20 | `bool TradeItems(SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)` |
| 21 | `bool LoadItemDefinitions()` |
| 22 | `bool GetItemDefinitionIDs(SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)` |
| 23 | `bool GetItemDefinitionProperty(SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)` |
| 24 | `SteamAPICall_t RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID)` |
| 25 | `bool GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)` |
| 26 | `SteamAPICall_t StartPurchase(const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)` |
| 27 | `SteamAPICall_t RequestPrices()` |
| 28 | `uint32 GetNumItemsWithPrices()` |
| 29 | `bool GetItemsWithPrices(SteamItemDef_t *pArrayItemDefs, uint64 *pPrices, uint32 unArrayLength)` |
| 30 | `bool GetItemPrice(SteamItemDef_t iDefinition, uint64 *pPrice)` |
| 31 | `SteamInventoryUpdateHandle_t StartUpdateProperties()` |
| 32 | `bool RemoveProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName)` |
| 33 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, const char *pchPropertyValue)` |
| 34 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, bool bValue)` |
| 35 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, int64 nValue)` |
| 36 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, float flValue)` |
| 37 | `bool SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t *pResultHandle)` |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `EResult GetResultStatus(SteamInventoryResult_t resultHandle)` |
| 2 | `bool GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)` |
| 3 | `bool GetResultItemProperty(SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)` |
| 4 | `uint32 GetResultTimestamp(SteamInventoryResult_t resultHandle)` |
| 5 | `bool CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)` |
| 6 | `void DestroyResult(SteamInventoryResult_t resultHandle)` |
| 7 | `bool GetAllItems(SteamInventoryResult_t *pResultHandle)` |
| 8 | `bool GetItemsByID(SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)` |
| 9 | `bool SerializeResult(SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)` |
| 10 | `bool DeserializeResult(SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE = false)` |
| 11 | `bool GenerateItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)` |
| 12 | `bool GrantPromoItems(SteamInventoryResult_t *pResultHandle)` |
| 13 | `bool AddPromoItem(SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)` |
| 14 | `bool AddPromoItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)` |
| 15 | `bool ConsumeItem(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)` |
| 16 | `bool ExchangeItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)` |
| 17 | `bool TransferItemQuantity(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)` |
| 18 | `void SendItemDropHeartbeat()` |
| 19 | `bool TriggerItemDrop(SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)` |
| 20 | `bool TradeItems(SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)` |
| 21 | `bool LoadItemDefinitions()` |
| 22 | `bool GetItemDefinitionIDs(SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)` |
| 23 | `bool GetItemDefinitionProperty(SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)` |
| 24 | `SteamAPICall_t RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID)` |
| 25 | `bool GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)` |
| 26 | `SteamAPICall_t StartPurchase(const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)` |
| 27 | `SteamAPICall_t RequestPrices()` |
| 28 | `uint32 GetNumItemsWithPrices()` |
| 29 | `bool GetItemsWithPrices(SteamItemDef_t *pArrayItemDefs, uint64 *pCurrentPrices, uint64 *pBasePrices, uint32 unArrayLength)` |
| 30 | `bool GetItemPrice(SteamItemDef_t iDefinition, uint64 *pCurrentPrice, uint64 *pBasePrice)` |
| 31 | `SteamInventoryUpdateHandle_t StartUpdateProperties()` |
| 32 | `bool RemoveProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName)` |
| 33 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, const char *pchPropertyValue)` |
| 34 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, bool bValue)` |
| 35 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, int64 nValue)` |
| 36 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, float flValue)` |
| 37 | `bool SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t *pResultHandle)` |
| 38 | `bool InspectItem(SteamInventoryResult_t *pResultHandle, const char *pchItemToken)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|Num|Methods|I. Versions|
| :-: | :- | :- |
| 1 | `bool AddPromoItem(SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)` | `001`, `002`, `003` |
| 2 | `bool AddPromoItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)` | `001`, `002`, `003` |
| 3 | `bool CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)` | `001`, `002`, `003` |
| 4 | `bool ConsumeItem(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)` | `001`, `002`, `003` |
| 5 | `bool DeserializeResult(SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE = false)` | `001`, `002`, `003` |
| 6 | `void DestroyResult(SteamInventoryResult_t resultHandle)` | `001`, `002`, `003` |
| 7 | `bool ExchangeItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)` | `001`, `002`, `003` |
| 8 | `bool GenerateItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)` | `001`, `002`, `003` |
| 9 | `bool GetAllItems(SteamInventoryResult_t *pResultHandle)` | `001`, `002`, `003` |
| 10 | `bool GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)` | `001`, `002`, `003` |
| 11 | `bool GetItemDefinitionIDs(SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)` | `001`, `002`, `003` |
| 12 | `bool GetItemDefinitionProperty(SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)` | `001`, `002`, `003` |
| 13 | `bool GetItemPrice(SteamItemDef_t iDefinition, uint64 *pPrice)` | `002` |
| 14 | `bool GetItemPrice(SteamItemDef_t iDefinition, uint64 *pCurrentPrice, uint64 *pBasePrice)` | `003` |
| 15 | `bool GetItemsByID(SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)` | `001`, `002`, `003` |
| 16 | `bool GetItemsWithPrices(SteamItemDef_t *pArrayItemDefs, uint64 *pPrices, uint32 unArrayLength)` | `002` |
| 17 | `bool GetItemsWithPrices(SteamItemDef_t *pArrayItemDefs, uint64 *pCurrentPrices, uint64 *pBasePrices, uint32 unArrayLength)` | `003` |
| 18 | `uint32 GetNumItemsWithPrices()` | `002`, `003` |
| 19 | `bool GetResultItemProperty(SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)` | `002`, `003` |
| 20 | `bool GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)` | `001`, `002`, `003` |
| 21 | `EResult GetResultStatus(SteamInventoryResult_t resultHandle)` | `001`, `002`, `003` |
| 22 | `uint32 GetResultTimestamp(SteamInventoryResult_t resultHandle)` | `001`, `002`, `003` |
| 23 | `bool GrantPromoItems(SteamInventoryResult_t *pResultHandle)` | `001`, `002`, `003` |
| 24 | `bool InspectItem(SteamInventoryResult_t *pResultHandle, const char *pchItemToken)` | `003` |
| 25 | `bool LoadItemDefinitions()` | `001`, `002`, `003` |
| 26 | `bool RemoveProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName)` | `002`, `003` |
| 27 | `SteamAPICall_t RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID)` | `001`, `002`, `003` |
| 28 | `SteamAPICall_t RequestPrices()` | `002`, `003` |
| 29 | `void SendItemDropHeartbeat()` | `001`, `002`, `003` |
| 30 | `bool SerializeResult(SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)` | `001`, `002`, `003` |
| 31 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, const char *pchPropertyValue)` | `002`, `003` |
| 32 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, bool bValue)` | `002`, `003` |
| 33 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, int64 nValue)` | `002`, `003` |
| 34 | `bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, float flValue)` | `002`, `003` |
| 35 | `SteamAPICall_t StartPurchase(const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)` | `002`, `003` |
| 36 | `SteamInventoryUpdateHandle_t StartUpdateProperties()` | `002`, `003` |
| 37 | `bool SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t *pResultHandle)` | `002`, `003` |
| 38 | `bool TradeItems(SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)` | `001`, `002`, `003` |
| 39 | `bool TransferItemQuantity(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)` | `001`, `002`, `003` |
| 40 | `bool TriggerItemDrop(SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)` | `001`, `002`, `003` |

</details>
<!-- #endregion -->

</details>
<!-- #endregion -->

<!-- #region Disclaimer -->
```
// ---- DISCLAIMER -------------------------------------------------------------- //
// Официальная документация отсутствует. Данные могут быть неточными или сырыми.
// Если вы нашли ошибку, пожалуйста, исправьте её или создайте Issue/PR.
// ------------------------------------------------------------------------------ //
```
<!-- #endregion -->

<!-- #region Doc -->
```cpp
class ISteamInventory;
```

Описание класса.

## Method
```cpp
Type Method(typeVar variable)
```

| Название   | Тип       | Описание             |
| :--------- | :-------- | :------------------- |
| `variable` | `typeVar` | Описание переменной. |

Описание метода.

**Возвращает:** `Type`\
Описание возвращаемого значения.

> [!WARNING]
> На данный момент это лишь прототип документации.
<!-- #endregion -->