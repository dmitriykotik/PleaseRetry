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

# ISteamTV

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |   G    |

```
001 - G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                                                     |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool IsBroadcasting(int *pnNumViewers)`                                                                                                                                    |
|   2   | `void AddBroadcastGameData(const char * pchKey, const char * pchValue)`                                                                                                     |
|   3   | `void RemoveBroadcastGameData(const char * pchKey)`                                                                                                                         |
|   4   | `void AddTimelineMarker(const char * pchTemplateName, bool bPersistent, uint8 nColorR, uint8 nColorG, uint8 nColorB)`                                                       |
|   5   | `void RemoveTimelineMarker()`                                                                                                                                               |
|   6   | `uint32 AddRegion(const char * pchElementName, const char * pchTimelineDataSection, const SteamTVRegion_t * pSteamTVRegion, ESteamTVRegionBehavior eSteamTVRegionBehavior)` |
|   7   | `void RemoveRegion(uint32 unRegionHandle)`                                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                     | I. Versions |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------- |
|   1   | `void AddBroadcastGameData(const char * pchKey, const char * pchValue)`                                                                                                     | `001`       |
|   2   | `uint32 AddRegion(const char * pchElementName, const char * pchTimelineDataSection, const SteamTVRegion_t * pSteamTVRegion, ESteamTVRegionBehavior eSteamTVRegionBehavior)` | `001`       |
|   3   | `void AddTimelineMarker(const char * pchTemplateName, bool bPersistent, uint8 nColorR, uint8 nColorG, uint8 nColorB)`                                                       | `001`       |
|   4   | `bool IsBroadcasting(int *pnNumViewers)`                                                                                                                                    | `001`       |
|   5   | `void RemoveBroadcastGameData(const char * pchKey)`                                                                                                                         | `001`       |
|   6   | `void RemoveRegion(uint32 unRegionHandle)`                                                                                                                                  | `001`       |
|   7   | `void RemoveTimelineMarker()`                                                                                                                                               | `001`       |

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
class ISteamTV;
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