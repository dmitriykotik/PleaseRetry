//========= Copyright (C) 2026, dmitriykotik. Released under the MIT License. ==//
// This file is part of PleaseRetryEmu, an open-source project. This software
// is provided "AS IS", without warranty of any kind, express or implied,
// including but not limited to the warranties of merchantability, fitness
// for a particular purpose and noninfringement.
//
// LEGAL NOTICE: This software is an independent compatibility layer and is NOT
// affiliated with, endorsed, or authorized by Valve Corporation. "Steam" and
// "Steamworks" are registered trademarks of Valve Corporation.
//
// Developed strictly for EDUCATIONAL, RESEARCH, and software preservation
// purposes. The author holds NO LIABILITY for any misuse, legal consequences,
// or third-party restrictions. All actions are performed at your own risk.
//=============================================================================//

#pragma once

#include "isteaminput.h"

class ISteamInput005 {
public:
	virtual bool Init(bool bExplicitlyCallRunFrame) = 0;

	virtual bool Shutdown() = 0;

	virtual bool SetInputActionManifestFilePath(const char *pchInputActionManifestAbsolutePath) = 0;

	virtual void RunFrame(bool bReservedValue = true) = 0;

	virtual bool BWaitForData(bool bWaitForever, uint32 unTimeout) = 0;

	virtual bool BNewDataAvailable() = 0;

	virtual int GetConnectedControllers(InputHandle_t *handlesOut) = 0;

	virtual void EnableDeviceCallbacks() = 0;

	virtual void EnableActionEventCallbacks(SteamInputActionEventCallbackPointer pCallback) = 0;

	virtual InputActionSetHandle_t GetActionSetHandle(const char *pszActionSetName) = 0;

	virtual void ActivateActionSet(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle) = 0;

	virtual InputActionSetHandle_t GetCurrentActionSet(InputHandle_t inputHandle) = 0;

	virtual void ActivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle) = 0;

	virtual void DeactivateActionSetLayer(InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle) = 0;

	virtual void DeactivateAllActionSetLayers(InputHandle_t inputHandle) = 0;

	virtual int GetActiveActionSetLayers(InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut) = 0;

	virtual InputDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName) = 0;

	virtual InputDigitalActionData_t GetDigitalActionData(InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle) = 0;

	virtual int GetDigitalActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut) = 0;

	virtual const char *GetStringForDigitalActionName(InputDigitalActionHandle_t eActionHandle) = 0;

	virtual InputAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName) = 0;

	virtual InputAnalogActionData_t GetAnalogActionData(InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle) = 0;

	virtual int GetAnalogActionOrigins(InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut) = 0;

	virtual const char *GetGlyphPNGForActionOrigin(EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags) = 0;

	virtual const char *GetGlyphSVGForActionOrigin(EInputActionOrigin eOrigin, uint32 unFlags) = 0;

	virtual const char *GetGlyphForActionOrigin_Legacy(EInputActionOrigin eOrigin) = 0;

	virtual const char *GetStringForActionOrigin(EInputActionOrigin eOrigin) = 0;

	virtual const char *GetStringForAnalogActionName(InputAnalogActionHandle_t eActionHandle) = 0;

	virtual void StopAnalogActionMomentum(InputHandle_t inputHandle, InputAnalogActionHandle_t eAction) = 0;

	virtual InputMotionData_t GetMotionData(InputHandle_t inputHandle) = 0;

	virtual void TriggerVibration(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed) = 0;

	virtual void TriggerVibrationExtended(InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed) = 0;

	virtual void TriggerSimpleHapticEvent(InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB) = 0;

	virtual void SetLEDColor(InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags) = 0;

	virtual void Legacy_TriggerHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec) = 0;

	virtual void Legacy_TriggerRepeatedHapticPulse(InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags) = 0;

	virtual bool ShowBindingPanel(InputHandle_t inputHandle) = 0;

	virtual ESteamInputType GetInputTypeForHandle(InputHandle_t inputHandle) = 0;

	virtual InputHandle_t GetControllerForGamepadIndex(int nIndex) = 0;

	virtual int GetGamepadIndexForController(InputHandle_t ulinputHandle) = 0;

	virtual const char *GetStringForXboxOrigin(EXboxOrigin eOrigin) = 0;

	virtual const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin) = 0;

	virtual EInputActionOrigin GetActionOriginFromXboxOrigin(InputHandle_t inputHandle, EXboxOrigin eOrigin) = 0;

	virtual EInputActionOrigin TranslateActionOrigin(ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin) = 0;

	virtual bool GetDeviceBindingRevision(InputHandle_t inputHandle, int *pMajor, int *pMinor) = 0;

	virtual uint32 GetRemotePlaySessionID(InputHandle_t inputHandle) = 0;

	virtual uint16 GetSessionInputConfigurationSettings() = 0;
};

#define STEAMINPUT_INTERFACE_VERSION_005 "SteamInput005"