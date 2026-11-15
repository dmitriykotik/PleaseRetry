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

# ISteamRemotePlay

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  157   |
|   002   |  161   |
|   003   |  163   |
|   004   |  165   |

```
001 - 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, G
002 - 158a, 159, 160, 161
003 - 162, 163
004 - 164, 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                       |
| :---: | :------------------------------------------------------------------------------------------------------------ |
|   1   | `uint32 GetSessionCount()`                                                                                    |
|   2   | `RemotePlaySessionID_t GetSessionID(int iSessionIndex)`                                                       |
|   3   | `CSteamID GetSessionSteamID(RemotePlaySessionID_t unSessionID)`                                               |
|   4   | `const char *GetSessionClientName(RemotePlaySessionID_t unSessionID)`                                         |
|   5   | `ESteamDeviceFormFactor GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID)`                        |
|   6   | `bool BGetSessionClientResolution(RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY)` |
|   7   | `bool BSendRemotePlayTogetherInvite(CSteamID steamIDFriend)`                                                  |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                       |
| :---: | :------------------------------------------------------------------------------------------------------------ |
|   1   | `uint32 GetSessionCount()`                                                                                    |
|   2   | `RemotePlaySessionID_t GetSessionID(int iSessionIndex)`                                                       |
|   3   | `CSteamID GetSessionSteamID(RemotePlaySessionID_t unSessionID)`                                               |
|   4   | `const char *GetSessionClientName(RemotePlaySessionID_t unSessionID)`                                         |
|   5   | `ESteamDeviceFormFactor GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID)`                        |
|   6   | `bool BGetSessionClientResolution(RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY)` |
|   7   | `bool BStartRemotePlayTogether(bool bShowOverlay = true)`                                                     |
|   8   | `bool BSendRemotePlayTogetherInvite(CSteamID steamIDFriend)`                                                  |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                    |
| :---: | :------------------------------------------------------------------------------------------------------------------------- |
|   1   | `uint32 GetSessionCount()`                                                                                                 |
|   2   | `RemotePlaySessionID_t GetSessionID(int iSessionIndex)`                                                                    |
|   3   | `CSteamID GetSessionSteamID(RemotePlaySessionID_t unSessionID)`                                                            |
|   4   | `const char *GetSessionClientName(RemotePlaySessionID_t unSessionID)`                                                      |
|   5   | `ESteamDeviceFormFactor GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID)`                                     |
|   6   | `bool BGetSessionClientResolution(RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY)`              |
|   7   | `bool ShowRemotePlayTogetherUI()`                                                                                          |
|   8   | `bool BSendRemotePlayTogetherInvite(CSteamID steamIDFriend)`                                                               |
|   9   | `bool BEnableRemotePlayTogetherDirectInput()`                                                                              |
|  10   | `void DisableRemotePlayTogetherDirectInput()`                                                                              |
|  11   | `uint32 GetInput(RemotePlayInput_t *pInput, uint32 unMaxEvents)`                                                           |
|  12   | `void SetMouseVisibility(RemotePlaySessionID_t unSessionID, bool bVisible)`                                                |
|  13   | `void SetMousePosition(RemotePlaySessionID_t unSessionID, float flNormalizedX, float flNormalizedY)`                       |
|  14   | `RemotePlayCursorID_t CreateMouseCursor(int nWidth, int nHeight, int nHotX, int nHotY, const void *pBGRA, int nPitch = 0)` |
|  15   | `void SetMouseCursor(RemotePlaySessionID_t unSessionID, RemotePlayCursorID_t unCursorID)`                                  |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                                    |
| :---: | :------------------------------------------------------------------------------------------------------------------------- |
|   1   | `uint32 GetSessionCount()`                                                                                                 |
|   2   | `RemotePlaySessionID_t GetSessionID(int iSessionIndex)`                                                                    |
|   3   | `bool BSessionRemotePlayTogether(RemotePlaySessionID_t unSessionID)`                                                       |
|   4   | `CSteamID GetSessionSteamID(RemotePlaySessionID_t unSessionID)`                                                            |
|   5   | `uint32 GetSessionGuestID(RemotePlaySessionID_t unSessionID)`                                                              |
|   6   | `int GetSmallSessionAvatar(RemotePlaySessionID_t unSessionID)`                                                             |
|   7   | `int GetMediumSessionAvatar(RemotePlaySessionID_t unSessionID)`                                                            |
|   8   | `int GetLargeSessionAvatar(RemotePlaySessionID_t unSessionID)`                                                             |
|   9   | `const char *GetSessionClientName(RemotePlaySessionID_t unSessionID)`                                                      |
|  10   | `ESteamDeviceFormFactor GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID)`                                     |
|  11   | `bool BGetSessionClientResolution(RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY)`              |
|  12   | `bool ShowRemotePlayTogetherUI()`                                                                                          |
|  13   | `bool BSendRemotePlayTogetherInvite(CSteamID steamIDFriend)`                                                               |
|  14   | `bool BEnableRemotePlayTogetherDirectInput()`                                                                              |
|  15   | `void DisableRemotePlayTogetherDirectInput()`                                                                              |
|  16   | `uint32 GetInput(RemotePlayInput_t *pInput, uint32 unMaxEvents)`                                                           |
|  17   | `void SetMouseVisibility(RemotePlaySessionID_t unSessionID, bool bVisible)`                                                |
|  18   | `void SetMousePosition(RemotePlaySessionID_t unSessionID, float flNormalizedX, float flNormalizedY)`                       |
|  19   | `RemotePlayCursorID_t CreateMouseCursor(int nWidth, int nHeight, int nHotX, int nHotY, const void *pBGRA, int nPitch = 0)` |
|  20   | `void SetMouseCursor(RemotePlaySessionID_t unSessionID, RemotePlayCursorID_t unCursorID)`                                  |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                    | I. Versions                |
| :---: | :------------------------------------------------------------------------------------------------------------------------- | :------------------------- |
|   1   | `bool BEnableRemotePlayTogetherDirectInput()`                                                                              | `003`, `004`               |
|   2   | `bool BGetSessionClientResolution(RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY)`              | `001`, `002`, `003`, `004` |
|   3   | `bool BSendRemotePlayTogetherInvite(CSteamID steamIDFriend)`                                                               | `001`, `002`, `003`, `004` |
|   4   | `bool BSessionRemotePlayTogether(RemotePlaySessionID_t unSessionID)`                                                       | `004`                      |
|   5   | `bool BStartRemotePlayTogether(bool bShowOverlay = true)`                                                                  | `002`                      |
|   6   | `RemotePlayCursorID_t CreateMouseCursor(int nWidth, int nHeight, int nHotX, int nHotY, const void *pBGRA, int nPitch = 0)` | `003`, `004`               |
|   7   | `void DisableRemotePlayTogetherDirectInput()`                                                                              | `003`, `004`               |
|   8   | `uint32 GetInput(RemotePlayInput_t *pInput, uint32 unMaxEvents)`                                                           | `003`, `004`               |
|   9   | `int GetLargeSessionAvatar(RemotePlaySessionID_t unSessionID)`                                                             | `004`                      |
|  10   | `int GetMediumSessionAvatar(RemotePlaySessionID_t unSessionID)`                                                            | `004`                      |
|  11   | `ESteamDeviceFormFactor GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID)`                                     | `001`, `002`, `003`, `004` |
|  12   | `const char *GetSessionClientName(RemotePlaySessionID_t unSessionID)`                                                      | `001`, `002`, `003`, `004` |
|  13   | `uint32 GetSessionCount()`                                                                                                 | `001`, `002`, `003`, `004` |
|  14   | `uint32 GetSessionGuestID(RemotePlaySessionID_t unSessionID)`                                                              | `004`                      |
|  15   | `RemotePlaySessionID_t GetSessionID(int iSessionIndex)`                                                                    | `001`, `002`, `003`, `004` |
|  16   | `CSteamID GetSessionSteamID(RemotePlaySessionID_t unSessionID)`                                                            | `001`, `002`, `003`, `004` |
|  17   | `int GetSmallSessionAvatar(RemotePlaySessionID_t unSessionID)`                                                             | `004`                      |
|  18   | `void SetMouseCursor(RemotePlaySessionID_t unSessionID, RemotePlayCursorID_t unCursorID)`                                  | `003`, `004`               |
|  19   | `void SetMousePosition(RemotePlaySessionID_t unSessionID, float flNormalizedX, float flNormalizedY)`                       | `003`, `004`               |
|  20   | `void SetMouseVisibility(RemotePlaySessionID_t unSessionID, bool bVisible)`                                                | `003`, `004`               |
|  21   | `bool ShowRemotePlayTogetherUI()`                                                                                          | `003`, `004`               |

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
class ISteamRemotePlay;
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