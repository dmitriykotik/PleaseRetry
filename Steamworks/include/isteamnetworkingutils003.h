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

#include "isteamnetworkingutils.h"

class ISteamNetworkingUtils003 {
public:
	virtual SteamNetworkingMessage_t *AllocateMessage(int cbAllocateBuffer) = 0;

	virtual ESteamNetworkingAvailability GetRelayNetworkStatus(SteamRelayNetworkStatus_t *pDetails) = 0;

	virtual float GetLocalPingLocation(SteamNetworkPingLocation_t &result) = 0;

	virtual int EstimatePingTimeBetweenTwoLocations(const SteamNetworkPingLocation_t &location1, const SteamNetworkPingLocation_t &location2) = 0;

	virtual int EstimatePingTimeFromLocalHost(const SteamNetworkPingLocation_t &remoteLocation) = 0;

	virtual void ConvertPingLocationToString(const SteamNetworkPingLocation_t &location, char *pszBuf, int cchBufSize) = 0;

	virtual bool ParsePingLocationString(const char *pszString, SteamNetworkPingLocation_t &result) = 0;

	virtual bool CheckPingDataUpToDate(float flMaxAgeSeconds) = 0;

	virtual int GetPingToDataCenter(SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP) = 0;

	virtual int GetDirectPingToPOP(SteamNetworkingPOPID popID) = 0;

	virtual int GetPOPCount() = 0;

	virtual int GetPOPList(SteamNetworkingPOPID *list, int nListSz) = 0;

	virtual SteamNetworkingMicroseconds GetLocalTimestamp() = 0;

	virtual void SetDebugOutputFunction(ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc) = 0;

	virtual bool SetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg) = 0;

	virtual ESteamNetworkingGetConfigValueResult GetConfigValue(ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult) = 0;

	virtual bool GetConfigValueInfo(ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue) = 0;

	virtual ESteamNetworkingConfigValue GetFirstConfigValue() = 0;

	virtual void SteamNetworkingIPAddr_ToString(const SteamNetworkingIPAddr &addr, char *buf, size_t cbBuf, bool bWithPort) = 0;

	virtual bool SteamNetworkingIPAddr_ParseString(SteamNetworkingIPAddr *pAddr, const char *pszStr) = 0;

	virtual void SteamNetworkingIdentity_ToString(const SteamNetworkingIdentity &identity, char *buf, size_t cbBuf) = 0;

	virtual bool SteamNetworkingIdentity_ParseString(SteamNetworkingIdentity *pIdentity, const char *pszStr) = 0;
};

#define STEAMNETWORKINGUTILS_INTERFACE_VERSION_003 "SteamNetworkingUtils003"