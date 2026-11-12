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

#include <cstdint>

#if !defined(PR_BIG_ENDIAN)
    #if defined(__GNUC__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
        #define PR_BIG_ENDIAN 1
    #endif
#endif

typedef std::int8_t int8;
typedef std::int16_t int16;
typedef std::int32_t int32;
typedef std::int64_t int64;

typedef std::uint8_t uint8;
typedef std::uint16_t uint16;
typedef std::uint32_t uint32;
typedef std::uint64_t uint64;

typedef std::intptr_t intp;
typedef std::uintptr_t uintp;

typedef uint32 AppId_t;
typedef uint32 DepotId_t;
typedef uint32 RTime32;
typedef uint64 SteamAPICall_t;
typedef uint32 AccountID_t;
typedef uint64 PartyBeaconID_t;

const AppId_t k_uAppIdInvalid = 0x0;
const DepotId_t k_uDepotIdInvalid = 0x0;
const SteamAPICall_t k_uAPICallInvalid = 0x0;
const AccountID_t k_uAccountIdInvalid = 0;
const PartyBeaconID_t k_ulPartyBeaconIdInvalid = 0;

enum ESteamIPType {
    k_ESteamIPTypeIPv4 = 0,
    k_ESteamIPTypeIPv6 = 1,
};

#pragma pack(push, 1)
struct SteamIPAddress_t {
    union {
        uint32 m_unIPv4;
        uint8  m_rgubIPv6[16];
        uint64 m_ipv6Qword[2]; 
    };

    ESteamIPType m_eType;

    bool IsSet() const { 
        if (k_ESteamIPTypeIPv4 == m_eType)
            return m_unIPv4 != 0;
        else 
            return m_ipv6Qword[0] != 0 || m_ipv6Qword[1] != 0; 
    }

    static SteamIPAddress_t IPv4Any() {
        SteamIPAddress_t ipOut;
        ipOut.m_eType = k_ESteamIPTypeIPv4;
        ipOut.m_unIPv4 = 0;
        return ipOut;
    }

    static SteamIPAddress_t IPv6Any() {
        SteamIPAddress_t ipOut;
        ipOut.m_eType = k_ESteamIPTypeIPv6;
        ipOut.m_ipv6Qword[0] = 0;
        ipOut.m_ipv6Qword[1] = 0;
        return ipOut;
    }

    static SteamIPAddress_t IPv4Loopback() {
        SteamIPAddress_t ipOut;
        ipOut.m_eType = k_ESteamIPTypeIPv4;
        ipOut.m_unIPv4 = 0x7f000001;
        return ipOut;
    }

    static SteamIPAddress_t IPv6Loopback() {
        SteamIPAddress_t ipOut;
        ipOut.m_eType = k_ESteamIPTypeIPv6;
        ipOut.m_ipv6Qword[0] = 0;
        ipOut.m_ipv6Qword[1] = 0;
        ipOut.m_rgubIPv6[15] = 1;
        return ipOut;
    }
};
#pragma pack(pop)