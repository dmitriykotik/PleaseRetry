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

#if defined(PR_CALLBACK_PACK_SMALL)
    #pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

struct HTML_BrowserReady_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 1 };
    HHTMLBrowser unBrowserHandle;
};

struct HTML_NeedsPaint_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 2 };
    HHTMLBrowser unBrowserHandle;
    const char * pBGRA;
    uint32 unWide;
    uint32 unTall;
    uint32 unUpdateX;
    uint32 unUpdateY;
    uint32 unUpdateWide;
    uint32 unUpdateTall;
    uint32 unScrollX;
    uint32 unScrollY;
    float flPageScale;
    uint32 unPageSerial;
};

struct HTML_StartRequest_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 3 };
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchTarget;
    const char * pchPostData;
    bool bIsRedirect;
};

struct HTML_CloseBrowser_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 4 };
    HHTMLBrowser unBrowserHandle;
};

struct HTML_URLChanged_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 5 };
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPostData;
    bool bIsRedirect;
    const char * pchPageTitle;
    bool bNewNavigation;
};

struct HTML_FinishedRequest_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 6 };
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPageTitle;
};

struct HTML_OpenLinkInNewTab_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 7 };
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
};

struct HTML_ChangedTitle_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 8 };
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
};

struct HTML_SearchResults_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 9 };
    HHTMLBrowser unBrowserHandle;
    uint32 unResults;
    uint32 unCurrentMatch;
};

struct HTML_CanGoBackAndForward_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 10 };
    HHTMLBrowser unBrowserHandle;
    bool bCanGoBack;
    bool bCanGoForward;
};

struct HTML_HorizontalScroll_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 11 };
    HHTMLBrowser unBrowserHandle;
    uint32 unScrollMax;
    uint32 unScrollCurrent;
    float flPageScale;
    bool bVisible;
    uint32 unPageSize;
};

struct HTML_VerticalScroll_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 12 };
    HHTMLBrowser unBrowserHandle;
    uint32 unScrollMax;
    uint32 unScrollCurrent;
    float flPageScale;
    bool bVisible;
    uint32 unPageSize;
};

struct HTML_LinkAtPosition_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 13 };
    HHTMLBrowser unBrowserHandle;
    uint32 x;
    uint32 y;
    const char * pchURL;
    bool bInput;
    bool bLiveLink;
};

struct HTML_JSAlert_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 14 };
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
};

struct HTML_JSConfirm_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 15 };
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
};

struct HTML_FileOpenDialog_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 16 };
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle; 
    const char * pchInitialFile;
};

struct HTML_NewWindow_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 21 };
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
    HHTMLBrowser unNewWindow_BrowserHandle_IGNORE;
};

struct HTML_SetCursor_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 22 };
    HHTMLBrowser unBrowserHandle;
    uint32 eMouseCursor;
};

struct HTML_StatusText_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 23 };
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
};

struct HTML_ShowToolTip_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 24 };
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
};

struct HTML_UpdateToolTip_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 25 };
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
};

struct HTML_HideToolTip_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 26 };
    HHTMLBrowser unBrowserHandle;
};

struct HTML_BrowserRestarted_t { 
    enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 27 };
    HHTMLBrowser unBrowserHandle;
    HHTMLBrowser unOldBrowserHandle;
};

#pragma pack(pop)