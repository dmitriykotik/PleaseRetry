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

# ISteamGameServerStats

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  165   |

```
001 - 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123a, 125, 126a, 127, 128, 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                  |
| :---: | :----------------------------------------------------------------------------------------------------------------------- |
|   1   | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)`                                                                  |
|   2   | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)`                                              |
|   3   | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)`                                              |
|   4   | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)`                                   |
|   5   | `bool SetUserStat(CSteamID steamIDUser, const char *pchName, int32 nData)`                                               |
|   6   | `bool SetUserStat(CSteamID steamIDUser, const char *pchName, float fData)`                                               |
|   7   | `bool UpdateUserAvgRateStat(CSteamID steamIDUser, const char *pchName, float flCountThisSession, double dSessionLength)` |
|   8   | `bool SetUserAchievement(CSteamID steamIDUser, const char *pchName)`                                                     |
|   9   | `bool ClearUserAchievement(CSteamID steamIDUser, const char *pchName)`                                                   |
|  10   | `SteamAPICall_t StoreUserStats(CSteamID steamIDUser)`                                                                    |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                  | I. Versions |
| :---: | :----------------------------------------------------------------------------------------------------------------------- | :---------- |
|   1   | `bool ClearUserAchievement(CSteamID steamIDUser, const char *pchName)`                                                   | `001`       |
|   2   | `bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)`                                   | `001`       |
|   3   | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)`                                              | `001`       |
|   4   | `bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)`                                              | `001`       |
|   5   | `SteamAPICall_t RequestUserStats(CSteamID steamIDUser)`                                                                  | `001`       |
|   6   | `bool SetUserAchievement(CSteamID steamIDUser, const char *pchName)`                                                     | `001`       |
|   7   | `bool SetUserStat(CSteamID steamIDUser, const char *pchName, int32 nData)`                                               | `001`       |
|   8   | `bool SetUserStat(CSteamID steamIDUser, const char *pchName, float fData)`                                               | `001`       |
|   9   | `SteamAPICall_t StoreUserStats(CSteamID steamIDUser)`                                                                    | `001`       |
|  10   | `bool UpdateUserAvgRateStat(CSteamID steamIDUser, const char *pchName, float flCountThisSession, double dSessionLength)` | `001`       |

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
class ISteamGameServerStats;
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