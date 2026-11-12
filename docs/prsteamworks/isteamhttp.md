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

# ISteamHTTP

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  121   |
|   002   |  142   |
|   003   |  165   |

```
001 - 113, 114, 115, 116, 117, 118, 119, 120, 121, G
002 - 122, 123a, 125, 126a, 127, 128, 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, G
003 - 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                  |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `HTTPRequestHandle CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)`                                        |
|   2   | `bool SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue)`                                                     |
|   3   | `bool SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)`                                         |
|   4   | `bool SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)`                      |
|   5   | `bool SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)`                 |
|   6   | `bool SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)`                                                          |
|   7   | `bool DeferHTTPRequest(HTTPRequestHandle hRequest)`                                                                                      |
|   8   | `bool PrioritizeHTTPRequest(HTTPRequestHandle hRequest)`                                                                                 |
|   9   | `bool GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)`                    |
|  10   | `bool GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)` |
|  11   | `bool GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 *unBodySize)`                                                           |
|  12   | `bool GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)`                                  |
|  13   | `bool ReleaseHTTPRequest(HTTPRequestHandle hRequest)`                                                                                    |
|  14   | `bool GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float *pflPercentOut)`                                                      |
|  15   | `bool SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)`               |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                                  |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `HTTPRequestHandle CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)`                                        |
|   2   | `bool SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue)`                                                     |
|   3   | `bool SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)`                                         |
|   4   | `bool SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)`                      |
|   5   | `bool SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)`                 |
|   6   | `bool SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)`                                                          |
|   7   | `bool SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)`                                         |
|   8   | `bool DeferHTTPRequest(HTTPRequestHandle hRequest)`                                                                                      |
|   9   | `bool PrioritizeHTTPRequest(HTTPRequestHandle hRequest)`                                                                                 |
|  10   | `bool GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)`                    |
|  11   | `bool GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)` |
|  12   | `bool GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 *unBodySize)`                                                           |
|  13   | `bool GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)`                                  |
|  14   | `bool GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)`         |
|  15   | `bool ReleaseHTTPRequest(HTTPRequestHandle hRequest)`                                                                                    |
|  16   | `bool GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float *pflPercentOut)`                                                      |
|  17   | `bool SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)`               |
|  18   | `HTTPCookieContainerHandle CreateCookieContainer(bool bAllowResponsesToModify)`                                                          |
|  19   | `bool ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer)`                                                                |
|  20   | `bool SetCookie(HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)`             |
|  21   | `bool SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)`                             |
|  22   | `bool SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, const char *pchUserAgentInfo)`                                             |
|  23   | `bool SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)`                           |
|  24   | `bool SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32 unMilliseconds)`                                                |
|  25   | `bool GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool *pbWasTimedOut)`                                                        |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                                  |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `HTTPRequestHandle CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)`                                        |
|   2   | `bool SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue)`                                                     |
|   3   | `bool SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)`                                         |
|   4   | `bool SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)`                      |
|   5   | `bool SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)`                 |
|   6   | `bool SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)`                                                          |
|   7   | `bool SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)`                                         |
|   8   | `bool DeferHTTPRequest(HTTPRequestHandle hRequest)`                                                                                      |
|   9   | `bool PrioritizeHTTPRequest(HTTPRequestHandle hRequest)`                                                                                 |
|  10   | `bool GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)`                    |
|  11   | `bool GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)` |
|  12   | `bool GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 *unBodySize)`                                                           |
|  13   | `bool GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)`                                  |
|  14   | `bool GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)`         |
|  15   | `bool ReleaseHTTPRequest(HTTPRequestHandle hRequest)`                                                                                    |
|  16   | `bool GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float *pflPercentOut)`                                                      |
|  17   | `bool SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)`               |
|  18   | `HTTPCookieContainerHandle CreateCookieContainer(bool bAllowResponsesToModify)`                                                          |
|  19   | `bool ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer)`                                                                |
|  20   | `bool SetCookie(HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)`             |
|  21   | `bool SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)`                             |
|  22   | `bool SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, const char *pchUserAgentInfo)`                                             |
|  23   | `bool SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)`                           |
|  24   | `bool SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32 unMilliseconds)`                                                |
|  25   | `bool GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool *pbWasTimedOut)`                                                        |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                  | I. Versions         |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------- | :------------------ |
|   1   | `HTTPCookieContainerHandle CreateCookieContainer(bool bAllowResponsesToModify)`                                                          | `002`, `003`        |
|   2   | `HTTPRequestHandle CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)`                                        | `001`, `002`, `003` |
|   3   | `bool DeferHTTPRequest(HTTPRequestHandle hRequest)`                                                                                      | `001`, `002`, `003` |
|   4   | `bool GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float *pflPercentOut)`                                                      | `001`, `002`, `003` |
|   5   | `bool GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool *pbWasTimedOut)`                                                        | `002`, `003`        |
|   6   | `bool GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)`                                  | `001`, `002`, `003` |
|   7   | `bool GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 *unBodySize)`                                                           | `001`, `002`, `003` |
|   8   | `bool GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)`                    | `001`, `002`, `003` |
|   9   | `bool GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)` | `001`, `002`, `003` |
|  10   | `bool GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)`         | `002`, `003`        |
|  11   | `bool PrioritizeHTTPRequest(HTTPRequestHandle hRequest)`                                                                                 | `001`, `002`, `003` |
|  12   | `bool ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer)`                                                                | `002`, `003`        |
|  13   | `bool ReleaseHTTPRequest(HTTPRequestHandle hRequest)`                                                                                    | `001`, `002`, `003` |
|  14   | `bool SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)`                                                          | `001`, `002`, `003` |
|  15   | `bool SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)`                                         | `002`, `003`        |
|  16   | `bool SetCookie(HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)`             | `002`, `003`        |
|  17   | `bool SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32 unMilliseconds)`                                                | `002`, `003`        |
|  18   | `bool SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue)`                                                     | `001`, `002`, `003` |
|  19   | `bool SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)`                             | `002`, `003`        |
|  20   | `bool SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)`                 | `001`, `002`, `003` |
|  21   | `bool SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)`                      | `001`, `002`, `003` |
|  22   | `bool SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)`                                         | `001`, `002`, `003` |
|  23   | `bool SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)`               | `001`, `002`, `003` |
|  24   | `bool SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)`                           | `002`, `003`        |
|  25   | `bool SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, const char *pchUserAgentInfo)`                                             | `002`, `003`        |

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
class ISteamHTTP;
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