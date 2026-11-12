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

#include "isteamcontentserver.h"

class ISteamContentServer002 {
public:
    virtual bool LogOn(uint32 uContentServerID) = 0;

	virtual bool LogOff() = 0;

	virtual bool BLoggedOn() = 0;

	virtual void SendClientContentAuthRequest(CSteamID steamID, uint32 uContentID, uint64 ulSessionToken, bool bTokenPresent) = 0;

	virtual bool BCheckTicket(CSteamID steamID, uint32 uContentID, const void *pvTicketData, uint32 cubTicketLength) = 0;
};

#define STEAMCONTENTSERVER_INTERFACE_VERSION_002 "SteamContentServer002"