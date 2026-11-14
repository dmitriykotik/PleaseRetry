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

# ISteamParties

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   002   |  165   |

```
002 - 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetNumActiveBeacons()` |
| 2 | `PartyBeaconID_t GetBeaconByIndex(uint32 unIndex)` |
| 3 | `bool GetBeaconDetails(PartyBeaconID_t ulBeaconID, CSteamID *pSteamIDBeaconOwner, SteamPartyBeaconLocation_t *pLocation, char *pchMetadata, int cchMetadata)` |
| 4 | `SteamAPICall_t JoinParty(PartyBeaconID_t ulBeaconID)` |
| 5 | `bool GetNumAvailableBeaconLocations(uint32 *puNumLocations)` |
| 6 | `bool GetAvailableBeaconLocations(SteamPartyBeaconLocation_t *pLocationList, uint32 uMaxNumLocations)` |
| 7 | `SteamAPICall_t CreateBeacon(uint32 unOpenSlots, SteamPartyBeaconLocation_t *pBeaconLocation, const char *pchConnectString, const char *pchMetadata)` |
| 8 | `void OnReservationCompleted(PartyBeaconID_t ulBeacon, CSteamID steamIDUser)` |
| 9 | `void CancelReservation(PartyBeaconID_t ulBeacon, CSteamID steamIDUser)` |
| 10 | `SteamAPICall_t ChangeNumOpenSlots(PartyBeaconID_t ulBeacon, uint32 unOpenSlots)` |
| 11 | `bool DestroyBeacon(PartyBeaconID_t ulBeacon)` |
| 12 | `bool GetBeaconLocationData(SteamPartyBeaconLocation_t BeaconLocation, ESteamPartyBeaconLocationData eData, char *pchDataStringOut, int cchDataStringOut)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|Num|Methods|I. Versions|
| :-: | :- | :- |
| 1 | `void CancelReservation(PartyBeaconID_t ulBeacon, CSteamID steamIDUser)` | `002` |
| 2 | `SteamAPICall_t ChangeNumOpenSlots(PartyBeaconID_t ulBeacon, uint32 unOpenSlots)` | `002` |
| 3 | `SteamAPICall_t CreateBeacon(uint32 unOpenSlots, SteamPartyBeaconLocation_t *pBeaconLocation, const char *pchConnectString, const char *pchMetadata)` | `002` |
| 4 | `bool DestroyBeacon(PartyBeaconID_t ulBeacon)` | `002` |
| 5 | `bool GetAvailableBeaconLocations(SteamPartyBeaconLocation_t *pLocationList, uint32 uMaxNumLocations)` | `002` |
| 6 | `PartyBeaconID_t GetBeaconByIndex(uint32 unIndex)` | `002` |
| 7 | `bool GetBeaconDetails(PartyBeaconID_t ulBeaconID, CSteamID *pSteamIDBeaconOwner, SteamPartyBeaconLocation_t *pLocation, char *pchMetadata, int cchMetadata)` | `002` |
| 8 | `bool GetBeaconLocationData(SteamPartyBeaconLocation_t BeaconLocation, ESteamPartyBeaconLocationData eData, char *pchDataStringOut, int cchDataStringOut)` | `002` |
| 9 | `uint32 GetNumActiveBeacons()` | `002` |
| 10 | `bool GetNumAvailableBeaconLocations(uint32 *puNumLocations)` | `002` |
| 11 | `SteamAPICall_t JoinParty(PartyBeaconID_t ulBeaconID)` | `002` |
| 12 | `void OnReservationCompleted(PartyBeaconID_t ulBeacon, CSteamID steamIDUser)` | `002` |

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
class ISteamParties;
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