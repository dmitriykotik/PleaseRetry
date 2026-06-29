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

#include "isteamcontroller.h"

class ISteamController004 : public ISteamController {
public:
    virtual bool Init() = 0;
	virtual bool Shutdown() = 0;

	virtual void RunFrame() = 0;

	virtual int GetConnectedControllers(ControllerHandle_t *handlesOut) = 0;
	
	virtual bool ShowBindingPanel(ControllerHandle_t controllerHandle) = 0;
	
	virtual ControllerActionSetHandle_t GetActionSetHandle(const char *pszActionSetName) = 0;
	
	virtual void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle) = 0;
	virtual ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle) = 0;
	
	virtual ControllerDigitalActionHandle_t GetDigitalActionHandle(const char *pszActionName) = 0;
	
	virtual ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle) = 0;
	
	virtual int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut) = 0;
	
	virtual ControllerAnalogActionHandle_t GetAnalogActionHandle(const char *pszActionName) = 0;
	
	virtual ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle) = 0;

	virtual int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut) = 0;
		
	virtual void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction) = 0;
	
	virtual void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec) = 0;

	virtual void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags) = 0;
	
	virtual int GetGamepadIndexForController(ControllerHandle_t ulControllerHandle) = 0;
	
	virtual ControllerHandle_t GetControllerForGamepadIndex(int nIndex) = 0;
	
	virtual ControllerMotionData_t GetMotionData(ControllerHandle_t controllerHandle) = 0;
	
	virtual bool ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition) = 0;
	virtual bool ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition) = 0;
};

#define STEAMCONTROLLER_INTERFACE_VERSION_004 "SteamController004"