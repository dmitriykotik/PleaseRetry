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

# ISteamNetworking

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  102   |
|   002   |  104   |
|   003   |  110   |
|   004   |  112   |
|   005   |  146   |
|   006   |  165   |

```
001 - 100, 101, 102, G
002 - 103, 104, G
003 - 105, 106, 107, 108, 109, 110, G
004 - 111, 112, G
005 - 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123a, 125, 126a, 127, 128, 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, 143, 144, 145, 146, G
006 - 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                               |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort)`                                                |
|   2   | `SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec)`                                   |
|   3   | `SNetSocket_t CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)`                                                      |
|   4   | `bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                     |
|   5   | `bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)`                                                         |
|   6   | `bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)`                                          |
|   7   | `bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)`                                                             |
|   8   | `bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)`                               |
|   9   | `bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`                                 |
|  10   | `bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`     |
|  11   | `bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)` |
|  12   | `bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)`                                            |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                               |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)`                   |
|   2   | `SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)`      |
|   3   | `SNetSocket_t CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)`                                                      |
|   4   | `bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                     |
|   5   | `bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)`                                                         |
|   6   | `bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)`                                          |
|   7   | `bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)`                                                             |
|   8   | `bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)`                               |
|   9   | `bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`                                 |
|  10   | `bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`     |
|  11   | `bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)` |
|  12   | `bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)`                                            |
|  13   | `ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket)`                                                             |
|  14   | `int GetMaxPacketSize(SNetSocket_t hSocket)`                                                                                          |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                               |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType)`                              |
|   2   | `bool IsP2PPacketAvailable(uint32 *pcubMsgSize)`                                                                                      |
|   3   | `bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote)`                                    |
|   4   | `bool AcceptP2PSessionWithUser(CSteamID steamIDRemote)`                                                                               |
|   5   | `bool CloseP2PSessionWithUser(CSteamID steamIDRemote)`                                                                                |
|   6   | `bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)`                                                |
|   7   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)`                   |
|   8   | `SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)`      |
|   9   | `SNetSocket_t CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)`                                                      |
|  10   | `bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                     |
|  11   | `bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)`                                                         |
|  12   | `bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)`                                          |
|  13   | `bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)`                                                             |
|  14   | `bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)`                               |
|  15   | `bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`                                 |
|  16   | `bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`     |
|  17   | `bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)` |
|  18   | `bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)`                                            |
|  19   | `ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket)`                                                             |
|  20   | `int GetMaxPacketSize(SNetSocket_t hSocket)`                                                                                          |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                                               |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int nVirtualPort = 0)`        |
|   2   | `bool IsP2PPacketAvailable(uint32 *pcubMsgSize, int nVirtualPort = 0)`                                                                |
|   3   | `bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int nVirtualPort = 0)`              |
|   4   | `bool AcceptP2PSessionWithUser(CSteamID steamIDRemote)`                                                                               |
|   5   | `bool CloseP2PSessionWithUser(CSteamID steamIDRemote)`                                                                                |
|   6   | `bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)`                                                |
|   7   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)`                   |
|   8   | `SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)`      |
|   9   | `SNetSocket_t CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)`                                                      |
|  10   | `bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                     |
|  11   | `bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)`                                                         |
|  12   | `bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)`                                          |
|  13   | `bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)`                                                             |
|  14   | `bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)`                               |
|  15   | `bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`                                 |
|  16   | `bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`     |
|  17   | `bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)` |
|  18   | `bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)`                                            |
|  19   | `ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket)`                                                             |
|  20   | `int GetMaxPacketSize(SNetSocket_t hSocket)`                                                                                          |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|  Num  | Methods                                                                                                                               |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel = 0)`            |
|   2   | `bool IsP2PPacketAvailable(uint32 *pcubMsgSize, int nChannel = 0)`                                                                    |
|   3   | `bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int nChannel = 0)`                  |
|   4   | `bool AcceptP2PSessionWithUser(CSteamID steamIDRemote)`                                                                               |
|   5   | `bool CloseP2PSessionWithUser(CSteamID steamIDRemote)`                                                                                |
|   6   | `bool CloseP2PChannelWithUser(CSteamID steamIDRemote, int nChannel)`                                                                  |
|   7   | `bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)`                                                |
|   8   | `bool AllowP2PPacketRelay(bool bAllow)`                                                                                               |
|   9   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)`                   |
|  10   | `SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)`      |
|  11   | `SNetSocket_t CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)`                                                      |
|  12   | `bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                     |
|  13   | `bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)`                                                         |
|  14   | `bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)`                                          |
|  15   | `bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)`                                                             |
|  16   | `bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)`                               |
|  17   | `bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`                                 |
|  18   | `bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`     |
|  19   | `bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)` |
|  20   | `bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)`                                            |
|  21   | `ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket)`                                                             |
|  22   | `int GetMaxPacketSize(SNetSocket_t hSocket)`                                                                                          |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|  Num  | Methods                                                                                                                                         |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel = 0)`                      |
|   2   | `bool IsP2PPacketAvailable(uint32 *pcubMsgSize, int nChannel = 0)`                                                                              |
|   3   | `bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int nChannel = 0)`                            |
|   4   | `bool AcceptP2PSessionWithUser(CSteamID steamIDRemote)`                                                                                         |
|   5   | `bool CloseP2PSessionWithUser(CSteamID steamIDRemote)`                                                                                          |
|   6   | `bool CloseP2PChannelWithUser(CSteamID steamIDRemote, int nChannel)`                                                                            |
|   7   | `bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)`                                                          |
|   8   | `bool AllowP2PPacketRelay(bool bAllow)`                                                                                                         |
|   9   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, SteamIPAddress_t nIP, uint16 nPort, bool bAllowUseOfPacketRelay)`                   |
|  10   | `SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)`                |
|  11   | `SNetSocket_t CreateConnectionSocket(SteamIPAddress_t nIP, uint16 nPort, int nTimeoutSec)`                                                      |
|  12   | `bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                               |
|  13   | `bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                   |
|  14   | `bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)`                                                    |
|  15   | `bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)`                                                                       |
|  16   | `bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)`                                         |
|  17   | `bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`                                           |
|  18   | `bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`               |
|  19   | `bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, SteamIPAddress_t *punIPRemote, uint16 *punPortRemote)` |
|  20   | `bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, SteamIPAddress_t *pnIP, uint16 *pnPort)`                                            |
|  21   | `ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket)`                                                                       |
|  22   | `int GetMaxPacketSize(SNetSocket_t hSocket)`                                                                                                    |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                         | I. Versions                              |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------- |
|   1   | `bool AcceptP2PSessionWithUser(CSteamID steamIDRemote)`                                                                                         | `003`, `004`, `005`, `006`               |
|   2   | `bool AllowP2PPacketRelay(bool bAllow)`                                                                                                         | `005`, `006`                             |
|   3   | `bool CloseP2PChannelWithUser(CSteamID steamIDRemote, int nChannel)`                                                                            | `005`, `006`                             |
|   4   | `bool CloseP2PSessionWithUser(CSteamID steamIDRemote)`                                                                                          | `003`, `004`, `005`, `006`               |
|   5   | `SNetSocket_t CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)`                                                                | `001`, `002`, `003`, `004`, `005`        |
|   6   | `SNetSocket_t CreateConnectionSocket(SteamIPAddress_t nIP, uint16 nPort, int nTimeoutSec)`                                                      | `006`                                    |
|   7   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort)`                                                          | `001`                                    |
|   8   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)`                             | `002`, `003`, `004`, `005`               |
|   9   | `SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, SteamIPAddress_t nIP, uint16 nPort, bool bAllowUseOfPacketRelay)`                   | `006`                                    |
|  10   | `SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec)`                                             | `001`                                    |
|  11   | `SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)`                | `002`, `003`, `004`, `005`, `006`        |
|  12   | `bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                   | `001`, `002`, `003`, `004`, `005`, `006` |
|  13   | `bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)`                                                                               | `001`, `002`, `003`, `004`, `005`, `006` |
|  14   | `bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)`                                                      | `001`, `002`, `003`, `004`, `005`        |
|  15   | `bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, SteamIPAddress_t *pnIP, uint16 *pnPort)`                                            | `006`                                    |
|  16   | `int GetMaxPacketSize(SNetSocket_t hSocket)`                                                                                                    | `002`, `003`, `004`, `005`, `006`        |
|  17   | `bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)`                                                          | `003`, `004`, `005`, `006`               |
|  18   | `ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket)`                                                                       | `002`, `003`, `004`, `005`, `006`        |
|  19   | `bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)`           | `001`, `002`, `003`, `004`, `005`        |
|  20   | `bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, SteamIPAddress_t *punIPRemote, uint16 *punPortRemote)` | `006`                                    |
|  21   | `bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`                                           | `001`, `002`, `003`, `004`, `005`, `006` |
|  22   | `bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)`                                                                       | `001`, `002`, `003`, `004`, `005`, `006` |
|  23   | `bool IsP2PPacketAvailable(uint32 *pcubMsgSize)`                                                                                                | `003`                                    |
|  24   | `bool IsP2PPacketAvailable(uint32 *pcubMsgSize, int nVirtualPort = 0)`                                                                          | `004`                                    |
|  25   | `bool IsP2PPacketAvailable(uint32 *pcubMsgSize, int nChannel = 0)`                                                                              | `005`, `006`                             |
|  26   | `bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote)`                                              | `003`                                    |
|  27   | `bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int nVirtualPort = 0)`                        | `004`                                    |
|  28   | `bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int nChannel = 0)`                            | `005`, `006`                             |
|  29   | `bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)`               | `001`, `002`, `003`, `004`, `005`, `006` |
|  30   | `bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)`                                         | `001`, `002`, `003`, `004`, `005`, `006` |
|  31   | `bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)`                                                    | `001`, `002`, `003`, `004`, `005`, `006` |
|  32   | `bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType)`                                        | `003`                                    |
|  33   | `bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int nVirtualPort = 0)`                  | `004`                                    |
|  34   | `bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel = 0)`                      | `005`, `006`                             |

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
class ISteamNetworking;
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