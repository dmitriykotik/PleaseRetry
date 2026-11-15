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

#include "steamtypes.h"
#include "steamclientpublic.h"
#include "steamapiinternal.h"

enum ESteamAPICallFailure {
	k_ESteamAPICallFailureNone = -1,
	k_ESteamAPICallFailureSteamGone = 0,
	k_ESteamAPICallFailureNetworkFailure = 1,
	k_ESteamAPICallFailureInvalidHandle = 2,
	k_ESteamAPICallFailureMismatchedCallback = 3,
};

enum EGamepadTextInputMode {
	k_EGamepadTextInputModeNormal = 0,
	k_EGamepadTextInputModePassword = 1
};

enum EGamepadTextInputLineMode {
	k_EGamepadTextInputLineModeSingleLine = 0,
	k_EGamepadTextInputLineModeMultipleLines = 1
};

enum EFloatingGamepadTextInputMode {
	k_EFloatingGamepadTextInputModeModeSingleLine = 0,
	k_EFloatingGamepadTextInputModeModeMultipleLines = 1,
	k_EFloatingGamepadTextInputModeModeEmail = 2,
	k_EFloatingGamepadTextInputModeModeNumeric = 3,
};

enum ETextFilteringContext {
	k_ETextFilteringContextUnknown = 0,
	k_ETextFilteringContextGameContent = 1,
	k_ETextFilteringContextChat = 2,
	k_ETextFilteringContextName = 3,
};

enum ESteamHardwareType {
	k_ESteamHardwareTypeNone = 0,
	k_ESteamHardwareTypeSteamDeck = 1,
	k_ESteamHardwareTypeSteamMachine = 2,
	k_ESteamHardwareTypeSteamFrame = 3,
};

enum ESteamHardwareDefaultConfig {
	k_ESteamHardwareDefaultConfigNone = 0,

	k_ESteamHardwareDefaultConfigLow = 1,
	k_ESteamHardwareDefaultConfigMedium = 2,
	k_ESteamHardwareDefaultConfigHigh = 3,
	k_ESteamHardwareDefaultConfigMax = 4,

	k_ESteamHardwareDefaultConfigSteamDeck = 5,
	k_ESteamHardwareDefaultConfigSteamMachine = 6,
	k_ESteamHardwareDefaultConfigSteamFrame = 7,
};

#if defined(PR_CALLBACK_PACK_SMALL)
	#pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
	#pragma pack(push, 8)
#else
	#error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

struct IPCountry_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 1 };
};

struct LowBatteryPower_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 2 };
	uint8 m_nMinutesBatteryLeft;
};

struct SteamAPICallCompleted_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 3 };
	SteamAPICall_t m_hAsyncCall;
	int m_iCallback;
	uint32 m_cubParam;
};

struct SteamShutdown_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 4 };
};

enum ECheckFileSignature {
	k_ECheckFileSignatureInvalidSignature = 0,
	k_ECheckFileSignatureValidSignature = 1,
	k_ECheckFileSignatureFileNotFound = 2,
	k_ECheckFileSignatureNoSignaturesFoundForThisApp = 3,
	k_ECheckFileSignatureNoSignaturesFoundForThisFile = 4,
};

struct CheckFileSignature_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 5 };
	ECheckFileSignature m_eCheckFileSignature;
};

struct GamepadTextInputDismissed_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 14 };
	bool m_bSubmitted;
	uint32 m_unSubmittedText;
	AppId_t m_unAppID;
};

struct AppResumingFromSuspend_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 36 };
};

struct FloatingGamepadTextInputDismissed_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 38 };
};

struct FilterTextDictionaryChanged_t {
	enum { k_iCallback = k_iSteamUtilsCallbacks + 39 };
	int m_eLanguage;
};

#pragma pack(pop)