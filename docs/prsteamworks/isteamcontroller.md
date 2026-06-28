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

# ISteamController

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | F. SDK | L. SDK | U. SDK |
| :-----: | :----: | :----: | :----: |
|    ~    |   25   |   34   |   34   |
|   003   |   35   |   37   |   37   |
|   004   |   38   |   38   |   38   |
|   005   |   39   |   41   |   41   |
|   006   |   42   |   42   |   42   |
|   007   |   43   |   50   |   50   |
|   008   |   51   |   *    |  *64   |
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region ~ / 000 -->
<details style="margin-left: 20px">
<summary><b><code>~ / 000</code></b></summary>

|  Num  | Methods                                                                                                                |
| :---: | :--------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init(const char *pchAbsolutePathToControllerConfigVDF)`                                                          |
|   2   | `bool Shutdown()`                                                                                                      |
|   3   | `void RunFrame()`                                                                                                      |
|   4   | `bool GetControllerState(uint32 unControllerIndex, SteamControllerState_t *pState)`                                    |
|   5   | `void TriggerHapticPulse(uint32 unControllerIndex, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)` |
|   6   | `void SetOverrideMode(const char *pchMode)`                                                                            |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                               |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init()`                                                                                                                                                                                                         |
|   2   | `bool Shutdown()`                                                                                                                                                                                                     |
|   3   | `void RunFrame()`                                                                                                                                                                                                     |
|   4   | `int GetConnectedControllers(ControllerHandle_t *handlesOut)`                                                                                                                                                         |
|   5   | `bool ShowBindingPanel(ControllerHandle_t controllerHandle)`                                                                                                                                                          |
|   6   | `ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                        |
|   7   | `void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)`                                                                                                            |
|   8   | `ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle)`                                                                                                                                |
|   9   | `ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                   |
|  10   | `ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)`                                                                        |
|  11   | `int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)`             |
|  12   | `ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                     |
|  13   | `ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)`                                                                            |
|  14   | `int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)`                |
|  15   | `void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)`                                                                                                          |
|  16   | `void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  17   | `void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                               |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init()`                                                                                                                                                                                                         |
|   2   | `bool Shutdown()`                                                                                                                                                                                                     |
|   3   | `void RunFrame()`                                                                                                                                                                                                     |
|   4   | `int GetConnectedControllers(ControllerHandle_t *handlesOut)`                                                                                                                                                         |
|   5   | `bool ShowBindingPanel(ControllerHandle_t controllerHandle)`                                                                                                                                                          |
|   6   | `ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                        |
|   7   | `void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)`                                                                                                            |
|   8   | `ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle)`                                                                                                                                |
|   9   | `ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                   |
|  10   | `ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)`                                                                        |
|  11   | `int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)`             |
|  12   | `ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                     |
|  13   | `ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)`                                                                            |
|  14   | `int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)`                |
|  15   | `void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)`                                                                                                          |
|  16   | `void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  17   | `void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  18   | `int GetGamepadIndexForController(ControllerHandle_t ulControllerHandle)`                                                                                                                                             |
|  19   | `ControllerHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                         |
|  20   | `ControllerMotionData_t GetMotionData(ControllerHandle_t controllerHandle)`                                                                                                                                           |
|  21   | `bool ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)`                                        |
|  22   | `bool ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)`                                           |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                               |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init()`                                                                                                                                                                                                         |
|   2   | `bool Shutdown()`                                                                                                                                                                                                     |
|   3   | `void RunFrame()`                                                                                                                                                                                                     |
|   4   | `int GetConnectedControllers(ControllerHandle_t *handlesOut)`                                                                                                                                                         |
|   5   | `bool ShowBindingPanel(ControllerHandle_t controllerHandle)`                                                                                                                                                          |
|   6   | `ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                        |
|   7   | `void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)`                                                                                                            |
|   8   | `ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle)`                                                                                                                                |
|   9   | `ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                   |
|  10   | `ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)`                                                                        |
|  11   | `int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)`             |
|  12   | `ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                     |
|  13   | `ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)`                                                                            |
|  14   | `int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)`                |
|  15   | `void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)`                                                                                                          |
|  16   | `void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  17   | `void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  18   | `void TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                 |
|  19   | `void SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                             |
|  20   | `int GetGamepadIndexForController(ControllerHandle_t ulControllerHandle)`                                                                                                                                             |
|  21   | `ControllerHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                         |
|  22   | `ControllerMotionData_t GetMotionData(ControllerHandle_t controllerHandle)`                                                                                                                                           |
|  23   | `bool ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)`                                        |
|  24   | `bool ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)`                                           |
|  25   | `const char *GetStringForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                               |
|  26   | `const char *GetGlyphForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                                |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                               |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init()`                                                                                                                                                                                                         |
|   2   | `bool Shutdown()`                                                                                                                                                                                                     |
|   3   | `void RunFrame()`                                                                                                                                                                                                     |
|   4   | `int GetConnectedControllers(ControllerHandle_t *handlesOut)`                                                                                                                                                         |
|   5   | `bool ShowBindingPanel(ControllerHandle_t controllerHandle)`                                                                                                                                                          |
|   6   | `ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                        |
|   7   | `void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)`                                                                                                            |
|   8   | `ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle)`                                                                                                                                |
|   9   | `void ActivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)`                                                                                                  |
|  10   | `void DeactivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)`                                                                                                |
|  11   | `void DeactivateAllActionSetLayers(ControllerHandle_t controllerHandle)`                                                                                                                                              |
|  12   | `int GetActiveActionSetLayers(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t *handlesOut)`                                                                                                          |
|  13   | `ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                   |
|  14   | `ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)`                                                                        |
|  15   | `int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)`             |
|  16   | `ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                     |
|  17   | `ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)`                                                                            |
|  18   | `int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)`                |
|  19   | `void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)`                                                                                                          |
|  20   | `void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  21   | `void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  22   | `void TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                 |
|  23   | `void SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                             |
|  24   | `int GetGamepadIndexForController(ControllerHandle_t ulControllerHandle)`                                                                                                                                             |
|  25   | `ControllerHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                         |
|  26   | `ControllerMotionData_t GetMotionData(ControllerHandle_t controllerHandle)`                                                                                                                                           |
|  27   | `bool ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)`                                        |
|  28   | `bool ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)`                                           |
|  29   | `const char *GetStringForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                               |
|  30   | `const char *GetGlyphForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                                |
|  31   | `ESteamInputType GetInputTypeForHandle(ControllerHandle_t controllerHandle)`                                                                                                                                          |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                               |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init()`                                                                                                                                                                                                         |
|   2   | `bool Shutdown()`                                                                                                                                                                                                     |
|   3   | `void RunFrame()`                                                                                                                                                                                                     |
|   4   | `int GetConnectedControllers(ControllerHandle_t *handlesOut)`                                                                                                                                                         |
|   5   | `ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                        |
|   6   | `void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)`                                                                                                            |
|   7   | `ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle)`                                                                                                                                |
|   8   | `void ActivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)`                                                                                                  |
|   9   | `void DeactivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)`                                                                                                |
|  10   | `void DeactivateAllActionSetLayers(ControllerHandle_t controllerHandle)`                                                                                                                                              |
|  11   | `int GetActiveActionSetLayers(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t *handlesOut)`                                                                                                          |
|  12   | `ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                   |
|  13   | `ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)`                                                                        |
|  14   | `int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)`             |
|  15   | `ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                     |
|  16   | `ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)`                                                                            |
|  17   | `int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)`                |
|  18   | `const char *GetGlyphForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                                |
|  19   | `const char *GetStringForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                               |
|  20   | `void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)`                                                                                                          |
|  21   | `ControllerMotionData_t GetMotionData(ControllerHandle_t controllerHandle)`                                                                                                                                           |
|  22   | `void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  23   | `void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  24   | `void TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                 |
|  25   | `void SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                             |
|  26   | `bool ShowBindingPanel(ControllerHandle_t controllerHandle)`                                                                                                                                                          |
|  27   | `ESteamInputType GetInputTypeForHandle(ControllerHandle_t controllerHandle)`                                                                                                                                          |
|  28   | `ControllerHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                         |
|  29   | `int GetGamepadIndexForController(ControllerHandle_t ulControllerHandle)`                                                                                                                                             |
|  30   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                             |
|  31   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                              |
|  32   | `EControllerActionOrigin GetActionOriginFromXboxOrigin(ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)`                                                                                                     |
|  33   | `EControllerActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)`                                                                                         |
|  34   | `bool GetControllerBindingRevision(ControllerHandle_t controllerHandle, int *pMajor, int *pMinor)`                                                                                                                    |

</details>
<!-- #endregion -->

<!-- #region 008 -->
<details style="margin-left: 20px">
<summary><b><code>008</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                               |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool Init()`                                                                                                                                                                                                         |
|   2   | `bool Shutdown()`                                                                                                                                                                                                     |
|   3   | `void RunFrame()`                                                                                                                                                                                                     |
|   4   | `int GetConnectedControllers(ControllerHandle_t *handlesOut)`                                                                                                                                                         |
|   5   | `ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                        |
|   6   | `void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)`                                                                                                            |
|   7   | `ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle)`                                                                                                                                |
|   8   | `void ActivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)`                                                                                                  |
|   9   | `void DeactivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)`                                                                                                |
|  10   | `void DeactivateAllActionSetLayers(ControllerHandle_t controllerHandle)`                                                                                                                                              |
|  11   | `int GetActiveActionSetLayers(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t *handlesOut)`                                                                                                          |
|  12   | `ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                   |
|  13   | `ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)`                                                                        |
|  14   | `int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)`             |
|  15   | `ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                     |
|  16   | `ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)`                                                                            |
|  17   | `int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)`                |
|  18   | `const char *GetGlyphForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                                |
|  19   | `const char *GetStringForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                               |
|  20   | `void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)`                                                                                                          |
|  21   | `ControllerMotionData_t GetMotionData(ControllerHandle_t controllerHandle)`                                                                                                                                           |
|  22   | `void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     |
|  23   | `void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` |
|  24   | `void TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                 |
|  25   | `void SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                             |
|  26   | `bool ShowBindingPanel(ControllerHandle_t controllerHandle)`                                                                                                                                                          |
|  27   | `ESteamInputType GetInputTypeForHandle(ControllerHandle_t controllerHandle)`                                                                                                                                          |
|  28   | `ControllerHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                         |
|  29   | `int GetGamepadIndexForController(ControllerHandle_t ulControllerHandle)`                                                                                                                                             |
|  30   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                             |
|  31   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                              |
|  32   | `EControllerActionOrigin GetActionOriginFromXboxOrigin(ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)`                                                                                                     |
|  33   | `EControllerActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)`                                                                                         |
|  34   | `bool GetControllerBindingRevision(ControllerHandle_t controllerHandle, int *pMajor, int *pMinor)`                                                                                                                    |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                               | I. Versions                                     |
| :---: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------- |
|   1   | `bool Init(const char *pchAbsolutePathToControllerConfigVDF)`                                                                                                                                                         | `000`                                           |
|   2   | `bool Shutdown()`                                                                                                                                                                                                     | `000`, `003`, `004`, `005`, `006`, `007`, `008` |
|   3   | `void RunFrame()`                                                                                                                                                                                                     | `000`, `003`, `004`, `005`, `006`, `007`, `008` |
|   4   | `bool GetControllerState(uint32 unControllerIndex, SteamControllerState_t *pState)`                                                                                                                                   | `000`                                           |
|   5   | `void TriggerHapticPulse(uint32 unControllerIndex, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                                | `000`                                           |
|   6   | `void SetOverrideMode(const char *pchMode)`                                                                                                                                                                           | `000`                                           |
|   7   | `bool Init()`                                                                                                                                                                                                         | `003`, `004`, `005`, `006`, `007`, `008`        |
|   8   | `int GetConnectedControllers(ControllerHandle_t *handlesOut)`                                                                                                                                                         | `003`, `004`, `005`, `006`, `007`, `008`        |
|   9   | `bool ShowBindingPanel(ControllerHandle_t controllerHandle)`                                                                                                                                                          | `003`, `004`, `005`, `006`, `007`, `008`        |
|  10   | `ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)`                                                                                                                                        | `003`, `004`, `005`, `006`, `007`, `008`        |
|  11   | `void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)`                                                                                                            | `003`, `004`, `005`, `006`, `007`, `008`        |
|  12   | `ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle)`                                                                                                                                | `003`, `004`, `005`, `006`, `007`, `008`        |
|  13   | `ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)`                                                                                                                                   | `003`, `004`, `005`, `006`, `007`, `008`        |
|  14   | `ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)`                                                                        | `003`, `004`, `005`, `006`, `007`, `008`        |
|  15   | `int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)`             | `003`, `004`, `005`, `006`, `007`, `008`        |
|  16   | `ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)`                                                                                                                                     | `003`, `004`, `005`, `006`, `007`, `008`        |
|  17   | `ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)`                                                                            | `003`, `004`, `005`, `006`, `007`, `008`        |
|  18   | `int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)`                | `003`, `004`, `005`, `006`, `007`, `008`        |
|  19   | `void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)`                                                                                                          | `003`, `004`, `005`, `006`, `007`, `008`        |
|  20   | `void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)`                                                                                     | `003`, `004`, `005`, `006`, `007`, `008`        |
|  21   | `void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)` | `003`, `004`, `005`, `006`, `007`, `008`        |
|  22   | `int GetGamepadIndexForController(ControllerHandle_t ulControllerHandle)`                                                                                                                                             | `004`, `005`, `006`, `007`, `008`               |
|  23   | `ControllerHandle_t GetControllerForGamepadIndex(int nIndex)`                                                                                                                                                         | `004`, `005`, `006`, `007`, `008`               |
|  24   | `ControllerMotionData_t GetMotionData(ControllerHandle_t controllerHandle)`                                                                                                                                           | `004`, `005`, `006`, `007`, `008`               |
|  25   | `bool ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)`                                        | `004`, `005`, `006`                             |
|  26   | `bool ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)`                                           | `004`, `005`, `006`                             |
|  27   | `void TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)`                                                                                                 | `005`, `006`, `007`, `008`                      |
|  28   | `void SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)`                                                                                             | `005`, `006`, `007`, `008`                      |
|  29   | `const char *GetStringForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                               | `005`, `006`, `007`, `008`                      |
|  30   | `const char *GetGlyphForActionOrigin(EControllerActionOrigin eOrigin)`                                                                                                                                                | `005`, `006`, `007`, `008`                      |
|  31   | `void ActivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)`                                                                                                  | `006`, `007`, `008`                             |
|  32   | `void DeactivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)`                                                                                                | `006`, `007`, `008`                             |
|  33   | `void DeactivateAllActionSetLayers(ControllerHandle_t controllerHandle)`                                                                                                                                              | `006`, `007`, `008`                             |
|  34   | `int GetActiveActionSetLayers(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t *handlesOut)`                                                                                                          | `006`, `007`, `008`                             |
|  35   | `ESteamInputType GetInputTypeForHandle(ControllerHandle_t controllerHandle)`                                                                                                                                          | `006`, `007`, `008`                             |
|  36   | `const char *GetStringForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                             | `007`, `008`                                    |
|  37   | `const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin)`                                                                                                                                                              | `007`, `008`                                    |
|  38   | `EControllerActionOrigin GetActionOriginFromXboxOrigin(ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)`                                                                                                     | `007`, `008`                                    |
|  39   | `EControllerActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)`                                                                                         | `007`, `008`                                    |
|  40   | `bool GetControllerBindingRevision(ControllerHandle_t controllerHandle, int *pMajor, int *pMinor)`                                                                                                                    | `007`, `008`                                    |

