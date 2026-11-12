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

# ISteamHTMLSurface

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |   G    |
|   002   |  132   |
|   003   |  140   |
|   003   |  142   |
|   005   |  165   |

```
001 - G
002 - 131, 132, G
003 - 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, G
004 - 141, 142, G
005 - 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                   |
| :---: | :-------------------------------------------------------------------------------------------------------- |
|   1   | `~ISteamHTMLSurface001() {} virtual bool Init()`                                                          |
|   2   | `bool Shutdown()`                                                                                         |
|   3   | `SteamAPICall_t CreateBrowser(const char *pchUserAgent, const char *pchUserCSS)`                          |
|   4   | `void RemoveBrowser(HHTMLBrowser unBrowserHandle)`                                                        |
|   5   | `void LoadURL(HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)`                 |
|   6   | `void SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)`                             |
|   7   | `void StopLoad(HHTMLBrowser unBrowserHandle)`                                                             |
|   8   | `void Reload(HHTMLBrowser unBrowserHandle)`                                                               |
|   9   | `void GoBack(HHTMLBrowser unBrowserHandle)`                                                               |
|  10   | `void GoForward(HHTMLBrowser unBrowserHandle)`                                                            |
|  11   | `void AddHeader(HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)`                  |
|  12   | `void ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char *pchScript)`                             |
|  13   | `void MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                               |
|  14   | `void MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                             |
|  15   | `void MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                      |
|  16   | `void MouseMove(HHTMLBrowser unBrowserHandle, int x, int y)`                                              |
|  17   | `void MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta)`                                             |
|  18   | `void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`  |
|  19   | `void KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`    |
|  20   | `void KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)`    |
|  21   | `void SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                     |
|  22   | `void SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                       |
|  23   | `void SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)`                                       |
|  24   | `void ViewSource(HHTMLBrowser unBrowserHandle)`                                                           |
|  25   | `void CopyToClipboard(HHTMLBrowser unBrowserHandle)`                                                      |
|  26   | `void PasteFromClipboard(HHTMLBrowser unBrowserHandle)`                                                   |
|  27   | `void Find(HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)` |
|  28   | `void StopFind(HHTMLBrowser unBrowserHandle)`                                                             |
|  29   | `void GetLinkAtPosition( HHTMLBrowser unBrowserHandle, int x, int y)`                                     |
|  30   | `void AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed)`                                     |
|  31   | `void JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult)`                                       |
|  32   | `void FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)`                |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                                                                            |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `~ISteamHTMLSurface002() {} virtual bool Init()`                                                                                                                                   |
|   2   | `bool Shutdown()`                                                                                                                                                                  |
|   3   | `SteamAPICall_t CreateBrowser(const char *pchUserAgent, const char *pchUserCSS)`                                                                                                   |
|   4   | `void RemoveBrowser(HHTMLBrowser unBrowserHandle)`                                                                                                                                 |
|   5   | `void LoadURL(HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)`                                                                                          |
|   6   | `void SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)`                                                                                                      |
|   7   | `void StopLoad(HHTMLBrowser unBrowserHandle)`                                                                                                                                      |
|   8   | `void Reload(HHTMLBrowser unBrowserHandle)`                                                                                                                                        |
|   9   | `void GoBack(HHTMLBrowser unBrowserHandle)`                                                                                                                                        |
|  10   | `void GoForward(HHTMLBrowser unBrowserHandle)`                                                                                                                                     |
|  11   | `void AddHeader(HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)`                                                                                           |
|  12   | `void ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char *pchScript)`                                                                                                      |
|  13   | `void MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                        |
|  14   | `void MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                      |
|  15   | `void MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                               |
|  16   | `void MouseMove(HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                                       |
|  17   | `void MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta)`                                                                                                                      |
|  18   | `void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                           |
|  19   | `void KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             |
|  20   | `void KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             |
|  21   | `void SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                              |
|  22   | `void SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                                |
|  23   | `void SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)`                                                                                                                |
|  24   | `void ViewSource(HHTMLBrowser unBrowserHandle)`                                                                                                                                    |
|  25   | `void CopyToClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                               |
|  26   | `void PasteFromClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                            |
|  27   | `void Find(HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)`                                                                          |
|  28   | `void StopFind(HHTMLBrowser unBrowserHandle)`                                                                                                                                      |
|  29   | `void GetLinkAtPosition( HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                              |
|  30   | `void SetCookie(const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath = "/", RTime32 nExpires = 0, bool bSecure = false, bool bHTTPOnly = false)` |
|  31   | `void SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)`                                                                                    |
|  32   | `void AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed)`                                                                                                              |
|  33   | `void JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult)`                                                                                                                |
|  34   | `void FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)`                                                                                         |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                                                                            |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `~ISteamHTMLSurface003() {} virtual bool Init()`                                                                                                                                   |
|   2   | `bool Shutdown()`                                                                                                                                                                  |
|   3   | `SteamAPICall_t CreateBrowser(const char *pchUserAgent, const char *pchUserCSS)`                                                                                                   |
|   4   | `void RemoveBrowser(HHTMLBrowser unBrowserHandle)`                                                                                                                                 |
|   5   | `void LoadURL(HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)`                                                                                          |
|   6   | `void SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)`                                                                                                      |
|   7   | `void StopLoad(HHTMLBrowser unBrowserHandle)`                                                                                                                                      |
|   8   | `void Reload(HHTMLBrowser unBrowserHandle)`                                                                                                                                        |
|   9   | `void GoBack(HHTMLBrowser unBrowserHandle)`                                                                                                                                        |
|  10   | `void GoForward(HHTMLBrowser unBrowserHandle)`                                                                                                                                     |
|  11   | `void AddHeader(HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)`                                                                                           |
|  12   | `void ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char *pchScript)`                                                                                                      |
|  13   | `void MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                        |
|  14   | `void MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                      |
|  15   | `void MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                               |
|  16   | `void MouseMove(HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                                       |
|  17   | `void MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta)`                                                                                                                      |
|  18   | `void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                           |
|  19   | `void KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             |
|  20   | `void KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             |
|  21   | `void SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                              |
|  22   | `void SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                                |
|  23   | `void SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)`                                                                                                                |
|  24   | `void ViewSource(HHTMLBrowser unBrowserHandle)`                                                                                                                                    |
|  25   | `void CopyToClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                               |
|  26   | `void PasteFromClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                            |
|  27   | `void Find(HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)`                                                                          |
|  28   | `void StopFind(HHTMLBrowser unBrowserHandle)`                                                                                                                                      |
|  29   | `void GetLinkAtPosition( HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                              |
|  30   | `void SetCookie(const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath = "/", RTime32 nExpires = 0, bool bSecure = false, bool bHTTPOnly = false)` |
|  31   | `void SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)`                                                                                    |
|  32   | `void SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode)`                                                                                                       |
|  33   | `void AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed)`                                                                                                              |
|  34   | `void JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult)`                                                                                                                |
|  35   | `void FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)`                                                                                         |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                                                                                            |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `~ISteamHTMLSurface004() {} virtual bool Init()`                                                                                                                                   |
|   2   | `bool Shutdown()`                                                                                                                                                                  |
|   3   | `SteamAPICall_t CreateBrowser(const char *pchUserAgent, const char *pchUserCSS)`                                                                                                   |
|   4   | `void RemoveBrowser(HHTMLBrowser unBrowserHandle)`                                                                                                                                 |
|   5   | `void LoadURL(HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)`                                                                                          |
|   6   | `void SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)`                                                                                                      |
|   7   | `void StopLoad(HHTMLBrowser unBrowserHandle)`                                                                                                                                      |
|   8   | `void Reload(HHTMLBrowser unBrowserHandle)`                                                                                                                                        |
|   9   | `void GoBack(HHTMLBrowser unBrowserHandle)`                                                                                                                                        |
|  10   | `void GoForward(HHTMLBrowser unBrowserHandle)`                                                                                                                                     |
|  11   | `void AddHeader(HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)`                                                                                           |
|  12   | `void ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char *pchScript)`                                                                                                      |
|  13   | `void MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                        |
|  14   | `void MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                      |
|  15   | `void MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                               |
|  16   | `void MouseMove(HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                                       |
|  17   | `void MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta)`                                                                                                                      |
|  18   | `void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                           |
|  19   | `void KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             |
|  20   | `void KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             |
|  21   | `void SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                              |
|  22   | `void SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                                |
|  23   | `void SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)`                                                                                                                |
|  24   | `void ViewSource(HHTMLBrowser unBrowserHandle)`                                                                                                                                    |
|  25   | `void CopyToClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                               |
|  26   | `void PasteFromClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                            |
|  27   | `void Find(HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)`                                                                          |
|  28   | `void StopFind(HHTMLBrowser unBrowserHandle)`                                                                                                                                      |
|  29   | `void GetLinkAtPosition( HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                              |
|  30   | `void SetCookie(const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath = "/", RTime32 nExpires = 0, bool bSecure = false, bool bHTTPOnly = false)` |
|  31   | `void SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)`                                                                                    |
|  32   | `void SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode)`                                                                                                       |
|  33   | `void SetDPIScalingFactor(HHTMLBrowser unBrowserHandle, float flDPIScaling)`                                                                                                       |
|  34   | `void AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed)`                                                                                                              |
|  35   | `void JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult)`                                                                                                                |
|  36   | `void FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)`                                                                                         |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|  Num  | Methods                                                                                                                                                                            |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `~ISteamHTMLSurface005() {} virtual bool Init()`                                                                                                                                   |
|   2   | `bool Shutdown()`                                                                                                                                                                  |
|   3   | `SteamAPICall_t CreateBrowser(const char *pchUserAgent, const char *pchUserCSS)`                                                                                                   |
|   4   | `void RemoveBrowser(HHTMLBrowser unBrowserHandle)`                                                                                                                                 |
|   5   | `void LoadURL(HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)`                                                                                          |
|   6   | `void SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)`                                                                                                      |
|   7   | `void StopLoad(HHTMLBrowser unBrowserHandle)`                                                                                                                                      |
|   8   | `void Reload(HHTMLBrowser unBrowserHandle)`                                                                                                                                        |
|   9   | `void GoBack(HHTMLBrowser unBrowserHandle)`                                                                                                                                        |
|  10   | `void GoForward(HHTMLBrowser unBrowserHandle)`                                                                                                                                     |
|  11   | `void AddHeader(HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)`                                                                                           |
|  12   | `void ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char *pchScript)`                                                                                                      |
|  13   | `void MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                        |
|  14   | `void MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                      |
|  15   | `void MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                               |
|  16   | `void MouseMove(HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                                       |
|  17   | `void MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta)`                                                                                                                      |
|  18   | `void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers, bool bIsSystemKey = false)`                                                |
|  19   | `void KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             |
|  20   | `void KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             |
|  21   | `void SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                              |
|  22   | `void SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                                |
|  23   | `void SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)`                                                                                                                |
|  24   | `void ViewSource(HHTMLBrowser unBrowserHandle)`                                                                                                                                    |
|  25   | `void CopyToClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                               |
|  26   | `void PasteFromClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                            |
|  27   | `void Find(HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)`                                                                          |
|  28   | `void StopFind(HHTMLBrowser unBrowserHandle)`                                                                                                                                      |
|  29   | `void GetLinkAtPosition( HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                              |
|  30   | `void SetCookie(const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath = "/", RTime32 nExpires = 0, bool bSecure = false, bool bHTTPOnly = false)` |
|  31   | `void SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)`                                                                                    |
|  32   | `void SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode)`                                                                                                       |
|  33   | `void SetDPIScalingFactor(HHTMLBrowser unBrowserHandle, float flDPIScaling)`                                                                                                       |
|  34   | `void OpenDeveloperTools(HHTMLBrowser unBrowserHandle)`                                                                                                                            |
|  35   | `void AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed)`                                                                                                              |
|  36   | `void JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult)`                                                                                                                |
|  37   | `void FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)`                                                                                         |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                            | I. Versions                       |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
|   1   | `void AddHeader(HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)`                                                                                           | `001`, `002`, `003`, `004`, `005` |
|   2   | `void AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed)`                                                                                                              | `001`, `002`, `003`, `004`, `005` |
|   3   | `void CopyToClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                               | `001`, `002`, `003`, `004`, `005` |
|   4   | `SteamAPICall_t CreateBrowser(const char *pchUserAgent, const char *pchUserCSS)`                                                                                                   | `001`, `002`, `003`, `004`, `005` |
|   5   | `void ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char *pchScript)`                                                                                                      | `001`, `002`, `003`, `004`, `005` |
|   6   | `void FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)`                                                                                         | `001`, `002`, `003`, `004`, `005` |
|   7   | `void Find(HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)`                                                                          | `001`, `002`, `003`, `004`, `005` |
|   8   | `void GetLinkAtPosition( HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                              | `001`, `002`, `003`, `004`, `005` |
|   9   | `void GoBack(HHTMLBrowser unBrowserHandle)`                                                                                                                                        | `001`, `002`, `003`, `004`, `005` |
|  10   | `void GoForward(HHTMLBrowser unBrowserHandle)`                                                                                                                                     | `001`, `002`, `003`, `004`, `005` |
|  11   | `~ISteamHTMLSurface001() {} virtual bool Init()`                                                                                                                                   | `001`                             |
|  12   | `~ISteamHTMLSurface002() {} virtual bool Init()`                                                                                                                                   | `002`                             |
|  13   | `~ISteamHTMLSurface003() {} virtual bool Init()`                                                                                                                                   | `003`                             |
|  14   | `~ISteamHTMLSurface004() {} virtual bool Init()`                                                                                                                                   | `004`                             |
|  15   | `~ISteamHTMLSurface005() {} virtual bool Init()`                                                                                                                                   | `005`                             |
|  16   | `void JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult)`                                                                                                                | `001`, `002`, `003`, `004`, `005` |
|  17   | `void KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             | `001`, `002`, `003`, `004`, `005` |
|  18   | `void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                           | `001`, `002`, `003`, `004`        |
|  19   | `void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers, bool bIsSystemKey = false)`                                                | `005`                             |
|  20   | `void KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)`                                                                             | `001`, `002`, `003`, `004`, `005` |
|  21   | `void LoadURL(HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)`                                                                                          | `001`, `002`, `003`, `004`, `005` |
|  22   | `void MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                               | `001`, `002`, `003`, `004`, `005` |
|  23   | `void MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                      | `001`, `002`, `003`, `004`, `005` |
|  24   | `void MouseMove(HHTMLBrowser unBrowserHandle, int x, int y)`                                                                                                                       | `001`, `002`, `003`, `004`, `005` |
|  25   | `void MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)`                                                                                                        | `001`, `002`, `003`, `004`, `005` |
|  26   | `void MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta)`                                                                                                                      | `001`, `002`, `003`, `004`, `005` |
|  27   | `void OpenDeveloperTools(HHTMLBrowser unBrowserHandle)`                                                                                                                            | `005`                             |
|  28   | `void PasteFromClipboard(HHTMLBrowser unBrowserHandle)`                                                                                                                            | `001`, `002`, `003`, `004`, `005` |
|  29   | `void Reload(HHTMLBrowser unBrowserHandle)`                                                                                                                                        | `001`, `002`, `003`, `004`, `005` |
|  30   | `void RemoveBrowser(HHTMLBrowser unBrowserHandle)`                                                                                                                                 | `001`, `002`, `003`, `004`, `005` |
|  31   | `void SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode)`                                                                                                       | `003`, `004`, `005`               |
|  32   | `void SetCookie(const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath = "/", RTime32 nExpires = 0, bool bSecure = false, bool bHTTPOnly = false)` | `002`, `003`, `004`, `005`        |
|  33   | `void SetDPIScalingFactor(HHTMLBrowser unBrowserHandle, float flDPIScaling)`                                                                                                       | `004`, `005`                      |
|  34   | `void SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                              | `001`, `002`, `003`, `004`, `005` |
|  35   | `void SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)`                                                                                                                | `001`, `002`, `003`, `004`, `005` |
|  36   | `void SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)`                                                                                    | `002`, `003`, `004`, `005`        |
|  37   | `void SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)`                                                                                                      | `001`, `002`, `003`, `004`, `005` |
|  38   | `void SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)`                                                                                                | `001`, `002`, `003`, `004`, `005` |
|  39   | `bool Shutdown()`                                                                                                                                                                  | `001`, `002`, `003`, `004`, `005` |
|  40   | `void StopFind(HHTMLBrowser unBrowserHandle)`                                                                                                                                      | `001`, `002`, `003`, `004`, `005` |
|  41   | `void StopLoad(HHTMLBrowser unBrowserHandle)`                                                                                                                                      | `001`, `002`, `003`, `004`, `005` |
|  42   | `void ViewSource(HHTMLBrowser unBrowserHandle)`                                                                                                                                    | `001`, `002`, `003`, `004`, `005` |

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
class ISteamHTMLSurface;
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