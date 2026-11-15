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

# ISteamUtils

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   002   |  103   |
|   003   |   G    |
|   004   |  106   |
|   005   |  123a  |
|   006   |  128   |
|   007   |  136   |
|   008   |  139   |
|   009   |  149   |
|   010   |  164   |
|   011   |  165   |

```
002 - 100, 101, 102, 103, gbe
003 - gbe
004 - 104, 105, 106, gbe
005 - 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123a, gbe
006 - 125, 126a, 127, 128, gbe
007 - 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, gbe
008 - 137, 138a, 139, gbe
009 - 140, 141, 142, 143, 144, 145, 146, 147, 148a, 149, gbe
010 - 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, gbe
011 - 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` |
| 9 | `uint8 GetCurrentBatteryPower()` |
| 10 | `uint32 GetAppID()` |
| 11 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 12 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 13 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 14 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` |
| 9 | `uint8 GetCurrentBatteryPower()` |
| 10 | `uint32 GetAppID()` |
| 11 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 12 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 13 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 14 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 15 | `void RunFrame()` |
| 16 | `uint32 GetIPCCallCount()` |
| 17 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 18 | `bool IsOverlayEnabled()` |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` |
| 9 | `uint8 GetCurrentBatteryPower()` |
| 10 | `uint32 GetAppID()` |
| 11 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 12 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 13 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 14 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 15 | `void RunFrame()` |
| 16 | `uint32 GetIPCCallCount()` |
| 17 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 18 | `bool IsOverlayEnabled()` |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` |
| 9 | `uint8 GetCurrentBatteryPower()` |
| 10 | `uint32 GetAppID()` |
| 11 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 12 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 13 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 14 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 15 | `void RunFrame()` |
| 16 | `uint32 GetIPCCallCount()` |
| 17 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 18 | `bool IsOverlayEnabled()` |
| 19 | `bool BOverlayNeedsPresent()` |
| 20 | `SteamAPICall_t CheckFileSignature(const char *szFileName)` |
| 21 | `void PostPS3SysutilCallback(uint64_t status, uint64_t param, void *userdata)` |
| 22 | `bool BIsReadyToShutdown()` |
| 23 | `bool BIsPSNOnline()` |
| 24 | `void SetPSNGameBootInviteStrings(const char *pchSubject, const char *pchBody)` |
| 25 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax)` |
| 26 | `uint32 GetEnteredGamepadTextLength()` |
| 27 | `bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText)` |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` |
| 9 | `uint8 GetCurrentBatteryPower()` |
| 10 | `uint32 GetAppID()` |
| 11 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 12 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 13 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 14 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 15 | `void RunFrame()` |
| 16 | `uint32 GetIPCCallCount()` |
| 17 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 18 | `bool IsOverlayEnabled()` |
| 19 | `bool BOverlayNeedsPresent()` |
| 20 | `SteamAPICall_t CheckFileSignature(const char *szFileName)` |
| 21 | `void PostPS3SysutilCallback(uint64_t status, uint64_t param, void *userdata)` |
| 22 | `bool BIsReadyToShutdown()` |
| 23 | `bool BIsPSNOnline()` |
| 24 | `void SetPSNGameBootInviteStrings(const char *pchSubject, const char *pchBody)` |
| 25 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax)` |
| 26 | `uint32 GetEnteredGamepadTextLength()` |
| 27 | `bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText)` |
| 28 | `const char *GetSteamUILanguage()` |
| 29 | `bool IsSteamRunningInVR()` |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` |
| 9 | `uint8 GetCurrentBatteryPower()` |
| 10 | `uint32 GetAppID()` |
| 11 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 12 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 13 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 14 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 15 | `uint32 GetIPCCallCount()` |
| 16 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 17 | `bool IsOverlayEnabled()` |
| 18 | `bool BOverlayNeedsPresent()` |
| 19 | `SteamAPICall_t CheckFileSignature(const char *szFileName)` |
| 20 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)` |
| 21 | `uint32 GetEnteredGamepadTextLength()` |
| 22 | `bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText)` |
| 23 | `const char *GetSteamUILanguage()` |
| 24 | `bool IsSteamRunningInVR()` |
| 25 | `void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset)` |

