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

# ISteamInput

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  150   |
|   002   |  151   |
|   005   |  152   |
|   006   |  164   |
|   007   |  165   |

```
001 - 143, 144, 145, 146, 147, 148a, 149, 150, G
002 - 151, G
005 - 152, G
006 - 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, G
007 - 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                     |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init()`                                                                                                                                                                                               |
|   2   | `bool Shutdown()`                                                                                                                                                                                           |
|   3   | `void RunFrame()`                                                                                                                                                                                           |
|   4   | `int GetConnectedControllers(InputHandle_t *handlesOut)`                                                                                                                                                    |
|   5   | `InputActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                   |
|   6   | `void ActivateActionSet(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)`                                                                                                                 |
|   7   | `InputActionSetHandle_t GetCurrentActionSet(InputHandle_t inputHandle)`                                                                                                                                     |
|   8   | `void ActivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                       |
|   9   | `void DeactivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                     |
|  10   | `void DeactivateAllActionSetLayers(InputHandle_t inputHandle)`                                                                                                                                              |
|  11   | `int GetActiveActionSetLayers(InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)`                                                                                                               |
|  12   | `InputDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                              |
|  13   | `InputDigitalActionData_t GetDigitalActionData(InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)`                                                                                  |
|  14   | `int GetDigitalActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)`                            |
|  15   | `InputAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                |
|  16   | `InputAnalogActionData_t GetAnalogActionData(InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)`                                                                                      |
|  17   | `int GetAnalogActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)`                               |
|  18   | `const char *GetGlyphForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                           |
|  19   | `const char *GetStringForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                          |
|  20   | `void StopAnalogActionMomentum(InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)`                                                                                                               |
|  21   | `InputMotionData_t GetMotionData(InputHandle_t inputHandle)`                                                                                                                                                |
|  22   | `void TriggerVibration(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                 |
|  23   | `void SetLEDColor(InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                             |
|  24   | `void TriggerHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  25   | `void TriggerRepeatedHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  26   | `bool ShowBindingPanel(InputHandle_t inputHandle)`                                                                                                                                                          |
|  27   | `ESteamInputType GetInputTypeForHandle(InputHandle_t inputHandle)`                                                                                                                                          |
|  28   | `InputHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                    |
|  29   | `int GetGamepadIndexForController(InputHandle_t ulinputHandle)`                                                                                                                                             |
|  30   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                   |
|  31   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                    |
|  32   | `EInputActionOrigin GetActionOriginFromXboxOrigin(InputHandle_t inputHandle, EXboxOrigin eOrigin)`                                                                                                          |
|  33   | `EInputActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)`                                                                                         |
|  34   | `bool GetDeviceBindingRevision(InputHandle_t inputHandle, int *pMajor, int *pMinor)`                                                                                                                        |
|  35   | `uint32 GetRemotePlaySessionID(InputHandle_t inputHandle)`                                                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                     |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init()`                                                                                                                                                                                               |
|   2   | `bool Shutdown()`                                                                                                                                                                                           |
|   3   | `void RunFrame()`                                                                                                                                                                                           |
|   4   | `int GetConnectedControllers(InputHandle_t *handlesOut)`                                                                                                                                                    |
|   5   | `InputActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                   |
|   6   | `void ActivateActionSet(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)`                                                                                                                 |
|   7   | `InputActionSetHandle_t GetCurrentActionSet(InputHandle_t inputHandle)`                                                                                                                                     |
|   8   | `void ActivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                       |
|   9   | `void DeactivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                     |
|  10   | `void DeactivateAllActionSetLayers(InputHandle_t inputHandle)`                                                                                                                                              |
|  11   | `int GetActiveActionSetLayers(InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)`                                                                                                               |
|  12   | `InputDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                              |
|  13   | `InputDigitalActionData_t GetDigitalActionData(InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)`                                                                                  |
|  14   | `int GetDigitalActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)`                            |
|  15   | `InputAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                |
|  16   | `InputAnalogActionData_t GetAnalogActionData(InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)`                                                                                      |
|  17   | `int GetAnalogActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)`                               |
|  18   | `const char *GetGlyphForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                           |
|  19   | `const char *GetStringForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                          |
|  20   | `void StopAnalogActionMomentum(InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)`                                                                                                               |
|  21   | `InputMotionData_t GetMotionData(InputHandle_t inputHandle)`                                                                                                                                                |
|  22   | `void TriggerVibration(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                 |
|  23   | `void SetLEDColor(InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                             |
|  24   | `void TriggerHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  25   | `void TriggerRepeatedHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  26   | `bool ShowBindingPanel(InputHandle_t inputHandle)`                                                                                                                                                          |
|  27   | `ESteamInputType GetInputTypeForHandle(InputHandle_t inputHandle)`                                                                                                                                          |
|  28   | `InputHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                    |
|  29   | `int GetGamepadIndexForController(InputHandle_t ulinputHandle)`                                                                                                                                             |
|  30   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                   |
|  31   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                    |
|  32   | `EInputActionOrigin GetActionOriginFromXboxOrigin(InputHandle_t inputHandle, EXboxOrigin eOrigin)`                                                                                                          |
|  33   | `EInputActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)`                                                                                         |
|  34   | `bool GetDeviceBindingRevision(InputHandle_t inputHandle, int *pMajor, int *pMinor)`                                                                                                                        |
|  35   | `uint32 GetRemotePlaySessionID(InputHandle_t inputHandle)`                                                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                            |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init(bool bExplicitlyCallRunFrame)`                                                                                                                                                                          |
|   2   | `bool Shutdown()`                                                                                                                                                                                                  |
|   3   | `bool SetInputActionManifestFilePath(const char *pchInputActionManifestAbsolutePath)`                                                                                                                              |
|   4   | `void RunFrame(bool bReservedValue = true)`                                                                                                                                                                        |
|   5   | `bool BWaitForData(bool bWaitForever, uint32 unTimeout)`                                                                                                                                                           |
|   6   | `bool BNewDataAvailable()`                                                                                                                                                                                         |
|   7   | `int GetConnectedControllers(InputHandle_t *handlesOut)`                                                                                                                                                           |
|   8   | `void EnableDeviceCallbacks()`                                                                                                                                                                                     |
|   9   | `void EnableActionEventCallbacks(SteamInputActionEventCallbackPointer pCallback)`                                                                                                                                  |
|  10   | `InputActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                          |
|  11   | `void ActivateActionSet(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)`                                                                                                                        |
|  12   | `InputActionSetHandle_t GetCurrentActionSet(InputHandle_t inputHandle)`                                                                                                                                            |
|  13   | `void ActivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                              |
|  14   | `void DeactivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                            |
|  15   | `void DeactivateAllActionSetLayers(InputHandle_t inputHandle)`                                                                                                                                                     |
|  16   | `int GetActiveActionSetLayers(InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)`                                                                                                                      |
|  17   | `InputDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                     |
|  18   | `InputDigitalActionData_t GetDigitalActionData(InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)`                                                                                         |
|  19   | `int GetDigitalActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)`                                   |
|  20   | `const char *GetStringForDigitalActionName(InputDigitalActionHandle_t eActionHandle)`                                                                                                                              |
|  21   | `InputAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                       |
|  22   | `InputAnalogActionData_t GetAnalogActionData(InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)`                                                                                             |
|  23   | `int GetAnalogActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)`                                      |
|  24   | `const char *GetGlyphPNGForActionOrigin(EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)`                                                                                                   |
|  25   | `const char *GetGlyphSVGForActionOrigin(EInputActionOrigin eOrigin, uint32 unFlags)`                                                                                                                               |
|  26   | `const char *GetGlyphForActionOrigin_Legacy(EInputActionOrigin eOrigin)`                                                                                                                                           |
|  27   | `const char *GetStringForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                                 |
|  28   | `const char *GetStringForAnalogActionName(InputAnalogActionHandle_t eActionHandle)`                                                                                                                                |
|  29   | `void StopAnalogActionMomentum(InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)`                                                                                                                      |
|  30   | `InputMotionData_t GetMotionData(InputHandle_t inputHandle)`                                                                                                                                                       |
|  31   | `void TriggerVibration(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                        |
|  32   | `void TriggerVibrationExtended(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)`                         |
|  33   | `void TriggerSimpleHapticEvent(InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)`                                    |
|  34   | `void SetLEDColor(InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                                    |
|  35   | `void Legacy_TriggerHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  36   | `void Legacy_TriggerRepeatedHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  37   | `bool ShowBindingPanel(InputHandle_t inputHandle)`                                                                                                                                                                 |
|  38   | `ESteamInputType GetInputTypeForHandle(InputHandle_t inputHandle)`                                                                                                                                                 |
|  39   | `InputHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                           |
|  40   | `int GetGamepadIndexForController(InputHandle_t ulinputHandle)`                                                                                                                                                    |
|  41   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                          |
|  42   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                           |
|  43   | `EInputActionOrigin GetActionOriginFromXboxOrigin(InputHandle_t inputHandle, EXboxOrigin eOrigin)`                                                                                                                 |
|  44   | `EInputActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)`                                                                                                |
|  45   | `bool GetDeviceBindingRevision(InputHandle_t inputHandle, int *pMajor, int *pMinor)`                                                                                                                               |
|  46   | `uint32 GetRemotePlaySessionID(InputHandle_t inputHandle)`                                                                                                                                                         |
|  47   | `uint16 GetSessionInputConfigurationSettings()`                                                                                                                                                                    |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                            |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init(bool bExplicitlyCallRunFrame)`                                                                                                                                                                          |
|   2   | `bool Shutdown()`                                                                                                                                                                                                  |
|   3   | `bool SetInputActionManifestFilePath(const char *pchInputActionManifestAbsolutePath)`                                                                                                                              |
|   4   | `void RunFrame(bool bReservedValue = true)`                                                                                                                                                                        |
|   5   | `bool BWaitForData(bool bWaitForever, uint32 unTimeout)`                                                                                                                                                           |
|   6   | `bool BNewDataAvailable()`                                                                                                                                                                                         |
|   7   | `int GetConnectedControllers(InputHandle_t *handlesOut)`                                                                                                                                                           |
|   8   | `void EnableDeviceCallbacks()`                                                                                                                                                                                     |
|   9   | `void EnableActionEventCallbacks(SteamInputActionEventCallbackPointer pCallback)`                                                                                                                                  |
|  10   | `InputActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                          |
|  11   | `void ActivateActionSet(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)`                                                                                                                        |
|  12   | `InputActionSetHandle_t GetCurrentActionSet(InputHandle_t inputHandle)`                                                                                                                                            |
|  13   | `void ActivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                              |
|  14   | `void DeactivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                            |
|  15   | `void DeactivateAllActionSetLayers(InputHandle_t inputHandle)`                                                                                                                                                     |
|  16   | `int GetActiveActionSetLayers(InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)`                                                                                                                      |
|  17   | `InputDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                     |
|  18   | `InputDigitalActionData_t GetDigitalActionData(InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)`                                                                                         |
|  19   | `int GetDigitalActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)`                                   |
|  20   | `const char *GetStringForDigitalActionName(InputDigitalActionHandle_t eActionHandle)`                                                                                                                              |
|  21   | `InputAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                       |
|  22   | `InputAnalogActionData_t GetAnalogActionData(InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)`                                                                                             |
|  23   | `int GetAnalogActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)`                                      |
|  24   | `const char *GetGlyphPNGForActionOrigin(EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)`                                                                                                   |
|  25   | `const char *GetGlyphSVGForActionOrigin(EInputActionOrigin eOrigin, uint32 unFlags)`                                                                                                                               |
|  26   | `const char *GetGlyphForActionOrigin_Legacy(EInputActionOrigin eOrigin)`                                                                                                                                           |
|  27   | `const char *GetStringForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                                 |
|  28   | `const char *GetStringForAnalogActionName(InputAnalogActionHandle_t eActionHandle)`                                                                                                                                |
|  29   | `void StopAnalogActionMomentum(InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)`                                                                                                                      |
|  30   | `InputMotionData_t GetMotionData(InputHandle_t inputHandle)`                                                                                                                                                       |
|  31   | `void TriggerVibration(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                        |
|  32   | `void TriggerVibrationExtended(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)`                         |
|  33   | `void TriggerSimpleHapticEvent(InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)`                                    |
|  34   | `void SetLEDColor(InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                                    |
|  35   | `void Legacy_TriggerHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  36   | `void Legacy_TriggerRepeatedHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  37   | `bool ShowBindingPanel(InputHandle_t inputHandle)`                                                                                                                                                                 |
|  38   | `ESteamInputType GetInputTypeForHandle(InputHandle_t inputHandle)`                                                                                                                                                 |
|  39   | `InputHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                           |
|  40   | `int GetGamepadIndexForController(InputHandle_t ulinputHandle)`                                                                                                                                                    |
|  41   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                          |
|  42   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                           |
|  43   | `EInputActionOrigin GetActionOriginFromXboxOrigin(InputHandle_t inputHandle, EXboxOrigin eOrigin)`                                                                                                                 |
|  44   | `EInputActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)`                                                                                                |
|  45   | `bool GetDeviceBindingRevision(InputHandle_t inputHandle, int *pMajor, int *pMinor)`                                                                                                                               |
|  46   | `uint32 GetRemotePlaySessionID(InputHandle_t inputHandle)`                                                                                                                                                         |
|  47   | `uint16 GetSessionInputConfigurationSettings()`                                                                                                                                                                    |
|  48   | `void SetDualSenseTriggerEffect(InputHandle_t inputHandle, const ScePadTriggerEffectParam *pParam)`                                                                                                                |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                            |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init(bool bExplicitlyCallRunFrame)`                                                                                                                                                                          |
|   2   | `bool Shutdown()`                                                                                                                                                                                                  |
|   3   | `bool SetInputActionManifestFilePath(const char *pchInputActionManifestAbsolutePath)`                                                                                                                              |
|   4   | `void RunFrame(bool bReservedValue = true)`                                                                                                                                                                        |
|   5   | `bool BWaitForData(bool bWaitForever, uint32 unTimeout)`                                                                                                                                                           |
|   6   | `bool BNewDataAvailable()`                                                                                                                                                                                         |
|   7   | `int GetConnectedControllers(InputHandle_t *handlesOut)`                                                                                                                                                           |
|   8   | `void EnableDeviceCallbacks()`                                                                                                                                                                                     |
|   9   | `void EnableActionEventCallbacks(SteamInputActionEventCallbackPointer pCallback)`                                                                                                                                  |
|  10   | `InputActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                          |
|  11   | `void ActivateActionSet(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)`                                                                                                                        |
|  12   | `InputActionSetHandle_t GetCurrentActionSet(InputHandle_t inputHandle)`                                                                                                                                            |
|  13   | `void ActivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                              |
|  14   | `void DeactivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                            |
|  15   | `void DeactivateAllActionSetLayers(InputHandle_t inputHandle)`                                                                                                                                                     |
|  16   | `int GetActiveActionSetLayers(InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)`                                                                                                                      |
|  17   | `InputDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                     |
|  18   | `InputDigitalActionData_t GetDigitalActionData(InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)`                                                                                         |
|  19   | `int GetDigitalActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)`                                   |
|  20   | `const char *GetStringForDigitalActionName(InputDigitalActionHandle_t eActionHandle)`                                                                                                                              |
|  21   | `InputAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                       |
|  22   | `InputAnalogActionData_t GetAnalogActionData(InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)`                                                                                             |
|  23   | `int GetAnalogActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)`                                      |
|  24   | `const char *GetGlyphPNGForActionOrigin(EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)`                                                                                                   |
|  25   | `const char *GetGlyphSVGForActionOrigin(EInputActionOrigin eOrigin, uint32 unFlags)`                                                                                                                               |
|  26   | `const char *GetGlyphForActionOrigin_Legacy(EInputActionOrigin eOrigin)`                                                                                                                                           |
|  27   | `const char *GetStringForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                                 |
|  28   | `const char *GetStringForAnalogActionName(InputAnalogActionHandle_t eActionHandle)`                                                                                                                                |
|  29   | `void StopAnalogActionMomentum(InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)`                                                                                                                      |
|  30   | `InputMotionData_t GetMotionData(InputHandle_t inputHandle)`                                                                                                                                                       |
|  31   | `void TriggerVibration(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                        |
|  32   | `void TriggerVibrationExtended(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)`                         |
|  33   | `void TriggerSimpleHapticEvent(InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)`                                    |
|  34   | `void SetLEDColor(InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                                    |
|  35   | `void Legacy_TriggerHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  36   | `void Legacy_TriggerRepeatedHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  37   | `bool ShowBindingPanel(InputHandle_t inputHandle)`                                                                                                                                                                 |
|  38   | `ESteamInputType GetInputTypeForHandle(InputHandle_t inputHandle)`                                                                                                                                                 |
|  39   | `InputHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                           |
|  40   | `int GetGamepadIndexForController(InputHandle_t ulinputHandle)`                                                                                                                                                    |
|  41   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                          |
|  42   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                           |
|  43   | `EInputActionOrigin GetActionOriginFromXboxOrigin(InputHandle_t inputHandle, EXboxOrigin eOrigin)`                                                                                                                 |
|  44   | `EInputActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)`                                                                                                |
|  45   | `bool GetDeviceBindingRevision(InputHandle_t inputHandle, int *pMajor, int *pMinor)`                                                                                                                               |
|  46   | `uint32 GetRemotePlaySessionID(InputHandle_t inputHandle)`                                                                                                                                                         |
|  47   | `uint16 GetSessionInputConfigurationSettings()`                                                                                                                                                                    |
|  48   | `void SetDualSenseTriggerEffect(InputHandle_t inputHandle, const ScePadTriggerEffectParam *pParam)`                                                                                                                |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                            | I. Versions                       |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
|   1   | `void ActivateActionSet(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)`                                                                                                                        | `001`, `002`, `005`, `006`, `007` |
|   2   | `void ActivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                              | `001`, `002`, `005`, `006`, `007` |
|   3   | `bool BNewDataAvailable()`                                                                                                                                                                                         | `005`, `006`, `007`               |
|   4   | `bool BWaitForData(bool bWaitForever, uint32 unTimeout)`                                                                                                                                                           | `005`, `006`, `007`               |
|   5   | `void DeactivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)`                                                                                                            | `001`, `002`, `005`, `006`, `007` |
|   6   | `void DeactivateAllActionSetLayers(InputHandle_t inputHandle)`                                                                                                                                                     | `001`, `002`, `005`, `006`, `007` |
|   7   | `void EnableActionEventCallbacks(SteamInputActionEventCallbackPointer pCallback)`                                                                                                                                  | `005`, `006`, `007`               |
|   8   | `void EnableDeviceCallbacks()`                                                                                                                                                                                     | `005`, `006`, `007`               |
|   9   | `EInputActionOrigin GetActionOriginFromXboxOrigin(InputHandle_t inputHandle, EXboxOrigin eOrigin)`                                                                                                                 | `001`, `002`, `005`, `006`, `007` |
|  10   | `InputActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                          | `001`, `002`, `005`, `006`, `007` |
|  11   | `int GetActiveActionSetLayers(InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)`                                                                                                                      | `001`, `002`, `005`, `006`, `007` |
|  12   | `InputAnalogActionData_t GetAnalogActionData(InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)`                                                                                             | `001`, `002`, `005`, `006`, `007` |
|  13   | `InputAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                       | `001`, `002`, `005`, `006`, `007` |
|  14   | `int GetAnalogActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)`                                      | `001`, `002`, `005`, `006`, `007` |
|  15   | `int GetConnectedControllers(InputHandle_t *handlesOut)`                                                                                                                                                           | `001`, `002`, `005`, `006`, `007` |
|  16   | `InputHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                           | `001`, `002`, `005`, `006`, `007` |
|  17   | `InputActionSetHandle_t GetCurrentActionSet(InputHandle_t inputHandle)`                                                                                                                                            | `001`, `002`, `005`, `006`, `007` |
|  18   | `bool GetDeviceBindingRevision(InputHandle_t inputHandle, int *pMajor, int *pMinor)`                                                                                                                               | `001`, `002`, `005`, `006`, `007` |
|  19   | `InputDigitalActionData_t GetDigitalActionData(InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)`                                                                                         | `001`, `002`, `005`, `006`, `007` |
|  20   | `InputDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                     | `001`, `002`, `005`, `006`, `007` |
|  21   | `int GetDigitalActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)`                                   | `001`, `002`, `005`, `006`, `007` |
|  22   | `int GetGamepadIndexForController(InputHandle_t ulinputHandle)`                                                                                                                                                    | `001`, `002`, `005`, `006`, `007` |
|  23   | `const char *GetGlyphForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                                  | `001`, `002`                      |
|  24   | `const char *GetGlyphForActionOrigin_Legacy(EInputActionOrigin eOrigin)`                                                                                                                                           | `005`, `006`, `007`               |
|  25   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                           | `001`, `002`, `005`, `006`, `007` |
|  26   | `const char *GetGlyphPNGForActionOrigin(EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)`                                                                                                   | `005`, `006`, `007`               |
|  27   | `const char *GetGlyphSVGForActionOrigin(EInputActionOrigin eOrigin, uint32 unFlags)`                                                                                                                               | `005`, `006`, `007`               |
|  28   | `ESteamInputType GetInputTypeForHandle(InputHandle_t inputHandle)`                                                                                                                                                 | `001`, `002`, `005`, `006`, `007` |
|  29   | `InputMotionData_t GetMotionData(InputHandle_t inputHandle)`                                                                                                                                                       | `001`, `002`, `005`, `006`, `007` |
|  30   | `uint32 GetRemotePlaySessionID(InputHandle_t inputHandle)`                                                                                                                                                         | `001`, `002`, `005`, `006`, `007` |
|  31   | `uint16 GetSessionInputConfigurationSettings()`                                                                                                                                                                    | `005`, `006`, `007`               |
|  32   | `const char *GetStringForActionOrigin(EInputActionOrigin eOrigin)`                                                                                                                                                 | `001`, `002`, `005`, `006`, `007` |
|  33   | `const char *GetStringForAnalogActionName(InputAnalogActionHandle_t eActionHandle)`                                                                                                                                | `005`, `006`, `007`               |
|  34   | `const char *GetStringForDigitalActionName(InputDigitalActionHandle_t eActionHandle)`                                                                                                                              | `005`, `006`, `007`               |
|  35   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                          | `001`, `002`, `005`, `006`, `007` |
|  36   | `bool Init()`                                                                                                                                                                                                      | `001`, `002`                      |
|  37   | `bool Init(bool bExplicitlyCallRunFrame)`                                                                                                                                                                          | `005`, `006`, `007`               |
|  38   | `void Legacy_TriggerHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     | `005`, `006`, `007`               |
|  39   | `void Legacy_TriggerRepeatedHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` | `005`, `006`, `007`               |
|  40   | `void RunFrame()`                                                                                                                                                                                                  | `001`, `002`                      |
|  41   | `void RunFrame(bool bReservedValue = true)`                                                                                                                                                                        | `005`, `006`, `007`               |
|  42   | `void SetDualSenseTriggerEffect(InputHandle_t inputHandle, const ScePadTriggerEffectParam *pParam)`                                                                                                                | `006`, `007`                      |
|  43   | `bool SetInputActionManifestFilePath(const char *pchInputActionManifestAbsolutePath)`                                                                                                                              | `005`, `006`, `007`               |
|  44   | `void SetLEDColor(InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                                    | `001`, `002`, `005`, `006`, `007` |
|  45   | `bool ShowBindingPanel(InputHandle_t inputHandle)`                                                                                                                                                                 | `001`, `002`, `005`, `006`, `007` |
|  46   | `bool Shutdown()`                                                                                                                                                                                                  | `001`, `002`, `005`, `006`, `007` |
|  47   | `void StopAnalogActionMomentum(InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)`                                                                                                                      | `001`, `002`, `005`, `006`, `007` |
|  48   | `EInputActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)`                                                                                                | `001`, `002`, `005`, `006`, `007` |
|  49   | `void TriggerHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                            | `001`, `002`                      |
|  50   | `void TriggerRepeatedHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)`        | `001`, `002`                      |
|  51   | `void TriggerSimpleHapticEvent(InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)`                                    | `005`, `006`, `007`               |
|  52   | `void TriggerVibration(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                        | `001`, `002`, `005`, `006`, `007` |
|  53   | `void TriggerVibrationExtended(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)`                         | `005`, `006`, `007`               |

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
class ISteamInput;
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