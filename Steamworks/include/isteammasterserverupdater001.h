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

#include "isteammasterserverupdater.h"

class ISteamMasterServerUpdater001 {
public:
	virtual void SetActive(bool bActive) = 0;

	virtual void SetHeartbeatInterval(int iHeartbeatInterval) = 0;

	virtual bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort) = 0;

	virtual int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort) = 0;

	virtual void SetBasicServerData(unsigned short nProtocolVersion, bool bDedicatedServer, const char *pRegionName, const char *pProductName, unsigned short nMaxReportedClients, bool bPasswordProtected, const char *pGameDescription) = 0;

	virtual void ClearAllKeyValues() = 0;

	virtual void SetKeyValue(const char *pKey, const char *pValue) = 0;

	virtual void NotifyShutdown() = 0;

	virtual bool WasRestartRequested() = 0;

	virtual void ForceHeartbeat() = 0;

	virtual bool AddMasterServer(const char *pServerAddress) = 0;

	virtual bool RemoveMasterServer(const char *pServerAddress) = 0;

	virtual int GetNumMasterServers() = 0;

	virtual int GetMasterServerAddress(int iServer, char *pOut, int outBufferSize) = 0;
};

#define STEAMMASTERSERVERUPDATER_INTERFACE_VERSION_001 "SteamMasterServerUpdater001"