</details>
<!-- #endregion -->

<!-- #region 008 -->
<details style="margin-left: 20px">
<summary><b><code>008</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` |
| 9 | `uint8 GetCurrentBatteryPower()` |
| 10 | `uint32 GetAppID()` |
| 11 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 12 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 13 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 14 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 15 | `uint32 GetIPCCallCount()` |
| 16 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 17 | `bool IsOverlayEnabled()` |
| 18 | `bool BOverlayNeedsPresent()` |
| 19 | `SteamAPICall_t CheckFileSignature(const char *szFileName)` |
| 20 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)` |
| 21 | `uint32 GetEnteredGamepadTextLength()` |
| 22 | `bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText)` |
| 23 | `const char *GetSteamUILanguage()` |
| 24 | `bool IsSteamRunningInVR()` |
| 25 | `void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset)` |
| 26 | `bool IsSteamInBigPictureMode()` |
| 27 | `void StartVRDashboard()` |

</details>
<!-- #endregion -->

<!-- #region 009 -->
<details style="margin-left: 20px">
<summary><b><code>009</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` |
| 9 | `uint8 GetCurrentBatteryPower()` |
| 10 | `uint32 GetAppID()` |
| 11 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 12 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 13 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 14 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 15 | `uint32 GetIPCCallCount()` |
| 16 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 17 | `bool IsOverlayEnabled()` |
| 18 | `bool BOverlayNeedsPresent()` |
| 19 | `SteamAPICall_t CheckFileSignature(const char *szFileName)` |
| 20 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)` |
| 21 | `uint32 GetEnteredGamepadTextLength()` |
| 22 | `bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText)` |
| 23 | `const char *GetSteamUILanguage()` |
| 24 | `bool IsSteamRunningInVR()` |
| 25 | `void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset)` |
| 26 | `bool IsSteamInBigPictureMode()` |
| 27 | `void StartVRDashboard()` |
| 28 | `bool IsVRHeadsetStreamingEnabled()` |
| 29 | `void SetVRHeadsetStreamingEnabled(bool bEnabled)` |
| 30 | `bool IsSteamChinaLauncher()` |
| 31 | `bool InitFilterText()` |
| 32 | `int FilterText(char *pchOutFilteredText, uint32 nByteSizeOutFilteredText, const char *pchInputMessage, bool bLegalOnly)` |
| 33 | `ESteamIPv6ConnectivityState GetIPv6ConnectivityState(ESteamIPv6ConnectivityProtocol eProtocol)` |

</details>
<!-- #endregion -->

