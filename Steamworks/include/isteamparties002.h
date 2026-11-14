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

#include "isteamparties.h"

class ISteamParties002 {
public:
	virtual uint32 GetNumActiveBeacons() = 0;

	virtual PartyBeaconID_t GetBeaconByIndex(uint32 unIndex) = 0;

	virtual bool GetBeaconDetails(PartyBeaconID_t ulBeaconID, CSteamID *pSteamIDBeaconOwner, SteamPartyBeaconLocation_t *pLocation, char *pchMetadata, int cchMetadata) = 0;

	virtual SteamAPICall_t JoinParty(PartyBeaconID_t ulBeaconID) = 0;

	virtual bool GetNumAvailableBeaconLocations(uint32 *puNumLocations) = 0;

	virtual bool GetAvailableBeaconLocations(SteamPartyBeaconLocation_t *pLocationList, uint32 uMaxNumLocations) = 0;

	virtual SteamAPICall_t CreateBeacon(uint32 unOpenSlots, SteamPartyBeaconLocation_t *pBeaconLocation, const char *pchConnectString, const char *pchMetadata) = 0;

	virtual void OnReservationCompleted(PartyBeaconID_t ulBeacon, CSteamID steamIDUser) = 0;

	virtual void CancelReservation(PartyBeaconID_t ulBeacon, CSteamID steamIDUser) = 0;

	virtual SteamAPICall_t ChangeNumOpenSlots(PartyBeaconID_t ulBeacon, uint32 unOpenSlots) = 0;

	virtual bool DestroyBeacon(PartyBeaconID_t ulBeacon) = 0;

	virtual bool GetBeaconLocationData(SteamPartyBeaconLocation_t BeaconLocation, ESteamPartyBeaconLocationData eData, char *pchDataStringOut, int cchDataStringOut) = 0;
};

#define STEAMPARTIES_INTERFACE_VERSION_002 "SteamParties002"