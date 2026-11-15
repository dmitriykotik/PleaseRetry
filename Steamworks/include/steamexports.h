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

#if defined(_WIN32)
    #define PR_CALLTYPE __cdecl
#else
    #define PR_CALLTYPE
#endif

#if defined(_WIN32)
    #if defined(PR_API_EXPORTS)
        #define PR_API extern "C" __declspec(dllexport)
    #else
        #define PR_API extern "C" __declspec(dllimport)
    #endif
#else
    #if defined(PR_API_EXPORTS)
        #define PR_API extern "C" __attribute__((visibility("default"))) 
    #else
        #define PR_API extern "C"
    #endif
#endif

// export functions