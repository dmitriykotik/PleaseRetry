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

typedef uint32 HHTMLBrowser;
const uint32 INVALID_HTMLBROWSER = 0;

enum EHTMLMouseButton {
	eHTMLMouseButton_Left = 0,
	eHTMLMouseButton_Right = 1,
	eHTMLMouseButton_Middle = 2,
};

enum EHTMLMouseCursor {
	k_EHTMLMouseCursor_User = 0,
	k_EHTMLMouseCursor_None,
	k_EHTMLMouseCursor_Arrow,
	k_EHTMLMouseCursor_IBeam,
	k_EHTMLMouseCursor_Hourglass,
	k_EHTMLMouseCursor_WaitArrow,
	k_EHTMLMouseCursor_Crosshair,
	k_EHTMLMouseCursor_Up,
	k_EHTMLMouseCursor_SizeNW,
	k_EHTMLMouseCursor_SizeSE,
	k_EHTMLMouseCursor_SizeNE,
	k_EHTMLMouseCursor_SizeSW,
	k_EHTMLMouseCursor_SizeW,
	k_EHTMLMouseCursor_SizeE,
	k_EHTMLMouseCursor_SizeN,
	k_EHTMLMouseCursor_SizeS,
	k_EHTMLMouseCursor_SizeWE,
	k_EHTMLMouseCursor_SizeNS,
	k_EHTMLMouseCursor_SizeAll,
	k_EHTMLMouseCursor_No,
	k_EHTMLMouseCursor_Hand,
	k_EHTMLMouseCursor_Blank,
	k_EHTMLMouseCursor_MiddlePan,
	k_EHTMLMouseCursor_NorthPan,
	k_EHTMLMouseCursor_NorthEastPan,
	k_EHTMLMouseCursor_EastPan,
	k_EHTMLMouseCursor_SouthEastPan,
	k_EHTMLMouseCursor_SouthPan,
	k_EHTMLMouseCursor_SouthWestPan,
	k_EHTMLMouseCursor_WestPan,
	k_EHTMLMouseCursor_NorthWestPan,
	k_EHTMLMouseCursor_Alias,
	k_EHTMLMouseCursor_Cell,
	k_EHTMLMouseCursor_ColResize,
	k_EHTMLMouseCursor_CopyCur,
	k_EHTMLMouseCursor_VerticalText,
	k_EHTMLMouseCursor_RowResize,
	k_EHTMLMouseCursor_ZoomIn,
	k_EHTMLMouseCursor_ZoomOut,
	k_EHTMLMouseCursor_Help,
	k_EHTMLMouseCursor_Custom,
	k_EHTMLMouseCursor_SizeNWSE,
	k_EHTMLMouseCursor_SizeNESW,
	k_EHTMLMouseCursor_last,
};

enum EHTMLKeyModifiers {
	k_eHTMLKeyModifier_None = 0,
	k_eHTMLKeyModifier_AltDown = 1 << 0,
	k_eHTMLKeyModifier_CtrlDown = 1 << 1,
	k_eHTMLKeyModifier_ShiftDown = 1 << 2,
};

class ISteamHTMLSurface;