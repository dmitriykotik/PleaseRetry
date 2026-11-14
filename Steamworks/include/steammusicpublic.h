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

#include "steamapiinternal.h"

enum AudioPlayback_Status {
	AudioPlayback_Undefined = 0, 
	AudioPlayback_Playing = 1,
	AudioPlayback_Paused = 2,
	AudioPlayback_Idle = 3
};

#if defined(PR_CALLBACK_PACK_SMALL)
    #pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

struct PlaybackStatusHasChanged_t { 
    enum { k_iCallback = k_iSteamMusicCallbacks + 1 };
};

struct VolumeHasChanged_t { 
    enum { k_iCallback = k_iSteamMusicCallbacks + 2 };
    float m_flNewVolume;
};

struct MusicPlayerRemoteWillActivate_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 1 };
};

struct MusicPlayerRemoteWillDeactivate_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 2 };
};

struct MusicPlayerRemoteToFront_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 3 };
};

struct MusicPlayerWillQuit_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 4 };
};

struct MusicPlayerWantsPlay_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 5 };
};

struct MusicPlayerWantsPause_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 6 };
};

struct MusicPlayerWantsPlayPrevious_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 7 };
};

struct MusicPlayerWantsPlayNext_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 8 };
};

struct  MusicPlayerWantsShuffled_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 9 };
    bool m_bShuffled;
};

struct  MusicPlayerWantsLooped_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 10 };
    bool m_bLooped;
};

struct  MusicPlayerWantsVolume_t { 
    enum { k_iCallback = k_iSteamMusicCallbacks + 11 };
    float m_flNewVolume;
};

struct  MusicPlayerSelectsQueueEntry_t { 
    enum { k_iCallback = k_iSteamMusicCallbacks + 12 };
    int nID;
};

struct  MusicPlayerSelectsPlaylistEntry_t { 
    enum { k_iCallback = k_iSteamMusicCallbacks + 13 };
    int nID;
};

struct  MusicPlayerWantsPlayingRepeatStatus_t { 
    enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 14 };
    int m_nPlayingRepeatStatus;
};

#pragma pack(pop)