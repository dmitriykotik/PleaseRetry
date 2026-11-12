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

#include "isteamgamestats.h"

class ISteamGameStats001 {
public:
    virtual SteamAPICall_t GetNewSession(int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted) = 0;

	virtual SteamAPICall_t EndSession(uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode) = 0;

	virtual EResult AddSessionAttributeInt(uint64 ulSessionID, const char* pstrName, int32 nData) = 0;

	virtual EResult AddSessionAttributeString(uint64 ulSessionID, const char* pstrName, const char *pstrData) = 0;

	virtual EResult AddSessionAttributeFloat(uint64 ulSessionID, const char* pstrName, float fData) = 0;

	virtual EResult AddNewRow(uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName) = 0;

	virtual EResult CommitRow(uint64 ulRowID) = 0;

	virtual EResult CommitOutstandingRows(uint64 ulSessionID) = 0;

	virtual EResult AddRowAttributeInt(uint64 ulRowID, const char *pstrName, int32 nData) = 0;

	virtual EResult AddRowAtributeString(uint64 ulRowID, const char *pstrName, const char *pstrData) = 0;
	
	virtual EResult AddRowAttributeFloat(uint64 ulRowID, const char *pstrName, float fData) = 0;

	virtual EResult AddSessionAttributeInt64(uint64 ulSessionID, const char *pstrName, int64 llData) = 0;
	
	virtual EResult AddRowAttributeInt64(uint64 ulRowID, const char *pstrName, int64 llData) = 0;
};

#define STEAMGAMESTATS_INTERFACE_VERSION_001 "SteamGameStats001"