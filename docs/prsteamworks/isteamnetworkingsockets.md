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

|  Num  | Methods                                                                                                                                                                                                             |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress)`                                                                                                                                |
|   2   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address)`                                                                                                                                      |
|   3   | `HSteamListenSocket CreateListenSocketP2P(int nVirtualPort)`                                                                                                                                                        |
|   4   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nVirtualPort)`                                                                                                                   |
|   5   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                               |
|   6   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                            |
|   7   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                |
|   8   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                            |
|   9   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                            |
|  10   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                            |
|  11   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                     |
|  12   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags)`                                                                                                      |
|  13   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                      |
|  14   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                            |
|  15   | `int ReceiveMessagesOnListenSocket(HSteamListenSocket hSocket, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                         |
|  16   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                |
|  17   | `bool GetQuickConnectionStatus(HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)`                                                                                                            |
|  18   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                               |
|  19   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                           |
|  20   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)` |
|  21   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                              |
|  22   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                  |
|  23   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                             |
|  24   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nVirtualPort)`                                                                                               |
|  25   | `uint16 GetHostedDedicatedServerPort()`                                                                                                                                                                             |
|  26   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                              |
|  27   | `bool GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                        |
|  28   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nVirtualPort)`                                                                                                                                      |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                             |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress)`                                                                                                                                |
|   2   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address)`                                                                                                                                      |
|   3   | `HSteamListenSocket CreateListenSocketP2P(int nVirtualPort)`                                                                                                                                                        |
|   4   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nVirtualPort)`                                                                                                                   |
|   5   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                               |
|   6   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                            |
|   7   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                |
|   8   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                            |
|   9   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                            |
|  10   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                            |
|  11   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                     |
|  12   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags)`                                                                                                      |
|  13   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                      |
|  14   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                            |
|  15   | `int ReceiveMessagesOnListenSocket(HSteamListenSocket hSocket, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                         |
|  16   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                |
|  17   | `bool GetQuickConnectionStatus(HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)`                                                                                                            |
|  18   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                               |
|  19   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                           |
|  20   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)` |
|  21   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                              |
|  22   | `ESteamNetworkingAvailability InitAuthentication()`                                                                                                                                                                 |
|  23   | `ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails)`                                                                                                                    |
|  24   | `bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg)`                                                                                                                              |
|  25   | `bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg)`                                                                                                                   |
|  26   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                  |
|  27   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                             |
|  28   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nVirtualPort)`                                                                                               |
|  29   | `uint16 GetHostedDedicatedServerPort()`                                                                                                                                                                             |
|  30   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                              |
|  31   | `EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                     |
|  32   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nVirtualPort)`                                                                                                                                      |
|  33   | `EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)`                                                                                       |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                             |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress)`                                                                                                                                |
|   2   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address)`                                                                                                                                      |
|   3   | `HSteamListenSocket CreateListenSocketP2P(int nVirtualPort)`                                                                                                                                                        |
|   4   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nVirtualPort)`                                                                                                                   |
|   5   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                               |
|   6   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                            |
|   7   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                |
|   8   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                            |
|   9   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                            |
|  10   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                            |
|  11   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                     |
|  12   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags)`                                                                                                      |
|  13   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                      |
|  14   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                            |
|  15   | `int ReceiveMessagesOnListenSocket(HSteamListenSocket hSocket, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                         |
|  16   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                |
|  17   | `bool GetQuickConnectionStatus(HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)`                                                                                                            |
|  18   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                               |
|  19   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                           |
|  20   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)` |
|  21   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                              |
|  22   | `ESteamNetworkingAvailability InitAuthentication()`                                                                                                                                                                 |
|  23   | `ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails)`                                                                                                                    |
|  24   | `bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg)`                                                                                                                              |
|  25   | `bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg)`                                                                                                                   |
|  26   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                  |
|  27   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                             |
|  28   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nVirtualPort)`                                                                                               |
|  29   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                              |
|  30   | `EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                     |
|  31   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nVirtualPort)`                                                                                                                                      |
|  32   | `EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)`                                                                                       |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                             |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                    |
|   2   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                          |
|   3   | `HSteamListenSocket CreateListenSocketP2P(int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                            |
|   4   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                       |
|   5   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                               |
|   6   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                            |
|   7   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                |
|   8   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                            |
|   9   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                            |
|  10   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                            |
|  11   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                     |
|  12   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)`                                                                            |
|  13   | `void SendMessages(int nMessages, SteamNetworkingMessage_t *const *pMessages, int64 *pOutMessageNumberOrResult)`                                                                                                    |
|  14   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                      |
|  15   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                            |
|  16   | `int ReceiveMessagesOnListenSocket(HSteamListenSocket hSocket, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                         |
|  17   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                |
|  18   | `bool GetQuickConnectionStatus(HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)`                                                                                                            |
|  19   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                               |
|  20   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                           |
|  21   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)` |
|  22   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                              |
|  23   | `ESteamNetworkingAvailability InitAuthentication()`                                                                                                                                                                 |
|  24   | `ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails)`                                                                                                                    |
|  25   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                  |
|  26   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                             |
|  27   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                   |
|  28   | `uint16 GetHostedDedicatedServerPort()`                                                                                                                                                                             |
|  29   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                              |
|  30   | `EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                     |
|  31   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                          |
|  32   | `EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)`                                                                                       |
|  33   | `HSteamNetConnection ConnectP2PCustomSignaling(ISteamNetworkingConnectionCustomSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`    |
|  34   | `bool ReceivedP2PCustomSignal(const void *pMsg, int cbMsg, ISteamNetworkingCustomSignalingRecvContext *pContext)`                                                                                                   |
|  35   | `bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg)`                                                                                                                              |
|  36   | `bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg)`                                                                                                                   |

