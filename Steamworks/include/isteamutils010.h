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

#include "isteamutils.h"

class ISteamUtils010 {
public:
    virtual uint32 GetSecondsSinceAppActive() = 0;

    virtual uint32 GetSecondsSinceComputerActive() = 0;

    virtual EUniverse GetConnectedUniverse() = 0;

    virtual uint32 GetServerRealTime() = 0;

    virtual const char *GetIPCountry() = 0;

    virtual bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight) = 0;

    virtual bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize) = 0;

    virtual bool GetCSERIPPort(uint32 *unIP, uint16 *usPort) = 0;

    virtual uint8 GetCurrentBatteryPower() = 0;

    virtual uint32 GetAppID() = 0;

    virtual void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition) = 0;

    virtual bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed) = 0;

    virtual ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) = 0;

    virtual bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed) = 0;

    virtual void RunFrame() = 0;

    virtual uint32 GetIPCCallCount() = 0;

    virtual void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) = 0;

    virtual bool IsOverlayEnabled() = 0;

    virtual bool BOverlayNeedsPresent() = 0;

    virtual SteamAPICall_t CheckFileSignature(const char *szFileName) = 0;

    virtual bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText) = 0;

    virtual uint32 GetEnteredGamepadTextLength() = 0;

    virtual bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText) = 0;

    virtual const char *GetSteamUILanguage() = 0;

    virtual bool IsSteamRunningInVR() = 0;

    virtual void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset) = 0;

    virtual bool IsSteamInBigPictureMode() = 0;

    virtual void StartVRDashboard() = 0;

    virtual bool IsVRHeadsetStreamingEnabled() = 0;

    virtual void SetVRHeadsetStreamingEnabled(bool bEnabled) = 0;

    virtual bool IsSteamChinaLauncher() = 0;

    virtual bool InitFilterText(uint32 unFilterOptions = 0) = 0;

    virtual int FilterText(ETextFilteringContext eContext, CSteamID sourceSteamID, const char *pchInputMessage, char *pchOutFilteredText, uint32 nByteSizeOutFilteredText) = 0;

    virtual ESteamIPv6ConnectivityState GetIPv6ConnectivityState(ESteamIPv6ConnectivityProtocol eProtocol) = 0;

    virtual bool IsSteamRunningOnSteamDeck() = 0;

    virtual bool ShowFloatingGamepadTextInput(EFloatingGamepadTextInputMode eKeyboardMode, int nTextFieldXPosition, int nTextFieldYPosition, int nTextFieldWidth, int nTextFieldHeight) = 0;

    virtual void SetGameLauncherMode(bool bLauncherMode) = 0;

    virtual bool DismissFloatingGamepadTextInput() = 0;

    virtual bool DismissGamepadTextInput() = 0;
};

#define STEAMUTILS_INTERFACE_VERSION_010 "SteamUtils010"