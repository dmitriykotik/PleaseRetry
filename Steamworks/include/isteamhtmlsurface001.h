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

#include "isteamhtmlsurface.h"

class ISteamHTMLSurface001 {
public:
    virtual ~ISteamHTMLSurface001() {}

	virtual bool Init() = 0;
	
	virtual bool Shutdown() = 0;

	virtual SteamAPICall_t CreateBrowser(const char *pchUserAgent, const char *pchUserCSS) = 0;

	virtual void RemoveBrowser(HHTMLBrowser unBrowserHandle) = 0;

	virtual void LoadURL(HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData) = 0;

	virtual void SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight) = 0;

	virtual void StopLoad(HHTMLBrowser unBrowserHandle) = 0;
	
	virtual void Reload(HHTMLBrowser unBrowserHandle) = 0;

	virtual void GoBack(HHTMLBrowser unBrowserHandle) = 0;

	virtual void GoForward(HHTMLBrowser unBrowserHandle) = 0;

	virtual void AddHeader(HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue) = 0;

	virtual void ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char *pchScript) = 0;

	virtual void MouseUp(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton) = 0;

	virtual void MouseDown(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton) = 0;
	
	virtual void MouseDoubleClick(HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton) = 0;

	virtual void MouseMove(HHTMLBrowser unBrowserHandle, int x, int y) = 0;

	virtual void MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta) = 0;

	virtual void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers) = 0;

	virtual void KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers) = 0;

	virtual void KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers) = 0;

	virtual void SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) = 0;

	virtual void SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) = 0;

	virtual void SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus) = 0;

	virtual void ViewSource(HHTMLBrowser unBrowserHandle) = 0;

	virtual void CopyToClipboard(HHTMLBrowser unBrowserHandle) = 0;

	virtual void PasteFromClipboard(HHTMLBrowser unBrowserHandle) = 0;

	virtual void Find(HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse) = 0;

	virtual void StopFind(HHTMLBrowser unBrowserHandle) = 0;

	virtual void GetLinkAtPosition( HHTMLBrowser unBrowserHandle, int x, int y) = 0;

	virtual void AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed) = 0;

	virtual void JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult) = 0;

	virtual void FileLoadDialogResponse(HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles) = 0;
};

#define STEAMHTMLSURFACE_INTERFACE_VERSION_001 "STEAMHTMLSURFACE_INTERFACE_VERSION_001"