</details>
<!-- #endregion -->

<!-- #region 008 -->
<details style="margin-left: 20px">
<summary><b><code>008</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                             |
| :---: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|   1   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                    |
|   2   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                          |
|   3   | `HSteamListenSocket CreateListenSocketP2P(int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                            |
|   4   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                       |
|   5   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                               |
|   6   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                            |
|   7   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                |
|   8   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                            |
|   9   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                            |
|  10   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                            |
|  11   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                     |
|  12   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)`                                                                            |
|  13   | `void SendMessages(int nMessages, SteamNetworkingMessage_t *const *pMessages, int64 *pOutMessageNumberOrResult)`                                                                                                    |
|  14   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                      |
|  15   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                            |
|  16   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                |
|  17   | `bool GetQuickConnectionStatus(HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)`                                                                                                            |
|  18   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                               |
|  19   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                           |
|  20   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)` |
|  21   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                              |
|  22   | `ESteamNetworkingAvailability InitAuthentication()`                                                                                                                                                                 |
|  23   | `ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails)`                                                                                                                    |
|  24   | `HSteamNetPollGroup CreatePollGroup()`                                                                                                                                                                              |
|  25   | `bool DestroyPollGroup(HSteamNetPollGroup hPollGroup)`                                                                                                                                                              |
|  26   | `bool SetConnectionPollGroup(HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)`                                                                                                                             |
|  27   | `int ReceiveMessagesOnPollGroup(HSteamNetPollGroup hPollGroup, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                         |
|  28   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                  |
|  29   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                             |
|  30   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                   |
|  31   | `uint16 GetHostedDedicatedServerPort()`                                                                                                                                                                             |
|  32   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                              |
|  33   | `EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                     |
|  34   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                          |
|  35   | `EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)`                                                                                       |
|  36   | `HSteamNetConnection ConnectP2PCustomSignaling(ISteamNetworkingConnectionCustomSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`    |
|  37   | `bool ReceivedP2PCustomSignal(const void *pMsg, int cbMsg, ISteamNetworkingCustomSignalingRecvContext *pContext)`                                                                                                   |
|  38   | `bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg)`                                                                                                                              |
|  39   | `bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg)`                                                                                                                   |

</details>
<!-- #endregion -->

<!-- #region 009 -->
<details style="margin-left: 20px">
<summary><b><code>009</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                            |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                   |
|   2   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                         |
|   3   | `HSteamListenSocket CreateListenSocketP2P(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                                      |
|   4   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                |
|   5   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                                              |
|   6   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                                           |
|   7   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                               |
|   8   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                                           |
|   9   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                                           |
|  10   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                                           |
|  11   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                                    |
|  12   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)`                                                                                           |
|  13   | `void SendMessages(int nMessages, SteamNetworkingMessage_t *const *pMessages, int64 *pOutMessageNumberOrResult)`                                                                                                                   |
|  14   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                                     |
|  15   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                           |
|  16   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                               |
|  17   | `bool GetQuickConnectionStatus(HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)`                                                                                                                           |
|  18   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                                              |
|  19   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                                          |
|  20   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)`                |
|  21   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                                             |
|  22   | `ESteamNetworkingAvailability InitAuthentication()`                                                                                                                                                                                |
|  23   | `ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails)`                                                                                                                                   |
|  24   | `HSteamNetPollGroup CreatePollGroup()`                                                                                                                                                                                             |
|  25   | `bool DestroyPollGroup(HSteamNetPollGroup hPollGroup)`                                                                                                                                                                             |
|  26   | `bool SetConnectionPollGroup(HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)`                                                                                                                                            |
|  27   | `int ReceiveMessagesOnPollGroup(HSteamNetPollGroup hPollGroup, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                        |
|  28   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                                 |
|  29   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                      |
|  30   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                            |
|  31   | `uint16 GetHostedDedicatedServerPort()`                                                                                                                                                                                            |
|  32   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                                             |
|  33   | `EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                                    |
|  34   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                    |
|  35   | `EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)`                                                                                                      |
|  36   | `HSteamNetConnection ConnectP2PCustomSignaling(ISteamNetworkingConnectionSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)` |
|  37   | `bool ReceivedP2PCustomSignal(const void *pMsg, int cbMsg, ISteamNetworkingSignalingRecvContext *pContext)`                                                                                                                        |
|  38   | `bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg)`                                                                                                                                             |
|  39   | `bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg)`                                                                                                                                  |
|  40   | `void RunCallbacks()`                                                                                                                                                                                                              |

