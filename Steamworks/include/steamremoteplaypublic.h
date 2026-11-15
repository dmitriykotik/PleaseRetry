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

enum ESteamDeviceFormFactor {
	k_ESteamDeviceFormFactorUnknown		= 0,
	k_ESteamDeviceFormFactorPhone		= 1,
	k_ESteamDeviceFormFactorTablet		= 2,
	k_ESteamDeviceFormFactorComputer	= 3,
	k_ESteamDeviceFormFactorTV			= 4,
	k_ESteamDeviceFormFactorVRHeadset	= 5,
};

typedef uint32 RemotePlaySessionID_t;
typedef uint32 RemotePlayCursorID_t;

enum ERemotePlayInputType {
	k_ERemotePlayInputUnknown,
	k_ERemotePlayInputMouseMotion,
	k_ERemotePlayInputMouseButtonDown,
	k_ERemotePlayInputMouseButtonUp,
	k_ERemotePlayInputMouseWheel,
	k_ERemotePlayInputKeyDown,
	k_ERemotePlayInputKeyUp
};

enum ERemotePlayMouseButton {
	k_ERemotePlayMouseButtonLeft = 0x0001,
	k_ERemotePlayMouseButtonRight = 0x0002,
	k_ERemotePlayMouseButtonMiddle = 0x0010,
	k_ERemotePlayMouseButtonX1 = 0x0020,
	k_ERemotePlayMouseButtonX2 = 0x0040,
};

enum ERemotePlayMouseWheelDirection {
	k_ERemotePlayMouseWheelUp = 1,
	k_ERemotePlayMouseWheelDown = 2,
	k_ERemotePlayMouseWheelLeft = 3,
	k_ERemotePlayMouseWheelRight = 4,
};

enum ERemotePlayScancode {
	k_ERemotePlayScancodeUnknown = 0,

	k_ERemotePlayScancodeA = 4,
	k_ERemotePlayScancodeB = 5,
	k_ERemotePlayScancodeC = 6,
	k_ERemotePlayScancodeD = 7,
	k_ERemotePlayScancodeE = 8,
	k_ERemotePlayScancodeF = 9,
	k_ERemotePlayScancodeG = 10,
	k_ERemotePlayScancodeH = 11,
	k_ERemotePlayScancodeI = 12,
	k_ERemotePlayScancodeJ = 13,
	k_ERemotePlayScancodeK = 14,
	k_ERemotePlayScancodeL = 15,
	k_ERemotePlayScancodeM = 16,
	k_ERemotePlayScancodeN = 17,
	k_ERemotePlayScancodeO = 18,
	k_ERemotePlayScancodeP = 19,
	k_ERemotePlayScancodeQ = 20,
	k_ERemotePlayScancodeR = 21,
	k_ERemotePlayScancodeS = 22,
	k_ERemotePlayScancodeT = 23,
	k_ERemotePlayScancodeU = 24,
	k_ERemotePlayScancodeV = 25,
	k_ERemotePlayScancodeW = 26,
	k_ERemotePlayScancodeX = 27,
	k_ERemotePlayScancodeY = 28,
	k_ERemotePlayScancodeZ = 29,

	k_ERemotePlayScancode1 = 30,
	k_ERemotePlayScancode2 = 31,
	k_ERemotePlayScancode3 = 32,
	k_ERemotePlayScancode4 = 33,
	k_ERemotePlayScancode5 = 34,
	k_ERemotePlayScancode6 = 35,
	k_ERemotePlayScancode7 = 36,
	k_ERemotePlayScancode8 = 37,
	k_ERemotePlayScancode9 = 38,
	k_ERemotePlayScancode0 = 39,

	k_ERemotePlayScancodeReturn = 40,
	k_ERemotePlayScancodeEscape = 41,
	k_ERemotePlayScancodeBackspace = 42,
	k_ERemotePlayScancodeTab = 43,
	k_ERemotePlayScancodeSpace = 44,
	k_ERemotePlayScancodeMinus = 45,
	k_ERemotePlayScancodeEquals = 46,
	k_ERemotePlayScancodeLeftBracket = 47,
	k_ERemotePlayScancodeRightBracket = 48,
	k_ERemotePlayScancodeBackslash = 49,
	k_ERemotePlayScancodeSemicolon = 51,
	k_ERemotePlayScancodeApostrophe = 52,
	k_ERemotePlayScancodeGrave = 53,
	k_ERemotePlayScancodeComma = 54,
	k_ERemotePlayScancodePeriod = 55,
	k_ERemotePlayScancodeSlash = 56,
	k_ERemotePlayScancodeCapsLock = 57,