<!-- #region 010 -->
<details style="margin-left: 20px">
<summary><b><code>010</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `uint8 GetCurrentBatteryPower()` |
| 9 | `uint32 GetAppID()` |
| 10 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 11 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 12 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 13 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 14 | `uint32 GetIPCCallCount()` |
| 15 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 16 | `bool IsOverlayEnabled()` |
| 17 | `bool BOverlayNeedsPresent()` |
| 18 | `SteamAPICall_t CheckFileSignature(const char *szFileName)` |
| 19 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)` |
| 20 | `uint32 GetEnteredGamepadTextLength()` |
| 21 | `bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText)` |
| 22 | `const char *GetSteamUILanguage()` |
| 23 | `bool IsSteamRunningInVR()` |
| 24 | `void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset)` |
| 25 | `bool IsSteamInBigPictureMode()` |
| 26 | `void StartVRDashboard()` |
| 27 | `bool IsVRHeadsetStreamingEnabled()` |
| 28 | `void SetVRHeadsetStreamingEnabled(bool bEnabled)` |
| 29 | `bool IsSteamChinaLauncher()` |
| 30 | `bool InitFilterText(uint32 unFilterOptions = 0)` |
| 31 | `int FilterText(ETextFilteringContext eContext, CSteamID sourceSteamID, const char *pchInputMessage, char *pchOutFilteredText, uint32 nByteSizeOutFilteredText)` |
| 32 | `ESteamIPv6ConnectivityState GetIPv6ConnectivityState(ESteamIPv6ConnectivityProtocol eProtocol)` |
| 33 | `bool IsSteamRunningOnSteamDeck()` |
| 34 | `bool ShowFloatingGamepadTextInput(EFloatingGamepadTextInputMode eKeyboardMode, int nTextFieldXPosition, int nTextFieldYPosition, int nTextFieldWidth, int nTextFieldHeight)` |
| 35 | `void SetGameLauncherMode(bool bLauncherMode)` |
| 36 | `bool DismissFloatingGamepadTextInput()` |
| 37 | `bool DismissGamepadTextInput()` |

</details>
<!-- #endregion -->

<!-- #region 011 -->
<details style="margin-left: 20px">
<summary><b><code>011</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `uint32 GetSecondsSinceAppActive()` |
| 2 | `uint32 GetSecondsSinceComputerActive()` |
| 3 | `EUniverse GetConnectedUniverse()` |
| 4 | `uint32 GetServerRealTime()` |
| 5 | `const char *GetIPCountry()` |
| 6 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` |
| 7 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` |
| 8 | `uint8 GetCurrentBatteryPower()` |
| 9 | `uint32 GetAppID()` |
| 10 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` |
| 11 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` |
| 12 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` |
| 13 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` |
| 14 | `uint32 GetIPCCallCount()` |
| 15 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` |
| 16 | `bool IsOverlayEnabled()` |
| 17 | `bool BOverlayNeedsPresent()` |
| 18 | `SteamAPICall_t CheckFileSignature(const char *szFileName)` |
| 19 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)` |
| 20 | `uint32 GetEnteredGamepadTextLength()` |
| 21 | `bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText)` |
| 22 | `const char *GetSteamUILanguage()` |
| 23 | `bool IsSteamRunningInVR()` |
| 24 | `void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset)` |
| 25 | `bool IsSteamInBigPictureMode()` |
| 26 | `void StartVRDashboard()` |
| 27 | `bool IsVRHeadsetStreamingEnabled()` |
| 28 | `void SetVRHeadsetStreamingEnabled(bool bEnabled)` |
| 29 | `bool IsSteamChinaLauncher()` |
| 30 | `bool InitFilterText(uint32 unFilterOptions = 0)` |
| 31 | `int FilterText(ETextFilteringContext eContext, CSteamID sourceSteamID, const char *pchInputMessage, char *pchOutFilteredText, uint32 nByteSizeOutFilteredText)` |
| 32 | `ESteamIPv6ConnectivityState GetIPv6ConnectivityState(ESteamIPv6ConnectivityProtocol eProtocol)` |
| 33 | `bool ShowFloatingGamepadTextInput(EFloatingGamepadTextInputMode eKeyboardMode, int nTextFieldXPosition, int nTextFieldYPosition, int nTextFieldWidth, int nTextFieldHeight)` |
| 34 | `void SetGameLauncherMode(bool bLauncherMode)` |
| 35 | `bool DismissFloatingGamepadTextInput()` |
| 36 | `bool DismissGamepadTextInput()` |
| 37 | `ESteamHardwareType IsRunningOnSteamHardware()` |
| 38 | `ESteamHardwareDefaultConfig GetSteamHardwareDefaultConfig()` |
| 39 | `bool IsRunningUnderProton()` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|Num|Methods|I. Versions|
| :-: | :- | :- |
| 1 | `bool BIsPSNOnline()` | `005`, `006` |
| 2 | `bool BIsReadyToShutdown()` | `005`, `006` |
| 3 | `bool BOverlayNeedsPresent()` | `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 4 | `SteamAPICall_t CheckFileSignature(const char *szFileName)` | `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 5 | `bool DismissFloatingGamepadTextInput()` | `010`, `011` |
| 6 | `bool DismissGamepadTextInput()` | `010`, `011` |
| 7 | `int FilterText(char *pchOutFilteredText, uint32 nByteSizeOutFilteredText, const char *pchInputMessage, bool bLegalOnly)` | `009` |
| 8 | `int FilterText(ETextFilteringContext eContext, CSteamID sourceSteamID, const char *pchInputMessage, char *pchOutFilteredText, uint32 nByteSizeOutFilteredText)` | `010`, `011` |
| 9 | `ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 10 | `bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 11 | `uint32 GetAppID()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 12 | `EUniverse GetConnectedUniverse()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 13 | `bool GetCSERIPPort(uint32 *unIP, uint16 *usPort)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
| 14 | `uint8 GetCurrentBatteryPower()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 15 | `bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText)` | `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 16 | `uint32 GetEnteredGamepadTextLength()` | `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 17 | `bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 18 | `bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 19 | `uint32 GetIPCCallCount()` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 20 | `const char *GetIPCountry()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 21 | `ESteamIPv6ConnectivityState GetIPv6ConnectivityState(ESteamIPv6ConnectivityProtocol eProtocol)` | `009`, `010`, `011` |
| 22 | `uint32 GetSecondsSinceAppActive()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 23 | `uint32 GetSecondsSinceComputerActive()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 24 | `uint32 GetServerRealTime()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 25 | `ESteamHardwareDefaultConfig GetSteamHardwareDefaultConfig()` | `011` |
| 26 | `const char *GetSteamUILanguage()` | `006`, `007`, `008`, `009`, `010`, `011` |
| 27 | `bool InitFilterText()` | `009` |
| 28 | `bool InitFilterText(uint32 unFilterOptions = 0)` | `010`, `011` |
| 29 | `bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 30 | `bool IsOverlayEnabled()` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 31 | `ESteamHardwareType IsRunningOnSteamHardware()` | `011` |
| 32 | `bool IsRunningUnderProton()` | `011` |
| 33 | `bool IsSteamChinaLauncher()` | `009`, `010`, `011` |
| 34 | `bool IsSteamInBigPictureMode()` | `008`, `009`, `010`, `011` |
| 35 | `bool IsSteamRunningInVR()` | `006`, `007`, `008`, `009`, `010`, `011` |
| 36 | `bool IsSteamRunningOnSteamDeck()` | `010` |
| 37 | `bool IsVRHeadsetStreamingEnabled()` | `009`, `010`, `011` |
| 38 | `void PostPS3SysutilCallback(uint64_t status, uint64_t param, void *userdata)` | `005`, `006` |
| 39 | `void RunFrame()` | `003`, `004`, `005`, `006` |
| 40 | `void SetGameLauncherMode(bool bLauncherMode)` | `010`, `011` |
| 41 | `void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset)` | `007`, `008`, `009`, `010`, `011` |
| 42 | `void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 43 | `void SetPSNGameBootInviteStrings(const char *pchSubject, const char *pchBody)` | `005`, `006` |
| 44 | `void SetVRHeadsetStreamingEnabled(bool bEnabled)` | `009`, `010`, `011` |
| 45 | `void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011` |
| 46 | `bool ShowFloatingGamepadTextInput(EFloatingGamepadTextInputMode eKeyboardMode, int nTextFieldXPosition, int nTextFieldYPosition, int nTextFieldWidth, int nTextFieldHeight)` | `010`, `011` |
| 47 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax)` | `005`, `006` |
| 48 | `bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)` | `007`, `008`, `009`, `010`, `011` |
| 49 | `void StartVRDashboard()` | `008`, `009`, `010`, `011` |

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
class ISteamUtils;
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