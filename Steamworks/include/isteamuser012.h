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

#include "isteamuser.h"

class ISteamUser012 {
public:
    virtual HSteamUser GetHSteamUser() = 0;

    virtual bool BLoggedOn() = 0;

    virtual CSteamID GetSteamID() = 0;

    virtual int InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure) = 0;

    virtual void TerminateGameConnection(uint32 unIPServer, uint16 usPortServer) = 0;

    virtual void TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo) = 0;

    virtual bool GetUserDataFolder(char *pchBuffer, int cubBuffer) = 0;

    virtual void StartVoiceRecording() = 0;

    virtual void StopVoiceRecording() = 0;

    virtual EVoiceResult GetCompressedVoice(void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten) = 0;

    virtual EVoiceResult DecompressVoice(void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten) = 0;

    virtual HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket) = 0;

    virtual EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID) = 0;

    virtual void EndAuthSession(CSteamID steamID) = 0;

    virtual void CancelAuthTicket(HAuthTicket hAuthTicket) = 0;

    virtual EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID) = 0;
};

#define STEAMUSER_INTERFACE_VERSION_012 "SteamUser012"