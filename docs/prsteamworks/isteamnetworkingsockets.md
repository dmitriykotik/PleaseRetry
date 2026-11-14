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

# ISteamNetworkingSockets

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   002   |  144   |
|   003   |  145   |
|   004   |  146   |
|   006   |  147   |
|   008   |  149   |
|   009   |  152   |
|   012   |  164   |
|   013   |  165   |

```
002 - 144, G
003 - 145, G
004 - 146, G
006 - 147, G
008 - 148a, 149, G
009 - 150, 151, 152, G
012 - 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, G
013 - 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `EResult SendMessageToUser(const SteamNetworkingIdentity &identityRemote, const void *pubData, uint32 cubData, int nSendFlags, int nRemoteChannel)`                                                    |
|   2   | `int ReceiveMessagesOnChannel(int nLocalChannel, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                          |
|   3   | `bool AcceptSessionWithUser(const SteamNetworkingIdentity &identityRemote)`                                                                                                                            |
|   4   | `bool CloseSessionWithUser(const SteamNetworkingIdentity &identityRemote)`                                                                                                                             |
|   5   | `bool CloseChannelWithUser(const SteamNetworkingIdentity &identityRemote, int nLocalChannel)`                                                                                                          |
|   6   | `ESteamNetworkingConnectionState GetSessionConnectionInfo(const SteamNetworkingIdentity &identityRemote, SteamNetConnectionInfo_t *pConnectionInfo, SteamNetConnectionRealTimeStatus_t *pQuickStatus)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                | I. Versions |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------- |
|   1   | `bool AcceptSessionWithUser(const SteamNetworkingIdentity &identityRemote)`                                                                                                                            | `002`       |
|   2   | `bool CloseChannelWithUser(const SteamNetworkingIdentity &identityRemote, int nLocalChannel)`                                                                                                          | `002`       |
|   3   | `bool CloseSessionWithUser(const SteamNetworkingIdentity &identityRemote)`                                                                                                                             | `002`       |
|   4   | `ESteamNetworkingConnectionState GetSessionConnectionInfo(const SteamNetworkingIdentity &identityRemote, SteamNetConnectionInfo_t *pConnectionInfo, SteamNetConnectionRealTimeStatus_t *pQuickStatus)` | `002`       |
|   5   | `int ReceiveMessagesOnChannel(int nLocalChannel, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                          | `002`       |
|   6   | `EResult SendMessageToUser(const SteamNetworkingIdentity &identityRemote, const void *pubData, uint32 cubData, int nSendFlags, int nRemoteChannel)`                                                    | `002`       |

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
class ISteamNetworkingSockets;
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