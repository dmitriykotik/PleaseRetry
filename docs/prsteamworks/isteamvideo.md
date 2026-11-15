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

# ISteamVideo

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  139   |
|   002   |  159   |
|   007   |  165   |

```
001 - 132, 133b, 134, 135, 135a, 136, 137, 138a, 139
002 - 140, 141, 142, 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, G
007 - 160, 161, 162, 163, 164, 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                  |
| :---: | :--------------------------------------- |
|   1   | `void GetVideoURL(AppId_t unVideoAppID)` |
|   2   | `bool IsBroadcasting(int *pnNumViewers)` |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                               |
| :---: | :------------------------------------------------------------------------------------ |
|   1   | `void GetVideoURL(AppId_t unVideoAppID)`                                              |
|   2   | `bool IsBroadcasting(int *pnNumViewers)`                                              |
|   3   | `void GetOPFSettings(AppId_t unVideoAppID)`                                           |
|   4   | `bool GetOPFStringForApp(AppId_t unVideoAppID, char *pchBuffer, int32 *pnBufferSize)` |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|  Num  | Methods                                                                               |
| :---: | :------------------------------------------------------------------------------------ |
|   1   | `void GetVideoURL(AppId_t unVideoAppID)`                                              |
|   2   | `bool IsBroadcasting(int *pnNumViewers)`                                              |
|   3   | `void GetOPFSettings(AppId_t unVideoAppID)`                                           |
|   4   | `bool GetOPFStringForApp(AppId_t unVideoAppID, char *pchBuffer, int32 *pnBufferSize)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                               | I. Versions         |
| :---: | :------------------------------------------------------------------------------------ | :------------------ |
|   1   | `void GetOPFSettings(AppId_t unVideoAppID)`                                           | `002`, `007`        |
|   2   | `bool GetOPFStringForApp(AppId_t unVideoAppID, char *pchBuffer, int32 *pnBufferSize)` | `002`, `007`        |
|   3   | `void GetVideoURL(AppId_t unVideoAppID)`                                              | `001`, `002`, `007` |
|   4   | `bool IsBroadcasting(int *pnNumViewers)`                                              | `001`, `002`, `007` |

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
class ISteamVideo;
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