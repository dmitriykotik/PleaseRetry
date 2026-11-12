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

#include "isteamgameserver.h"

class ISteamGameServer003 {
public:
    virtual void LogOn() = 0;

	virtual void LogOff() = 0;

	virtual bool BLoggedOn() = 0;

	virtual bool BSecure() = 0;
	
	virtual CSteamID GetSteamID() = 0;

	virtual bool GetSteam2GetEncryptionKeyToSendToNewClient(void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey) = 0;

	virtual bool SendUserConnect(uint32, uint32, uint16, const void *, uint32) = 0;
	
	virtual bool RemoveUserConnect(uint32 unUserID) = 0;

	virtual bool SendUserDisconnect(CSteamID steamID, uint32 unUserID) = 0;

	virtual void SetSpawnCount(uint32 ucSpawn) = 0;

	virtual bool SetServerType(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode) = 0;

	virtual bool UpdateStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName) = 0;

	virtual bool CreateUnauthenticatedUser(CSteamID *pSteamID) = 0;

	virtual bool SetUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore) = 0;

	virtual void UpdateSpectatorPort(uint16 unSpectatorPort) = 0;

	virtual void SetGameType(const char *pchGameType) = 0; 

	virtual bool GetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName) = 0;
};

#define STEAMGAMESERVER_INTERFACE_VERSION_003 "SteamGameServer003"