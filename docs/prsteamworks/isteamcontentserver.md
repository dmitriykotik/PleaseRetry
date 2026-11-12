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

# ISteamContentServer

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |   O    |
|   002   |   O    |

```
001 - O
002 - O
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                   |
| :---: | :------------------------------------------------------------------------ |
|   1   | `bool LogOn(uint32 uContentServerID)`                                     |
|   2   | `bool LogOff()`                                                           |
|   3   | `bool BLoggedOn()`                                                        |
|   4   | `void SendClientContentAuthRequest(CSteamID steamID, uint32 unContentID)` |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                             |
| :---: | :------------------------------------------------------------------------------------------------------------------ |
|   1   | `bool LogOn(uint32 uContentServerID)`                                                                               |
|   2   | `bool LogOff()`                                                                                                     |
|   3   | `bool BLoggedOn()`                                                                                                  |
|   4   | `void SendClientContentAuthRequest(CSteamID steamID, uint32 uContentID, uint64 ulSessionToken, bool bTokenPresent)` |
|   5   | `bool BCheckTicket(CSteamID steamID, uint32 uContentID, const void *pvTicketData, uint32 cubTicketLength)`          |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                             | I. Versions  |
| :---: | :------------------------------------------------------------------------------------------------------------------ | :----------- |
|   1   | `bool BCheckTicket(CSteamID steamID, uint32 uContentID, const void *pvTicketData, uint32 cubTicketLength)`          | `002`        |
|   2   | `bool BLoggedOn()`                                                                                                  | `001`, `002` |
|   3   | `bool LogOff()`                                                                                                     | `001`, `002` |
|   4   | `bool LogOn(uint32 uContentServerID)`                                                                               | `001`, `002` |
|   5   | `void SendClientContentAuthRequest(CSteamID steamID, uint32 unContentID)`                                           | `001`        |
|   6   | `void SendClientContentAuthRequest(CSteamID steamID, uint32 uContentID, uint64 ulSessionToken, bool bTokenPresent)` | `002`        |

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
class ISteamContentServer;
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