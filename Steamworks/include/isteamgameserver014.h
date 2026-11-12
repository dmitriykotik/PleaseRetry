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

class ISteamGameServer014 {
public:
    virtual bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString) = 0;

	virtual void SetProduct(const char *pszProduct) = 0;

	virtual void SetGameDescription(const char *pszGameDescription) = 0;

	virtual void SetModDir(const char *pszModDir) = 0;

	virtual void SetDedicatedServer(bool bDedicated) = 0;

	virtual void LogOn(const char *pszToken) = 0;

	virtual void LogOnAnonymous() = 0;

	virtual void LogOff() = 0;
	
	virtual bool BLoggedOn() = 0;
	
	virtual bool BSecure() = 0; 

	virtual CSteamID GetSteamID() = 0;

	virtual bool WasRestartRequested() = 0;

	virtual void SetMaxPlayerCount(int cPlayersMax) = 0;

	virtual void SetBotPlayerCount(int cBotplayers) = 0;

	virtual void SetServerName(const char *pszServerName) = 0;

	virtual void SetMapName(const char *pszMapName) = 0;

	virtual void SetPasswordProtected(bool bPasswordProtected) = 0;

	virtual void SetSpectatorPort(uint16 unSpectatorPort) = 0;

	virtual void SetSpectatorServerName(const char *pszSpectatorServerName) = 0;

	virtual void ClearAllKeyValues() = 0;
	
	virtual void SetKeyValue(const char *pKey, const char *pValue) = 0;

	virtual void SetGameTags(const char *pchGameTags) = 0;

	virtual void SetGameData(const char *pchGameData) = 0;

	virtual void SetRegion(const char *pszRegion) = 0;

	virtual void SetAdvertiseServerActive(bool bActive) = 0;

	virtual HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket) = 0;

	virtual EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID) = 0;

	virtual void EndAuthSession(CSteamID steamID) = 0;

	virtual void CancelAuthTicket(HAuthTicket hAuthTicket) = 0;

	virtual EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID) = 0;

	virtual bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) = 0;

	virtual void GetGameplayStats() = 0;

	virtual SteamAPICall_t GetServerReputation() = 0;

	virtual SteamIPAddress_t GetPublicIP() = 0;

	virtual bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort) = 0;

	virtual int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort) = 0;

	virtual SteamAPICall_t AssociateWithClan(CSteamID steamIDClan) = 0;
	
	virtual SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer) = 0;

	virtual bool SendUserConnectAndAuthenticate_DEPRECATED(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser) = 0;

	virtual CSteamID CreateUnauthenticatedUserConnection() = 0;

	virtual void SendUserDisconnect_DEPRECATED(CSteamID steamIDUser) = 0;

	virtual bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore) = 0;

	virtual void SetMasterServerHeartbeatInterval_DEPRECATED(int iHeartbeatInterval) = 0;

	virtual void ForceMasterServerHeartbeat_DEPRECATED() = 0;
};

#define STEAMGAMESERVER_INTERFACE_VERSION_014 "SteamGameServer014"