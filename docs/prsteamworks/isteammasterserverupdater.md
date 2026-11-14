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

# ISteamMasterServerUpdater

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  116   |

```
001 - 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, G
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
| 1 | `void SetActive(bool bActive)` |
| 2 | `void SetHeartbeatInterval(int iHeartbeatInterval)` |
| 3 | `bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)` |
| 4 | `int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)` |
| 5 | `void SetBasicServerData(unsigned short nProtocolVersion, bool bDedicatedServer, const char *pRegionName, const char *pProductName, unsigned short nMaxReportedClients, bool bPasswordProtected, const char *pGameDescription)` |
| 6 | `void ClearAllKeyValues()` |
| 7 | `void SetKeyValue(const char *pKey, const char *pValue)` |
| 8 | `void NotifyShutdown()` |
| 9 | `bool WasRestartRequested()` |
| 10 | `void ForceHeartbeat()` |
| 11 | `bool AddMasterServer(const char *pServerAddress)` |
| 12 | `bool RemoveMasterServer(const char *pServerAddress)` |
| 13 | `int GetNumMasterServers()` |
| 14 | `int GetMasterServerAddress(int iServer, char *pOut, int outBufferSize)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|Num|Methods|I. Versions|
| :-: | :- | :- |
| 1 | `bool AddMasterServer(const char *pServerAddress)` | `001` |
| 2 | `void ClearAllKeyValues()` | `001` |
| 3 | `void ForceHeartbeat()` | `001` |
| 4 | `int GetMasterServerAddress(int iServer, char *pOut, int outBufferSize)` | `001` |
| 5 | `int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)` | `001` |
| 6 | `int GetNumMasterServers()` | `001` |
| 7 | `bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)` | `001` |
| 8 | `void NotifyShutdown()` | `001` |
| 9 | `bool RemoveMasterServer(const char *pServerAddress)` | `001` |
| 10 | `void SetActive(bool bActive)` | `001` |
| 11 | `void SetBasicServerData(unsigned short nProtocolVersion, bool bDedicatedServer, const char *pRegionName, const char *pProductName, unsigned short nMaxReportedClients, bool bPasswordProtected, const char *pGameDescription)` | `001` |
| 12 | `void SetHeartbeatInterval(int iHeartbeatInterval)` | `001` |
| 13 | `void SetKeyValue(const char *pKey, const char *pValue)` | `001` |
| 14 | `bool WasRestartRequested()` | `001` |

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
class ISteamMasterServerUpdater;
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