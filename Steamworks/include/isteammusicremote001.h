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

#include "isteammusicremote.h"

class ISteamMusicRemote001 {
public:
	virtual bool RegisterSteamMusicRemote(const char *pchName) = 0;

	virtual bool DeregisterSteamMusicRemote() = 0;

	virtual bool BIsCurrentMusicRemote() = 0;

	virtual bool BActivationSuccess(bool bValue) = 0;

	virtual bool SetDisplayName(const char *pchDisplayName) = 0;

	virtual bool SetPNGIcon_64x64(void *pvBuffer, uint32 cbBufferLength) = 0;

	virtual bool EnablePlayPrevious(bool bValue) = 0;

	virtual bool EnablePlayNext(bool bValue) = 0;

	virtual bool EnableShuffled(bool bValue) = 0;

	virtual bool EnableLooped(bool bValue) = 0;

	virtual bool EnableQueue(bool bValue) = 0;

	virtual bool EnablePlaylists(bool bValue) = 0;

	virtual bool UpdatePlaybackStatus(AudioPlayback_Status nStatus) = 0;

	virtual bool UpdateShuffled(bool bValue) = 0;

	virtual bool UpdateLooped(bool bValue) = 0;

	virtual bool UpdateVolume(float flValue) = 0;

	virtual bool CurrentEntryWillChange() = 0;

	virtual bool CurrentEntryIsAvailable(bool bAvailable) = 0;

	virtual bool UpdateCurrentEntryText(const char *pchText) = 0;

	virtual bool UpdateCurrentEntryElapsedSeconds(int nValue) = 0;

	virtual bool UpdateCurrentEntryCoverArt(void *pvBuffer, uint32 cbBufferLength) = 0;

	virtual bool CurrentEntryDidChange() = 0;

	virtual bool QueueWillChange() = 0;

	virtual bool ResetQueueEntries() = 0;

	virtual bool SetQueueEntry(int nID, int nPosition, const char *pchEntryText) = 0;

	virtual bool SetCurrentQueueEntry(int nID) = 0;

	virtual bool QueueDidChange() = 0;

	virtual bool PlaylistWillChange() = 0;

	virtual bool ResetPlaylistEntries() = 0;

	virtual bool SetPlaylistEntry(int nID, int nPosition, const char *pchEntryText) = 0;

	virtual bool SetCurrentPlaylistEntry(int nID) = 0;

	virtual bool PlaylistDidChange() = 0;
};

#define STEAMMUSICREMOTE_INTERFACE_VERSION_001 "STEAMMUSICREMOTE_INTERFACE_VERSION001"