</details>
<!-- #endregion -->

</details>
<!-- #endregion -->

> [!NOTE]
> Этот класс был реализован очень странно. В интерфейсе есть 2 разных текстовых названия, а версии начинаются с числа `003` _(После `~`)_. В таблице `SDKs user` символ `~` _(`000`)_ означает, что это интерфейс с текстовым названием `STEAMCONTROLLER_INTERFACE_VERSION` _(Это полное текстовое название интерфейса)_. Все последующие версии имеют текстовое название `SteamControllerXXX`. _Где `xxx` - номер версии интерфейса._

> [!WARNING]
> Версия `~` в `PleaseRetrySteamworks` обозначается как:\
> **Файл: `isteamcontroller000.h`**\
> **Класс: `ISteamController000`**\
> **Текст. название интерфейса в `define`: `STEAMCONTROLLER_INTERFACE_VERSION`**
>
> Остальные версии обозначаются как обычно:\
> **Файл: `isteamcontrollerXXX.h`**\
> **Класс: `ISteamControllerXXX`**\
> **Текст. название интерфейса в `define`: `SteamControllerXXX`**
> _(`XXX` - версия интерфейса)_

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
class ISteamController;
```

API ввода Steam

## Init `000`
```cpp
bool Init(const char *pchAbsolutePathToControllerConfigVDF)
```

| Название                               | Тип            | Описание                                                         |
| :------------------------------------- | :------------- | :--------------------------------------------------------------- |
| `pchAbsolutePathToControllerConfigVDF` | `const char *` | Абсолютный путь к файлу конфигурации `.vdf` с привязками клавиш. |

Инициализирует интерфейс контроллера.

**Возвращает:** `bool`\
`true`, если инициализация успешна, в противном случае `false`.

## Init `003`
```cpp
bool Init()
```

Инициализирует интерфейс контроллера.

**Возвращает:** `bool`\
`true`, если инициализация успешна, в противном случае `false`.

## Shutdown
```cpp
bool Shutdown()
```

Завершает работу интерфейса и освобождает ресурсы.

**Возвращает:** `bool`\
`true`, если завершение прошло успешно, в противном случае `false`.

## RunFrame
```cpp
void RunFrame()
```

Обновляет состояние контроллеров и обрабатывает события ввода.

**Возвращает:** `void`

## GetControllerState
```cpp
bool GetControllerState(uint32 unControllerIndex, SteamControllerState_t *pState)
```

| Название            | Тип                        | Описание                                                |
| :------------------ | :------------------------- | :------------------------------------------------------ |
| `unControllerIndex` | `uint32`                   | Индекс опрашиваемого контроллера.                       |
| `pState`            | `SteamControllerState_t *` | Указатель на структуру, куда запишется состояние ввода. |

Запрашивает текущее состояние кнопок и осей конкретного контроллера.

**Возвращает:** `bool`\
`true`, если контроллер подключен и данные успешно записаны, в противном случае `false`.

## TriggerHapticPulse
```cpp
void TriggerHapticPulse(uint32 unControllerIndex, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
```

| Название             | Тип                   | Описание                               |
| :------------------- | :-------------------- | :------------------------------------- |
| `unControllerIndex`  | `uint32`              | Индекс целевого контроллера.           |
| `eTargetPad`         | `ESteamControllerPad` | Целевой трекпад/мотор.                 |
| `usDurationMicroSec` | `unsigned short`      | Длительность импульса в микросекундах. |

Вызывает тактильную виброотдачу на трекпадах/моторах контроллера.

**Возвращает:** `void`

## SetOverrideMode
```cpp
void SetOverrideMode(const char *pchMode)
```

| Название  | Тип            | Описание                                    |
| :-------- | :------------- | :------------------------------------------ |
| `pchMode` | `const char *` | Строковое имя режима из файла конфигурации. |

Устанавливает режим переопределения конфигурации, позволяя принудительно переключать слои привязок.

**Возвращает:** `void`

## GetConnectedControllers
```cpp
int GetConnectedControllers(ControllerHandle_t *handlesOut)
```

| Название     | Тип                    | Описание                                                                                                     |
| :----------- | :--------------------- | :----------------------------------------------------------------------------------------------------------- |
| `handlesOut` | `ControllerHandle_t *` | Это должно указывать на массив объектов `ControllerHandle_t` размером `STEAM_CONTROLLER_MAX_COUNT` _(= 16)_. |

Выполняет перечисление подключенных в данный момент контроллеров, заполняя поле `handlesOut` дескрипторами контроллеров.

**Возвращает:** `int`\
Количество дескрипторов, записанных в `handlesOut`.

## ShowBindingPanel
```cpp
bool ShowBindingPanel(ControllerHandle_t controllerHandle)
```

| Название           | Тип                    | Описание                                                                          |
| :----------------- | :--------------------- | :-------------------------------------------------------------------------------- |
| `controllerHandle` | `ControllerHandle_t *` | Дескриптор контроллера, для которого необходимо открыть экран настройки привязки. |

Вызывает оверлей `Steam` и открывает экран настроек клавиш.

**Возвращает:** `bool`\
`true`, если выполнено успешно; false, если оверлей отключён/недоступен или пользователь не находится в режиме `Big Picture`.

## GetActionSetHandle
```cpp
ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName)
```

| Название           | Тип            | Описание                                                                    |
| :----------------- | :------------- | :-------------------------------------------------------------------------- |
| `pszActionSetName` | `const char *` | Строковый идентификатор набора действий, определенного в `.vdf` файле игры. |

Получает дескриптор набора действий.

**Возвращает:** `ControllerActionSetHandle_t`\
Дескриптор указанного набора действий.

## ActivateActionSet
```cpp
void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
```

| Название           | Тип                           | Описание                                                                     |
| :----------------- | :---------------------------- | :--------------------------------------------------------------------------- |
| `controllerHandle` | `ControllerHandle_t`          | Дескриптор контроллера, для которого необходимо активировать набор действий. |
| `actionSetHandle`  | `ControllerActionSetHandle_t` | Дескриптор набора действий, который вы хотите активировать.                  |

Перенастраивает контроллер на использование указанного набора действий.

**Возвращает:** `void`

## GetCurrentActionSet
```cpp
ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle)
```

| Название           | Тип                  | Описание                                                         |
| :----------------- | :------------------- | :--------------------------------------------------------------- |
| `controllerHandle` | `ControllerHandle_t` | Дескриптор контроллера, по которому необходимо выполнить запрос. |

Получает набор действий, активных в данный момент для указанного контроллера.

**Возвращает:** `ControllerActionSetHandle_t`\
Дескриптор активированного набора действий для указанного контроллера.

## GetDigitalActionHandle
```cpp
ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName)
```

| Название           | Тип            | Описание                                                                       |
| :----------------- | :------------- | :----------------------------------------------------------------------------- |
| `pszActionSetName` | `const char *` | Строковый идентификатор цифрового действия, определенного в `.vdf` файле игры. |

Получает дескриптор указанного цифрового действия.

**Возвращает:** `ControllerDigitalActionHandle_t`\
Дескриптор указанного цифрового действия.

## GetDigitalActionData
```cpp
ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
```

| Название              | Тип                               | Описание                                                               |
| :-------------------- | :-------------------------------- | :--------------------------------------------------------------------- |
| `controllerHandle`    | `ControllerHandle_t`              | Дескриптор контроллера, по которому необходимо выполнить запрос.       |
| `digitalActionHandle` | `ControllerDigitalActionHandle_t` | Дескриптор цифрового действия, по которому требуется выполнить запрос. |

Возвращает текущее состояние указанного цифрового игрового действия.

**Возвращает:** `ControllerDigitalActionData_t`\
Текущее состояние указанного цифрового действия.

## GetDigitalActionOrigins
```cpp
int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
```

| Название              | Тип                               | Описание                                                                                       |
| :-------------------- | :-------------------------------- | :--------------------------------------------------------------------------------------------- |
| `controllerHandle`    | `ControllerHandle_t`              | Дескриптор контроллера, по которому необходимо выполнить запрос.                               |
| `actionSetHandle`     | `ControllerActionSetHandle_t`     | Дескриптор набора действий, по которому вы хотите выполнить запрос.                            |
| `digitalActionHandle` | `ControllerDigitalActionHandle_t` | Дескриптор цифрового действия, по которому требуется выполнить запрос.                         |
| `originsOut`          | `EControllerActionOrigin *`       | Массив дескрипторов `EControllerActionOrigin` размером `STEAM_CONTROLLER_MAX_ORIGINS` _(= 8)_. |

Получает исходные данные для цифрового действия в наборе действий, заполнив переменную `originsOut` дескрипторами `EControllerActionOrigin`. 

**Возвращает:** `int`\
Число источников, указанных в переменной `originsOut`.

## GetAnalogActionHandle
```cpp
ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName)
```

| Название        | Тип            | Описание                                                                         |
| :-------------- | :------------- | :------------------------------------------------------------------------------- |
| `pszActionName` | `const char *` | Строковый идентификатор аналогового действия, определённого в файле `.vdf` игры. |

Получает дескриптор указанного аналогового действия.

**Возвращает:** `ControllerAnalogActionHandle_t`\
Дескриптор указанного аналогового действия.

## GetAnalogActionData
```cpp
ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
```

| Название             | Тип                              | Описание                                                                 |
| :------------------- | :------------------------------- | :----------------------------------------------------------------------- |
| `controllerHandle`   | `ControllerHandle_t`             | Дескриптор контроллера, по которому необходимо выполнить запрос.         |
| `analogActionHandle` | `ControllerAnalogActionHandle_t` | Дескриптор аналогового действия, по которому требуется выполнить запрос. |

Возвращает текущее состояние указанного аналогового игрового действия.

**Возвращает:** `ControllerAnalogActionData_t`\
Текущее состояние указанного аналогового действия.

## GetAnalogActionOrigins
```cpp
int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
```

| Название             | Тип                              | Описание                                                                                       |
| :------------------- | :------------------------------- | :--------------------------------------------------------------------------------------------- |
| `controllerHandle`   | `ControllerHandle_t`             | Дескриптор контроллера, по которому необходимо выполнить запрос.                               |
| `actionSetHandle`    | `ControllerActionSetHandle_t`    | Дескриптор набора действий, по которому вы хотите выполнить запрос.                            |
| `analogActionHandle` | `ControllerAnalogActionHandle_t` | Дескриптор аналогового действия, по которому требуется выполнить запрос.                       |
| `originsOut`         | `EControllerActionOrigin *`      | Массив дескрипторов `EControllerActionOrigin` размером `STEAM_CONTROLLER_MAX_ORIGINS` _(= 8)_. |

Получает исходные точки для аналогового действия в наборе действий, заполнив переменную `originsOut` дескрипторами `EControllerActionOrigin`.

**Возвращает:** `int`\
Число источников, указанных в переменной `originsOut`.

## StopAnalogActionMomentum
```cpp
void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
```

| Название           | Тип                               | Описание                                                 |
| :----------------- | :-------------------------------- | :------------------------------------------------------- |
| `controllerHandle` | `ControllerHandle_t`              | Дескриптор контроллера, на который нужно воздействовать. |
| `eAction`          | `ControllerAnalogActionHandle_t ` | Аналоговое действие, направленное на остановку импульса. |

Останавливает движение аналогового действия.

**Возвращает:** `void`

<!-- 20 -->

<!-- #endregion -->