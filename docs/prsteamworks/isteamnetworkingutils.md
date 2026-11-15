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

# ISteamNetworkingUtils

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  144   |
|   002   |  146   |
|   003   |  152   |
|   004   |  165   |

```
001 - 144, G
002 - 145, 146, G
003 - 147, 148a, 149, 150, 151, 152, G
004 - 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                             |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `float GetLocalPingLocation(SteamNetworkPingLocation_t &result)`                                                                                                                                                                    |
|   2   | `int EstimatePingTimeBetweenTwoLocations(const SteamNetworkPingLocation_t &location1, const SteamNetworkPingLocation_t &location2)`                                                                                                 |
|   3   | `int EstimatePingTimeFromLocalHost(const SteamNetworkPingLocation_t &remoteLocation)`                                                                                                                                               |
|   4   | `void ConvertPingLocationToString(const SteamNetworkPingLocation_t &location, char *pszBuf, int cchBufSize)`                                                                                                                        |
|   5   | `bool ParsePingLocationString(const char *pszString, SteamNetworkPingLocation_t &result)`                                                                                                                                           |
|   6   | `bool CheckPingDataUpToDate(float flMaxAgeSeconds)`                                                                                                                                                                                 |
|   7   | `bool IsPingMeasurementInProgress()`                                                                                                                                                                                                |
|   8   | `int GetPingToDataCenter(SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)`                                                                                                                                           |
|   9   | `int GetDirectPingToPOP(SteamNetworkingPOPID popID)`                                                                                                                                                                                |
|  10   | `int GetPOPCount()`                                                                                                                                                                                                                 |
|  11   | `int GetPOPList(SteamNetworkingPOPID *list, int nListSz)`                                                                                                                                                                           |
|  12   | `SteamNetworkingMicroseconds GetLocalTimestamp()`                                                                                                                                                                                   |
|  13   | `void SetDebugOutputFunction(ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)`                                                                                                      |
|  14   | `bool SetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)`                                                    |
|  15   | `ESteamNetworkingGetConfigValueResult GetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)` |
|  16   | `bool GetConfigValueInfo(ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)`              |
|  17   | `ESteamNetworkingConfigValue GetFirstConfigValue()`                                                                                                                                                                                 |
|  18   | `void SteamNetworkingIPAddr_ToString(const SteamNetworkingIPAddr &addr, char *buf, size_t cbBuf, bool bWithPort)`                                                                                                                   |
|  19   | `bool SteamNetworkingIPAddr_ParseString(SteamNetworkingIPAddr *pAddr, const char *pszStr)`                                                                                                                                          |
|  20   | `void SteamNetworkingIdentity_ToString(const SteamNetworkingIdentity &identity, char *buf, size_t cbBuf)`                                                                                                                           |
|  21   | `bool SteamNetworkingIdentity_ParseString(SteamNetworkingIdentity *pIdentity, const char *pszStr)`                                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                             |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `ESteamNetworkingAvailability GetRelayNetworkStatus(SteamRelayNetworkStatus_t *pDetails)`                                                                                                                                           |
|   2   | `float GetLocalPingLocation(SteamNetworkPingLocation_t &result)`                                                                                                                                                                    |
|   3   | `int EstimatePingTimeBetweenTwoLocations(const SteamNetworkPingLocation_t &location1, const SteamNetworkPingLocation_t &location2)`                                                                                                 |
|   4   | `int EstimatePingTimeFromLocalHost(const SteamNetworkPingLocation_t &remoteLocation)`                                                                                                                                               |
|   5   | `void ConvertPingLocationToString(const SteamNetworkPingLocation_t &location, char *pszBuf, int cchBufSize)`                                                                                                                        |
|   6   | `bool ParsePingLocationString(const char *pszString, SteamNetworkPingLocation_t &result)`                                                                                                                                           |
|   7   | `bool CheckPingDataUpToDate(float flMaxAgeSeconds)`                                                                                                                                                                                 |
|   8   | `int GetPingToDataCenter(SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)`                                                                                                                                           |
|   9   | `int GetDirectPingToPOP(SteamNetworkingPOPID popID)`                                                                                                                                                                                |
|  10   | `int GetPOPCount()`                                                                                                                                                                                                                 |
|  11   | `int GetPOPList(SteamNetworkingPOPID *list, int nListSz)`                                                                                                                                                                           |
|  12   | `SteamNetworkingMicroseconds GetLocalTimestamp()`                                                                                                                                                                                   |
|  13   | `void SetDebugOutputFunction(ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)`                                                                                                      |
|  14   | `bool SetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)`                                                    |
|  15   | `ESteamNetworkingGetConfigValueResult GetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)` |
|  16   | `bool GetConfigValueInfo(ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)`              |
|  17   | `ESteamNetworkingConfigValue GetFirstConfigValue()`                                                                                                                                                                                 |
|  18   | `void SteamNetworkingIPAddr_ToString(const SteamNetworkingIPAddr &addr, char *buf, size_t cbBuf, bool bWithPort)`                                                                                                                   |
|  19   | `bool SteamNetworkingIPAddr_ParseString(SteamNetworkingIPAddr *pAddr, const char *pszStr)`                                                                                                                                          |
|  20   | `void SteamNetworkingIdentity_ToString(const SteamNetworkingIdentity &identity, char *buf, size_t cbBuf)`                                                                                                                           |
|  21   | `bool SteamNetworkingIdentity_ParseString(SteamNetworkingIdentity *pIdentity, const char *pszStr)`                                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                             |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `SteamNetworkingMessage_t *AllocateMessage(int cbAllocateBuffer)`                                                                                                                                                                   |
|   2   | `ESteamNetworkingAvailability GetRelayNetworkStatus(SteamRelayNetworkStatus_t *pDetails)`                                                                                                                                           |
|   3   | `float GetLocalPingLocation(SteamNetworkPingLocation_t &result)`                                                                                                                                                                    |
|   4   | `int EstimatePingTimeBetweenTwoLocations(const SteamNetworkPingLocation_t &location1, const SteamNetworkPingLocation_t &location2)`                                                                                                 |
|   5   | `int EstimatePingTimeFromLocalHost(const SteamNetworkPingLocation_t &remoteLocation)`                                                                                                                                               |
|   6   | `void ConvertPingLocationToString(const SteamNetworkPingLocation_t &location, char *pszBuf, int cchBufSize)`                                                                                                                        |
|   7   | `bool ParsePingLocationString(const char *pszString, SteamNetworkPingLocation_t &result)`                                                                                                                                           |
|   8   | `bool CheckPingDataUpToDate(float flMaxAgeSeconds)`                                                                                                                                                                                 |
|   9   | `int GetPingToDataCenter(SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)`                                                                                                                                           |
|  10   | `int GetDirectPingToPOP(SteamNetworkingPOPID popID)`                                                                                                                                                                                |
|  11   | `int GetPOPCount()`                                                                                                                                                                                                                 |
|  12   | `int GetPOPList(SteamNetworkingPOPID *list, int nListSz)`                                                                                                                                                                           |
|  13   | `SteamNetworkingMicroseconds GetLocalTimestamp()`                                                                                                                                                                                   |
|  14   | `void SetDebugOutputFunction(ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)`                                                                                                      |
|  15   | `bool SetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)`                                                    |
|  16   | `ESteamNetworkingGetConfigValueResult GetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)` |
|  17   | `bool GetConfigValueInfo(ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)`              |
|  18   | `ESteamNetworkingConfigValue GetFirstConfigValue()`                                                                                                                                                                                 |
|  19   | `void SteamNetworkingIPAddr_ToString(const SteamNetworkingIPAddr &addr, char *buf, size_t cbBuf, bool bWithPort)`                                                                                                                   |
|  20   | `bool SteamNetworkingIPAddr_ParseString(SteamNetworkingIPAddr *pAddr, const char *pszStr)`                                                                                                                                          |
|  21   | `void SteamNetworkingIdentity_ToString(const SteamNetworkingIdentity &identity, char *buf, size_t cbBuf)`                                                                                                                           |
|  22   | `bool SteamNetworkingIdentity_ParseString(SteamNetworkingIdentity *pIdentity, const char *pszStr)`                                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                             |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `SteamNetworkingMessage_t *AllocateMessage(int cbAllocateBuffer)`                                                                                                                                                                   |
|   2   | `ESteamNetworkingAvailability GetRelayNetworkStatus(SteamRelayNetworkStatus_t *pDetails)`                                                                                                                                           |
|   3   | `float GetLocalPingLocation(SteamNetworkPingLocation_t &result)`                                                                                                                                                                    |
|   4   | `int EstimatePingTimeBetweenTwoLocations(const SteamNetworkPingLocation_t &location1, const SteamNetworkPingLocation_t &location2)`                                                                                                 |
|   5   | `int EstimatePingTimeFromLocalHost(const SteamNetworkPingLocation_t &remoteLocation)`                                                                                                                                               |
|   6   | `void ConvertPingLocationToString(const SteamNetworkPingLocation_t &location, char *pszBuf, int cchBufSize)`                                                                                                                        |
|   7   | `bool ParsePingLocationString(const char *pszString, SteamNetworkPingLocation_t &result)`                                                                                                                                           |
|   8   | `bool CheckPingDataUpToDate(float flMaxAgeSeconds)`                                                                                                                                                                                 |
|   9   | `int GetPingToDataCenter(SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)`                                                                                                                                           |
|  10   | `int GetDirectPingToPOP(SteamNetworkingPOPID popID)`                                                                                                                                                                                |
|  11   | `int GetPOPCount()`                                                                                                                                                                                                                 |
|  12   | `int GetPOPList(SteamNetworkingPOPID *list, int nListSz)`                                                                                                                                                                           |
|  13   | `SteamNetworkingMicroseconds GetLocalTimestamp()`                                                                                                                                                                                   |
|  14   | `void SetDebugOutputFunction(ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)`                                                                                                      |
|  15   | `ESteamNetworkingFakeIPType GetIPv4FakeIPType(uint32 nIPv4)`                                                                                                                                                                        |
|  16   | `EResult GetRealIdentityForFakeIP(const SteamNetworkingIPAddr &fakeIP, SteamNetworkingIdentity *pOutRealIdentity)`                                                                                                                  |
|  17   | `bool SetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)`                                                    |
|  18   | `ESteamNetworkingGetConfigValueResult GetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)` |
|  19   | `const char *GetConfigValueInfo(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope)`                                                                          |
|  20   | `ESteamNetworkingConfigValue IterateGenericEditableConfigValues(ESteamNetworkingConfigValue eCurrent, bool bEnumerateDevVars)`                                                                                                      |
|  21   | `void SteamNetworkingIPAddr_ToString(const SteamNetworkingIPAddr &addr, char *buf, size_t cbBuf, bool bWithPort)`                                                                                                                   |
|  22   | `bool SteamNetworkingIPAddr_ParseString(SteamNetworkingIPAddr *pAddr, const char *pszStr)`                                                                                                                                          |
|  23   | `ESteamNetworkingFakeIPType SteamNetworkingIPAddr_GetFakeIPType(const SteamNetworkingIPAddr &addr)`                                                                                                                                 |
|  24   | `void SteamNetworkingIdentity_ToString(const SteamNetworkingIdentity &identity, char *buf, size_t cbBuf)`                                                                                                                           |
|  25   | `bool SteamNetworkingIdentity_ParseString(SteamNetworkingIdentity *pIdentity, const char *pszStr)`                                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                             | I. Versions                |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------- |
|   1   | `SteamNetworkingMessage_t *AllocateMessage(int cbAllocateBuffer)`                                                                                                                                                                   | `003`, `004`               |
|   2   | `bool CheckPingDataUpToDate(float flMaxAgeSeconds)`                                                                                                                                                                                 | `001`, `002`, `003`, `004` |
|   3   | `void ConvertPingLocationToString(const SteamNetworkPingLocation_t &location, char *pszBuf, int cchBufSize)`                                                                                                                        | `001`, `002`, `003`, `004` |
|   4   | `int EstimatePingTimeBetweenTwoLocations(const SteamNetworkPingLocation_t &location1, const SteamNetworkPingLocation_t &location2)`                                                                                                 | `001`, `002`, `003`, `004` |
|   5   | `int EstimatePingTimeFromLocalHost(const SteamNetworkPingLocation_t &remoteLocation)`                                                                                                                                               | `001`, `002`, `003`, `004` |
|   6   | `ESteamNetworkingGetConfigValueResult GetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)` | `001`, `002`, `003`, `004` |
|   7   | `bool GetConfigValueInfo(ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)`              | `001`, `002`, `003`        |
|   8   | `const char *GetConfigValueInfo(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope)`                                                                          | `004`                      |
|   9   | `int GetDirectPingToPOP(SteamNetworkingPOPID popID)`                                                                                                                                                                                | `001`, `002`, `003`, `004` |
|  10   | `ESteamNetworkingConfigValue GetFirstConfigValue()`                                                                                                                                                                                 | `001`, `002`, `003`        |
|  11   | `ESteamNetworkingFakeIPType GetIPv4FakeIPType(uint32 nIPv4)`                                                                                                                                                                        | `004`                      |
|  12   | `float GetLocalPingLocation(SteamNetworkPingLocation_t &result)`                                                                                                                                                                    | `001`, `002`, `003`, `004` |
|  13   | `SteamNetworkingMicroseconds GetLocalTimestamp()`                                                                                                                                                                                   | `001`, `002`, `003`, `004` |
|  14   | `int GetPingToDataCenter(SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)`                                                                                                                                           | `001`, `002`, `003`, `004` |
|  15   | `int GetPOPCount()`                                                                                                                                                                                                                 | `001`, `002`, `003`, `004` |
|  16   | `int GetPOPList(SteamNetworkingPOPID *list, int nListSz)`                                                                                                                                                                           | `001`, `002`, `003`, `004` |
|  17   | `EResult GetRealIdentityForFakeIP(const SteamNetworkingIPAddr &fakeIP, SteamNetworkingIdentity *pOutRealIdentity)`                                                                                                                  | `004`                      |
|  18   | `ESteamNetworkingAvailability GetRelayNetworkStatus(SteamRelayNetworkStatus_t *pDetails)`                                                                                                                                           | `002`, `003`, `004`        |
|  19   | `bool IsPingMeasurementInProgress()`                                                                                                                                                                                                | `001`                      |
|  20   | `ESteamNetworkingConfigValue IterateGenericEditableConfigValues(ESteamNetworkingConfigValue eCurrent, bool bEnumerateDevVars)`                                                                                                      | `004`                      |
|  21   | `bool ParsePingLocationString(const char *pszString, SteamNetworkPingLocation_t &result)`                                                                                                                                           | `001`, `002`, `003`, `004` |
|  22   | `bool SetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)`                                                    | `001`, `002`, `003`, `004` |
|  23   | `void SetDebugOutputFunction(ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)`                                                                                                      | `001`, `002`, `003`, `004` |
|  24   | `bool SteamNetworkingIdentity_ParseString(SteamNetworkingIdentity *pIdentity, const char *pszStr)`                                                                                                                                  | `001`, `002`, `003`, `004` |
|  25   | `void SteamNetworkingIdentity_ToString(const SteamNetworkingIdentity &identity, char *buf, size_t cbBuf)`                                                                                                                           | `001`, `002`, `003`, `004` |
|  26   | `ESteamNetworkingFakeIPType SteamNetworkingIPAddr_GetFakeIPType(const SteamNetworkingIPAddr &addr)`                                                                                                                                 | `004`                      |
|  27   | `bool SteamNetworkingIPAddr_ParseString(SteamNetworkingIPAddr *pAddr, const char *pszStr)`                                                                                                                                          | `001`, `002`, `003`, `004` |
|  28   | `void SteamNetworkingIPAddr_ToString(const SteamNetworkingIPAddr &addr, char *buf, size_t cbBuf, bool bWithPort)`                                                                                                                   | `001`, `002`, `003`, `004` |

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
class ISteamNetworkingUtils;
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