</details>
<!-- #endregion -->

<!-- #region 012 -->
<details style="margin-left: 20px">
<summary><b><code>012</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                            |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                   |
|   2   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                         |
|   3   | `HSteamListenSocket CreateListenSocketP2P(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                                      |
|   4   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                |
|   5   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                                              |
|   6   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                                           |
|   7   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                               |
|   8   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                                           |
|   9   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                                           |
|  10   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                                           |
|  11   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                                    |
|  12   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)`                                                                                           |
|  13   | `void SendMessages(int nMessages, SteamNetworkingMessage_t *const *pMessages, int64 *pOutMessageNumberOrResult)`                                                                                                                   |
|  14   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                                     |
|  15   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                           |
|  16   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                               |
|  17   | `EResult GetConnectionRealTimeStatus(HSteamNetConnection hConn, SteamNetConnectionRealTimeStatus_t *pStatus, int nLanes, SteamNetConnectionRealTimeLaneStatus_t *pLanes)`                                                          |
|  18   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                                              |
|  19   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                                          |
|  20   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)`                |
|  21   | `EResult ConfigureConnectionLanes(HSteamNetConnection hConn, int nNumLanes, const int *pLanePriorities, const uint16 *pLaneWeights)`                                                                                               |
|  22   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                                             |
|  23   | `ESteamNetworkingAvailability InitAuthentication()`                                                                                                                                                                                |
|  24   | `ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails)`                                                                                                                                   |
|  25   | `HSteamNetPollGroup CreatePollGroup()`                                                                                                                                                                                             |
|  26   | `bool DestroyPollGroup(HSteamNetPollGroup hPollGroup)`                                                                                                                                                                             |
|  27   | `bool SetConnectionPollGroup(HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)`                                                                                                                                            |
|  28   | `int ReceiveMessagesOnPollGroup(HSteamNetPollGroup hPollGroup, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                        |
|  29   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                                 |
|  30   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                      |
|  31   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                            |
|  32   | `uint16 GetHostedDedicatedServerPort()`                                                                                                                                                                                            |
|  33   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                                             |
|  34   | `EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                                    |
|  35   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                    |
|  36   | `EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)`                                                                                                      |
|  37   | `HSteamNetConnection ConnectP2PCustomSignaling(ISteamNetworkingConnectionSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)` |
|  38   | `bool ReceivedP2PCustomSignal(const void *pMsg, int cbMsg, ISteamNetworkingSignalingRecvContext *pContext)`                                                                                                                        |
|  39   | `bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg)`                                                                                                                                             |
|  40   | `bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg)`                                                                                                                                  |
|  41   | `void ResetIdentity(const SteamNetworkingIdentity *pIdentity)`                                                                                                                                                                     |
|  42   | `void RunCallbacks()`                                                                                                                                                                                                              |
|  43   | `bool BeginAsyncRequestFakeIP(int nNumPorts)`                                                                                                                                                                                      |
|  44   | `void GetFakeIP(int idxFirstPort, SteamNetworkingFakeIPResult_t *pInfo)`                                                                                                                                                           |
|  45   | `HSteamListenSocket CreateListenSocketP2PFakeIP(int idxFakePort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                                      |
|  46   | `EResult GetRemoteFakeIPForConnection(HSteamNetConnection hConn, SteamNetworkingIPAddr *pOutAddr)`                                                                                                                                 |
|  47   | `ISteamNetworkingFakeUDPPort *CreateFakeUDPPort(int idxFakeServerPort)`                                                                                                                                                            |

</details>
<!-- #endregion -->

<!-- #region 013 -->
<details style="margin-left: 20px">
<summary><b><code>013</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                            |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                   |
|   2   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                         |
|   3   | `HSteamListenSocket CreateListenSocketP2P(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                                      |
|   4   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                |
|   5   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                                              |
|   6   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                                           |
|   7   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                               |
|   8   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                                           |
|   9   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                                           |
|  10   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                                           |
|  11   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                                    |
|  12   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)`                                                                                           |
|  13   | `void SendMessages(int nMessages, SteamNetworkingMessage_t **pMessages, int64 *pOutMessageNumberOrResult, bool bDeleteFailedMessages)`                                                                                             |
|  14   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                                     |
|  15   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                           |
|  16   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                               |
|  17   | `EResult GetConnectionRealTimeStatus(HSteamNetConnection hConn, SteamNetConnectionRealTimeStatus_t *pStatus, int nLanes, SteamNetConnectionRealTimeLaneStatus_t *pLanes)`                                                          |
|  18   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                                              |
|  19   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                                          |
|  20   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pPeerIdentity1, const SteamNetworkingIdentity *pPeerIdentity2)`        |
|  21   | `EResult ConfigureConnectionLanes(HSteamNetConnection hConn, int nNumLanes, const int *pLanePriorities, const uint16 *pLaneWeights)`                                                                                               |
|  22   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                                             |
|  23   | `ESteamNetworkingAvailability InitAuthentication()`                                                                                                                                                                                |
|  24   | `ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails)`                                                                                                                                   |
|  25   | `HSteamNetPollGroup CreatePollGroup()`                                                                                                                                                                                             |
|  26   | `bool DestroyPollGroup(HSteamNetPollGroup hPollGroup)`                                                                                                                                                                             |
|  27   | `bool SetConnectionPollGroup(HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)`                                                                                                                                            |
|  28   | `int ReceiveMessagesOnPollGroup(HSteamNetPollGroup hPollGroup, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                        |
|  29   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                                 |
|  30   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                      |
|  31   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                            |
|  32   | `uint16 GetHostedDedicatedServerPort()`                                                                                                                                                                                            |
|  33   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                                             |
|  34   | `EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                                    |
|  35   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                    |
|  36   | `EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)`                                                                                                      |
|  37   | `HSteamNetConnection ConnectP2PCustomSignaling(ISteamNetworkingConnectionSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)` |
|  38   | `bool ReceivedP2PCustomSignal(const void *pMsg, int cbMsg, ISteamNetworkingSignalingRecvContext *pContext)`                                                                                                                        |
|  39   | `bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg)`                                                                                                                                             |
|  40   | `bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg)`                                                                                                                                  |
|  41   | `void ResetIdentity(const SteamNetworkingIdentity *pIdentity)`                                                                                                                                                                     |
|  42   | `void RunCallbacks()`                                                                                                                                                                                                              |
|  43   | `bool BeginAsyncRequestFakeIP(int nNumPorts)`                                                                                                                                                                                      |
|  44   | `void GetFakeIP(int idxFirstPort, SteamNetworkingFakeIPResult_t *pInfo)`                                                                                                                                                           |
|  45   | `HSteamListenSocket CreateListenSocketP2PFakeIP(int idxFakePort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                                      |
|  46   | `EResult GetRemoteFakeIPForConnection(HSteamNetConnection hConn, SteamNetworkingIPAddr *pOutAddr)`                                                                                                                                 |
|  47   | `ISteamNetworkingFakeUDPPort *CreateFakeUDPPort(int idxFakeServerPort)`                                                                                                                                                            |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                            | I. Versions                                            |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------- |
|   1   | `EResult AcceptConnection(HSteamNetConnection hConn)`                                                                                                                                                                              | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|   2   | `bool BeginAsyncRequestFakeIP(int nNumPorts)`                                                                                                                                                                                      | `012`, `013`                                           |
|   3   | `bool CloseConnection(HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)`                                                                                                                           | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|   4   | `bool CloseListenSocket(HSteamListenSocket hSocket)`                                                                                                                                                                               | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|   5   | `EResult ConfigureConnectionLanes(HSteamNetConnection hConn, int nNumLanes, const int *pLanePriorities, const uint16 *pLaneWeights)`                                                                                               | `012`, `013`                                           |
|   6   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address)`                                                                                                                                                     | `002`, `003`, `004`                                    |
|   7   | `HSteamNetConnection ConnectByIPAddress(const SteamNetworkingIPAddr &address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                         | `006`, `008`, `009`, `012`, `013`                      |
|   8   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nVirtualPort)`                                                                                                                                  | `002`, `003`, `004`                                    |
|   9   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                      | `006`, `008`                                           |
|  10   | `HSteamNetConnection ConnectP2P(const SteamNetworkingIdentity &identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                | `009`, `012`, `013`                                    |
|  11   | `HSteamNetConnection ConnectP2PCustomSignaling(ISteamNetworkingConnectionCustomSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                   | `006`, `008`                                           |
|  12   | `HSteamNetConnection ConnectP2PCustomSignaling(ISteamNetworkingConnectionSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)` | `009`, `012`, `013`                                    |
|  13   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nVirtualPort)`                                                                                                              | `002`, `003`, `004`                                    |
|  14   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                  | `006`, `008`                                           |
|  15   | `HSteamNetConnection ConnectToHostedDedicatedServer(const SteamNetworkingIdentity &identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                            | `009`, `012`, `013`                                    |
|  16   | `ISteamNetworkingFakeUDPPort *CreateFakeUDPPort(int idxFakeServerPort)`                                                                                                                                                            | `012`, `013`                                           |
|  17   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nVirtualPort)`                                                                                                                                                     | `002`, `003`, `004`                                    |
|  18   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                         | `006`, `008`                                           |
|  19   | `HSteamListenSocket CreateHostedDedicatedServerListenSocket(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                    | `009`, `012`, `013`                                    |
|  20   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress)`                                                                                                                                               | `002`, `003`, `004`                                    |
|  21   | `HSteamListenSocket CreateListenSocketIP(const SteamNetworkingIPAddr &localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                   | `006`, `008`, `009`, `012`, `013`                      |
|  22   | `HSteamListenSocket CreateListenSocketP2P(int nVirtualPort)`                                                                                                                                                                       | `002`, `003`, `004`                                    |
|  23   | `HSteamListenSocket CreateListenSocketP2P(int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                                           | `006`, `008`                                           |
|  24   | `HSteamListenSocket CreateListenSocketP2P(int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                                      | `009`, `012`, `013`                                    |
|  25   | `HSteamListenSocket CreateListenSocketP2PFakeIP(int idxFakePort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)`                                                                                                      | `012`, `013`                                           |
|  26   | `HSteamNetPollGroup CreatePollGroup()`                                                                                                                                                                                             | `008`, `009`, `012`, `013`                             |
|  27   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)`                | `002`, `003`, `004`, `006`, `008`, `009`, `012`        |
|  28   | `bool CreateSocketPair(HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pPeerIdentity1, const SteamNetworkingIdentity *pPeerIdentity2)`        | `013`                                                  |
|  29   | `bool DestroyPollGroup(HSteamNetPollGroup hPollGroup)`                                                                                                                                                                             | `008`, `009`, `012`, `013`                             |
|  30   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                            | `002`, `003`, `004`, `006`, `008`                      |
|  31   | `int FindRelayAuthTicketForServer(const SteamNetworkingIdentity &identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                      | `009`, `012`, `013`                                    |
|  32   | `EResult FlushMessagesOnConnection(HSteamNetConnection hConn)`                                                                                                                                                                     | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  33   | `ESteamNetworkingAvailability GetAuthenticationStatus(SteamNetAuthenticationStatus_t *pDetails)`                                                                                                                                   | `003`, `004`, `006`, `008`, `009`, `012`, `013`        |
|  34   | `bool GetCertificateRequest(int *pcbBlob, void *pBlob, SteamNetworkingErrMsg &errMsg)`                                                                                                                                             | `003`, `004`, `006`, `008`, `009`, `012`, `013`        |
|  35   | `bool GetConnectionInfo(HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)`                                                                                                                                               | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  36   | `bool GetConnectionName(HSteamNetConnection hPeer, char *pszName, int nMaxLen)`                                                                                                                                                    | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  37   | `EResult GetConnectionRealTimeStatus(HSteamNetConnection hConn, SteamNetConnectionRealTimeStatus_t *pStatus, int nLanes, SteamNetConnectionRealTimeLaneStatus_t *pLanes)`                                                          | `012`, `013`                                           |
|  38   | `int64 GetConnectionUserData(HSteamNetConnection hPeer)`                                                                                                                                                                           | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  39   | `int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf, int cbBuf)`                                                                                                                                              | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  40   | `void GetFakeIP(int idxFirstPort, SteamNetworkingFakeIPResult_t *pInfo)`                                                                                                                                                           | `012`, `013`                                           |
|  41   | `EResult GetGameCoordinatorServerLogin(SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)`                                                                                                      | `003`, `004`, `006`, `008`, `009`, `012`, `013`        |
|  42   | `bool GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                                       | `002`                                                  |
|  43   | `EResult GetHostedDedicatedServerAddress(SteamDatagramHostedAddress *pRouting)`                                                                                                                                                    | `003`, `004`, `006`, `008`, `009`, `012`, `013`        |
|  44   | `SteamNetworkingPOPID GetHostedDedicatedServerPOPID()`                                                                                                                                                                             | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  45   | `uint16 GetHostedDedicatedServerPort()`                                                                                                                                                                                            | `002`, `003`, `006`, `008`, `009`, `012`, `013`        |
|  46   | `bool GetIdentity(SteamNetworkingIdentity *pIdentity)`                                                                                                                                                                             | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  47   | `bool GetListenSocketAddress(HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)`                                                                                                                                          | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  48   | `bool GetQuickConnectionStatus(HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)`                                                                                                                           | `002`, `003`, `004`, `006`, `008`, `009`               |
|  49   | `EResult GetRemoteFakeIPForConnection(HSteamNetConnection hConn, SteamNetworkingIPAddr *pOutAddr)`                                                                                                                                 | `012`, `013`                                           |
|  50   | `ESteamNetworkingAvailability InitAuthentication()`                                                                                                                                                                                | `003`, `004`, `006`, `008`, `009`, `012`, `013`        |
|  51   | `bool ReceivedP2PCustomSignal(const void *pMsg, int cbMsg, ISteamNetworkingCustomSignalingRecvContext *pContext)`                                                                                                                  | `006`, `008`                                           |
|  52   | `bool ReceivedP2PCustomSignal(const void *pMsg, int cbMsg, ISteamNetworkingSignalingRecvContext *pContext)`                                                                                                                        | `009`, `012`, `013`                                    |
|  53   | `bool ReceivedRelayAuthTicket(const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)`                                                                                                                 | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  54   | `int ReceiveMessagesOnConnection(HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                           | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  55   | `int ReceiveMessagesOnListenSocket(HSteamListenSocket hSocket, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                        | `002`, `003`, `004`, `006`                             |
|  56   | `int ReceiveMessagesOnPollGroup(HSteamNetPollGroup hPollGroup, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages)`                                                                                                        | `008`, `009`, `012`, `013`                             |
|  57   | `void ResetIdentity(const SteamNetworkingIdentity *pIdentity)`                                                                                                                                                                     | `012`, `013`                                           |
|  58   | `void RunCallbacks()`                                                                                                                                                                                                              | `009`, `012`, `013`                                    |
|  59   | `void SendMessages(int nMessages, SteamNetworkingMessage_t *const *pMessages, int64 *pOutMessageNumberOrResult)`                                                                                                                   | `006`, `008`, `009`, `012`                             |
|  60   | `void SendMessages(int nMessages, SteamNetworkingMessage_t **pMessages, int64 *pOutMessageNumberOrResult, bool bDeleteFailedMessages)`                                                                                             | `013`                                                  |
|  61   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags)`                                                                                                                     | `002`, `003`, `004`                                    |
|  62   | `EResult SendMessageToConnection(HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)`                                                                                           | `006`, `008`, `009`, `012`, `013`                      |
|  63   | `bool SetCertificate(const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg &errMsg)`                                                                                                                                  | `003`, `004`, `006`, `008`, `009`, `012`, `013`        |
|  64   | `void SetConnectionName(HSteamNetConnection hPeer, const char *pszName)`                                                                                                                                                           | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |
|  65   | `bool SetConnectionPollGroup(HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)`                                                                                                                                            | `008`, `009`, `012`, `013`                             |
|  66   | `bool SetConnectionUserData(HSteamNetConnection hPeer, int64 nUserData)`                                                                                                                                                           | `002`, `003`, `004`, `006`, `008`, `009`, `012`, `013` |

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