	k_ERemotePlayScancodeF1 = 58,
	k_ERemotePlayScancodeF2 = 59,
	k_ERemotePlayScancodeF3 = 60,
	k_ERemotePlayScancodeF4 = 61,
	k_ERemotePlayScancodeF5 = 62,
	k_ERemotePlayScancodeF6 = 63,
	k_ERemotePlayScancodeF7 = 64,
	k_ERemotePlayScancodeF8 = 65,
	k_ERemotePlayScancodeF9 = 66,
	k_ERemotePlayScancodeF10 = 67,
	k_ERemotePlayScancodeF11 = 68,
	k_ERemotePlayScancodeF12 = 69,

	k_ERemotePlayScancodeInsert = 73,
	k_ERemotePlayScancodeHome = 74,
	k_ERemotePlayScancodePageUp = 75,
	k_ERemotePlayScancodeDelete = 76,
	k_ERemotePlayScancodeEnd = 77,
	k_ERemotePlayScancodePageDown = 78,
	k_ERemotePlayScancodeRight = 79,
	k_ERemotePlayScancodeLeft = 80,
	k_ERemotePlayScancodeDown = 81,
	k_ERemotePlayScancodeUp = 82,

	k_ERemotePlayScancodeKeypadDivide = 84,
	k_ERemotePlayScancodeKeypadMultiply = 85,
	k_ERemotePlayScancodeKeypadMinus = 86,
	k_ERemotePlayScancodeKeypadPlus = 87,
	k_ERemotePlayScancodeKeypadEnter = 88,
	k_ERemotePlayScancodeKeypad1 = 89,
	k_ERemotePlayScancodeKeypad2 = 90,
	k_ERemotePlayScancodeKeypad3 = 91,
	k_ERemotePlayScancodeKeypad4 = 92,
	k_ERemotePlayScancodeKeypad5 = 93,
	k_ERemotePlayScancodeKeypad6 = 94,
	k_ERemotePlayScancodeKeypad7 = 95,
	k_ERemotePlayScancodeKeypad8 = 96,
	k_ERemotePlayScancodeKeypad9 = 97,
	k_ERemotePlayScancodeKeypad0 = 98,
	k_ERemotePlayScancodeKeypadPeriod = 99,

	k_ERemotePlayScancodeLeftControl = 224,
	k_ERemotePlayScancodeLeftShift = 225,
	k_ERemotePlayScancodeLeftAlt = 226,
	k_ERemotePlayScancodeLeftGUI = 227,
	k_ERemotePlayScancodeRightControl = 228,
	k_ERemotePlayScancodeRightShift = 229,
	k_ERemotePlayScancodeRightALT = 230,
	k_ERemotePlayScancodeRightGUI = 231,
};

enum ERemotePlayKeyModifier {
	k_ERemotePlayKeyModifierNone			= 0x0000,
	k_ERemotePlayKeyModifierLeftShift		= 0x0001,
	k_ERemotePlayKeyModifierRightShift		= 0x0002,
	k_ERemotePlayKeyModifierLeftControl		= 0x0040,
	k_ERemotePlayKeyModifierRightControl	= 0x0080,
	k_ERemotePlayKeyModifierLeftAlt			= 0x0100,
	k_ERemotePlayKeyModifierRightAlt		= 0x0200,
	k_ERemotePlayKeyModifierLeftGUI			= 0x0400,
	k_ERemotePlayKeyModifierRightGUI		= 0x0800,
	k_ERemotePlayKeyModifierNumLock			= 0x1000,
	k_ERemotePlayKeyModifierCapsLock		= 0x2000,
	k_ERemotePlayKeyModifierMask			= 0xFFFF,
};


#if defined(PR_CALLBACK_PACK_SMALL)
    #pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif

struct RemotePlayInputMouseMotion_t {
	bool m_bAbsolute;
	float m_flNormalizedX;
	float m_flNormalizedY;
	int m_nDeltaX;
	int m_nDeltaY;
};

struct RemotePlayInputMouseWheel_t {
	ERemotePlayMouseWheelDirection m_eDirection;
	float m_flAmount;
};

struct RemotePlayInputKey_t {
	int m_eScancode;
	uint32 m_unModifiers;
	uint32 m_unKeycode;
};

struct RemotePlayInput_t {
	RemotePlaySessionID_t m_unSessionID;
	ERemotePlayInputType m_eType;

	union {
		RemotePlayInputMouseMotion_t m_MouseMotion;
		ERemotePlayMouseButton m_eMouseButton;
		RemotePlayInputMouseWheel_t m_MouseWheel;
		RemotePlayInputKey_t m_Key;
		char padding[ 64 - ( sizeof( m_unSessionID ) + sizeof( m_eType ) ) ];
	};
};

#pragma pack(pop)