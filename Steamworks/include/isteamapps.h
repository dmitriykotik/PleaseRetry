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

enum EGamePerformanceSetting
{
	k_EGamePerformanceSetting_NotSet	= 0,
	k_EGamePerformanceSetting_Low		= 1,
	k_EGamePerformanceSetting_Medium	= 2,
	k_EGamePerformanceSetting_High		= 3,
	k_EGamePerformanceSetting_Ultra		= 4,
	k_EGamePerformanceSetting_Custom	= 5,
};

class ISteamApps;