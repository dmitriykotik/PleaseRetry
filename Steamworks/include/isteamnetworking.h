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

#include "steamtypes.h"
#include "steamclientpublic.h"
#include "steamapiinternal.h"

enum EP2PSessionError {
	k_EP2PSessionErrorNone = 0,
	k_EP2PSessionErrorNoRightsToApp = 2,
	k_EP2PSessionErrorTimeout = 4,
	k_EP2PSessionErrorNotRunningApp_DELETED = 1,
	k_EP2PSessionErrorDestinationNotLoggedIn_DELETED = 3,
	k_EP2PSessionErrorMax = 5
};

enum EP2PSend {
	k_EP2PSendUnreliable = 0,
	k_EP2PSendUnreliableNoDelay = 1,
	k_EP2PSendReliable = 2,
	k_EP2PSendReliableWithBuffering = 3,
};

typedef uint32 SNetSocket_t;
typedef uint32 SNetListenSocket_t;

enum ESNetSocketState {
	k_ESNetSocketStateInvalid = 0,
	k_ESNetSocketStateConnected = 1,
	k_ESNetSocketStateInitiated = 10,
	k_ESNetSocketStateLocalCandidatesFound = 11,
	k_ESNetSocketStateReceivedRemoteCandidates = 12,
	k_ESNetSocketStateChallengeHandshake = 15,
	k_ESNetSocketStateDisconnecting = 21,
	k_ESNetSocketStateLocalDisconnect = 22,
	k_ESNetSocketStateTimeoutDuringConnect = 23,
	k_ESNetSocketStateRemoteEndDisconnected = 24,
	k_ESNetSocketStateConnectionBroken = 25,
};

enum ESNetSocketConnectionType {
	k_ESNetSocketConnectionTypeNotConnected = 0,
	k_ESNetSocketConnectionTypeUDP = 1,
	k_ESNetSocketConnectionTypeUDPRelay = 2,
};

#if defined(PR_CALLBACK_PACK_SMALL)
    #pragma pack(push, 4)
#elif defined(PR_CALLBACK_PACK_LARGE)
    #pragma pack(push, 8)
#else
    #error steamclientpublic.h should define PR_CALLBACK_PACK_xxx
#endif 

struct P2PSessionRequest_t { 
	enum { k_iCallback = k_iSteamNetworkingCallbacks + 2 };
	CSteamID m_steamIDRemote;
};

struct P2PSessionConnectFail_t { 
	enum { k_iCallback = k_iSteamNetworkingCallbacks + 3 };
	CSteamID m_steamIDRemote;
	uint8 m_eP2PSessionError;
};

struct P2PSessionState_t {
	uint8 m_bConnectionActive;
	uint8 m_bConnecting;
	uint8 m_eP2PSessionError;
	uint8 m_bUsingRelay;
	int32 m_nBytesQueuedForSend;
	int32 m_nPacketsQueuedForSend;
	uint32 m_nRemoteIP;
	uint16 m_nRemotePort;
};

struct SocketStatusCallback_t { 
	enum { k_iCallback = k_iSteamNetworkingCallbacks + 1 };
	SNetSocket_t m_hSocket;
	SNetListenSocket_t m_hListenSocket;
	CSteamID m_steamIDRemote;
	int m_eSNetSocketState;
};

#pragma pack(pop)

class ISteamNetworking;