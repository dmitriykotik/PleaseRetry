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

# ISteamMatchmakingServers

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  105   |
|   002   |  164   |
|   003   |  165   |

```
001 - 100, 101, 102, 103, 104, 105, G
002 - 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123a, 125, 126a, 127, 128, 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, G
003 - 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                                                 |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `void RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`  |
|   2   | `void RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse)`                                                                 |
|   3   | `void RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`   |
|   4   | `void RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)` |
|   5   | `void RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`   |
|   6   | `void RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)` |
|   7   | `gameserveritem_t *GetServerDetails(EMatchMakingType eType, int iServer)`                                                                                               |
|   8   | `void CancelQuery(EMatchMakingType eType)`                                                                                                                              |
|   9   | `void RefreshQuery(EMatchMakingType eType)`                                                                                                                             |
|  10   | `bool IsRefreshing(EMatchMakingType eType)`                                                                                                                             |
|  11   | `int GetServerCount(EMatchMakingType eType)`                                                                                                                            |
|  12   | `void RefreshServer(EMatchMakingType eType, int iServer)`                                                                                                               |
|  13   | `HServerQuery PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse)`                                                           |
|  14   | `HServerQuery PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse)`                                                     |
|  15   | `HServerQuery ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse)`                                                         |
|  16   | `void CancelServerQuery(HServerQuery hServerQuery)`                                                                                                                     |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                                                                               |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `HServerListRequest RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`  |
|   2   | `HServerListRequest RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse)`                                                                 |
|   3   | `HServerListRequest RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`   |
|   4   | `HServerListRequest RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)` |
|   5   | `HServerListRequest RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`   |
|   6   | `HServerListRequest RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)` |
|   7   | `void ReleaseRequest(HServerListRequest hServerListRequest)`                                                                                                                          |
|   8   | `gameserveritem_t *GetServerDetails(HServerListRequest hRequest, int iServer)`                                                                                                        |
|   9   | `void CancelQuery(HServerListRequest hRequest)`                                                                                                                                       |
|  10   | `void RefreshQuery(HServerListRequest hRequest)`                                                                                                                                      |
|  11   | `bool IsRefreshing(HServerListRequest hRequest)`                                                                                                                                      |
|  12   | `int GetServerCount(HServerListRequest hRequest)`                                                                                                                                     |
|  13   | `void RefreshServer(HServerListRequest hRequest, int iServer)`                                                                                                                        |
|  14   | `HServerQuery PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse)`                                                                         |
|  15   | `HServerQuery PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse)`                                                                   |
|  16   | `HServerQuery ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse)`                                                                       |
|  17   | `void CancelServerQuery(HServerQuery hServerQuery)`                                                                                                                                   |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                                                                               |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `HServerListRequest RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`  |
|   2   | `HServerListRequest RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse)`                                                                 |
|   3   | `HServerListRequest RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`   |
|   4   | `HServerListRequest RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)` |
|   5   | `HServerListRequest RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`   |
|   6   | `HServerListRequest RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)` |
|   7   | `void ReleaseRequest(HServerListRequest hServerListRequest)`                                                                                                                          |
|   8   | `gameserveritem_t *GetServerDetails(HServerListRequest hRequest, int iServer)`                                                                                                        |
|   9   | `void CancelQuery(HServerListRequest hRequest)`                                                                                                                                       |
|  10   | `void RefreshQuery(HServerListRequest hRequest)`                                                                                                                                      |
|  11   | `bool IsRefreshing(HServerListRequest hRequest)`                                                                                                                                      |
|  12   | `int GetServerCount(HServerListRequest hRequest)`                                                                                                                                     |
|  13   | `void RefreshServer(HServerListRequest hRequest, int iServer)`                                                                                                                        |
|  14   | `HServerQuery PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse)`                                                                         |
|  15   | `HServerQuery PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse)`                                                                   |
|  16   | `HServerQuery ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse)`                                                                       |
|  17   | `HServerQuery ServerFriends(uint32 unIP, uint16 usPort, ISteamMatchmakingServerFriendsResponse *pRequestServersResponse)`                                                             |
|  18   | `void CancelServerQuery(HServerQuery hServerQuery)`                                                                                                                                   |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                               | I. Versions         |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------ |
|   1   | `void CancelQuery(EMatchMakingType eType)`                                                                                                                                            | `001`               |
|   2   | `void CancelQuery(HServerListRequest hRequest)`                                                                                                                                       | `002`, `003`        |
|   3   | `void CancelServerQuery(HServerQuery hServerQuery)`                                                                                                                                   | `001`, `002`, `003` |
|   4   | `int GetServerCount(EMatchMakingType eType)`                                                                                                                                          | `001`               |
|   5   | `int GetServerCount(HServerListRequest hRequest)`                                                                                                                                     | `002`, `003`        |
|   6   | `gameserveritem_t *GetServerDetails(EMatchMakingType eType, int iServer)`                                                                                                             | `001`               |
|   7   | `gameserveritem_t *GetServerDetails(HServerListRequest hRequest, int iServer)`                                                                                                        | `002`, `003`        |
|   8   | `bool IsRefreshing(EMatchMakingType eType)`                                                                                                                                           | `001`               |
|   9   | `bool IsRefreshing(HServerListRequest hRequest)`                                                                                                                                      | `002`, `003`        |
|  10   | `HServerQuery PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse)`                                                                         | `001`, `002`, `003` |
|  11   | `HServerQuery PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse)`                                                                   | `001`, `002`, `003` |
|  12   | `void RefreshQuery(EMatchMakingType eType)`                                                                                                                                           | `001`               |
|  13   | `void RefreshQuery(HServerListRequest hRequest)`                                                                                                                                      | `002`, `003`        |
|  14   | `void RefreshServer(EMatchMakingType eType, int iServer)`                                                                                                                             | `001`               |
|  15   | `void RefreshServer(HServerListRequest hRequest, int iServer)`                                                                                                                        | `002`, `003`        |
|  16   | `void ReleaseRequest(HServerListRequest hServerListRequest)`                                                                                                                          | `002`, `003`        |
|  17   | `void RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`               | `001`               |
|  18   | `HServerListRequest RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)` | `002`, `003`        |
|  19   | `void RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`                 | `001`               |
|  20   | `HServerListRequest RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`   | `002`, `003`        |
|  21   | `void RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`                 | `001`               |
|  22   | `HServerListRequest RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`   | `002`, `003`        |
|  23   | `void RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`                | `001`               |
|  24   | `HServerListRequest RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`  | `002`, `003`        |
|  25   | `void RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse)`                                                                               | `001`               |
|  26   | `HServerListRequest RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse)`                                                                 | `002`, `003`        |
|  27   | `void RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)`               | `001`               |
|  28   | `HServerListRequest RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)` | `002`, `003`        |
|  29   | `HServerQuery ServerFriends(uint32 unIP, uint16 usPort, ISteamMatchmakingServerFriendsResponse *pRequestServersResponse)`                                                             | `003`               |
|  30   | `HServerQuery ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse)`                                                                       | `001`, `002`, `003` |

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
class ISteamMatchmakingServers;
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