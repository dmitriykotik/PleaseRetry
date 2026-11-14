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

# ISteamGameSearch

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  162   |

```
001 - 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, G
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
| 1 | `EGameSearchErrorCode_t AddGameSearchParams(const char *pchKeyToFind, const char *pchValuesToFind)` |
| 2 | `EGameSearchErrorCode_t SearchForGameWithLobby(CSteamID steamIDLobby, int nPlayerMin, int nPlayerMax)` |
| 3 | `EGameSearchErrorCode_t SearchForGameSolo(int nPlayerMin, int nPlayerMax)` |
| 4 | `EGameSearchErrorCode_t AcceptGame()` |
| 5 | `EGameSearchErrorCode_t DeclineGame()` |
| 6 | `EGameSearchErrorCode_t RetrieveConnectionDetails(CSteamID steamIDHost, char *pchConnectionDetails, int cubConnectionDetails)` |
| 7 | `EGameSearchErrorCode_t EndGameSearch()` |
| 8 | `EGameSearchErrorCode_t SetGameHostParams(const char *pchKey, const char *pchValue)` |
| 9 | `EGameSearchErrorCode_t SetConnectionDetails(const char *pchConnectionDetails, int cubConnectionDetails)` |
| 10 | `EGameSearchErrorCode_t RequestPlayersForGame(int nPlayerMin, int nPlayerMax, int nMaxTeamSize)` |
| 11 | `EGameSearchErrorCode_t HostConfirmGameStart(uint64 ullUniqueGameID)` |
| 12 | `EGameSearchErrorCode_t CancelRequestPlayersForGame()` |
| 13 | `EGameSearchErrorCode_t SubmitPlayerResult(uint64 ullUniqueGameID, CSteamID steamIDPlayer, EPlayerResult_t EPlayerResult)` |
| 14 | `EGameSearchErrorCode_t EndGame(uint64 ullUniqueGameID)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|Num|Methods|I. Versions|
| :-: | :- | :- |
| 1 | `EGameSearchErrorCode_t AcceptGame()` | `001` |
| 2 | `EGameSearchErrorCode_t AddGameSearchParams(const char *pchKeyToFind, const char *pchValuesToFind)` | `001` |
| 3 | `EGameSearchErrorCode_t CancelRequestPlayersForGame()` | `001` |
| 4 | `EGameSearchErrorCode_t DeclineGame()` | `001` |
| 5 | `EGameSearchErrorCode_t EndGame(uint64 ullUniqueGameID)` | `001` |
| 6 | `EGameSearchErrorCode_t EndGameSearch()` | `001` |
| 7 | `EGameSearchErrorCode_t HostConfirmGameStart(uint64 ullUniqueGameID)` | `001` |
| 8 | `EGameSearchErrorCode_t RequestPlayersForGame(int nPlayerMin, int nPlayerMax, int nMaxTeamSize)` | `001` |
| 9 | `EGameSearchErrorCode_t RetrieveConnectionDetails(CSteamID steamIDHost, char *pchConnectionDetails, int cubConnectionDetails)` | `001` |
| 10 | `EGameSearchErrorCode_t SearchForGameSolo(int nPlayerMin, int nPlayerMax)` | `001` |
| 11 | `EGameSearchErrorCode_t SearchForGameWithLobby(CSteamID steamIDLobby, int nPlayerMin, int nPlayerMax)` | `001` |
| 12 | `EGameSearchErrorCode_t SetConnectionDetails(const char *pchConnectionDetails, int cubConnectionDetails)` | `001` |
| 13 | `EGameSearchErrorCode_t SetGameHostParams(const char *pchKey, const char *pchValue)` | `001` |
| 14 | `EGameSearchErrorCode_t SubmitPlayerResult(uint64 ullUniqueGameID, CSteamID steamIDPlayer, EPlayerResult_t EPlayerResult)` | `001` |

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
class ISteamGameSearch;
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