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

# ISteamUnifiedMessages

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  141   |

```
001 - 123a, 125, 126a, 127, 128, 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                         |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `ClientUnifiedMessageHandle SendMethod(const char *pchServiceMethod, const void *pRequestBuffer, uint32 unRequestBufferSize, uint64 unContext)` |
|   2   | `bool GetMethodResponseInfo(ClientUnifiedMessageHandle hHandle, uint32 *punResponseSize, EResult *peResult)`                                    |
|   3   | `bool GetMethodResponseData(ClientUnifiedMessageHandle hHandle, void *pResponseBuffer, uint32 unResponseBufferSize, bool bAutoRelease)`         |
|   4   | `bool ReleaseMethod(ClientUnifiedMessageHandle hHandle)`                                                                                        |
|   5   | `bool SendNotification(const char *pchServiceNotification, const void *pNotificationBuffer, uint32 unNotificationBufferSize)`                   |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                         | I. Versions |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------- | :---------- |
|   1   | `bool GetMethodResponseData(ClientUnifiedMessageHandle hHandle, void *pResponseBuffer, uint32 unResponseBufferSize, bool bAutoRelease)`         | `001`       |
|   2   | `bool GetMethodResponseInfo(ClientUnifiedMessageHandle hHandle, uint32 *punResponseSize, EResult *peResult)`                                    | `001`       |
|   3   | `bool ReleaseMethod(ClientUnifiedMessageHandle hHandle)`                                                                                        | `001`       |
|   4   | `ClientUnifiedMessageHandle SendMethod(const char *pchServiceMethod, const void *pRequestBuffer, uint32 unRequestBufferSize, uint64 unContext)` | `001`       |
|   5   | `bool SendNotification(const char *pchServiceNotification, const void *pNotificationBuffer, uint32 unNotificationBufferSize)`                   | `001`       |

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
class ISteamUnifiedMessages;
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