```
//==== PleaseRetryEmu / Copyright (C) 2026, dmitriykotik. MIT License. ========//
// This documentation is part of PleaseRetryEmu, an open-source project.
// This Software and documentation are provided strictly "AS IS", without
// warranty of any kind, express or implied.
//
// LEGAL NOTICE: This project is an independent compatibility layer and is NOT
// affiliated with, endorsed, or authorized by Valve Corporation. "Steam" and
// "Steamworks" are registered trademarks of Valve Corporation.
//
// Developed strictly for EDUCATIONAL, RESEARCH, and software preservation
// purposes. The author holds NO LIABILITY for any misuse, legal consequences,
// or third-party restrictions. All actions are performed at your own risk.
//=============================================================================//
```

# ISteamGameServer

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   002   |   O    |
|   003   |   O    |
|   004   |  100   |
|   005   |  102   |
|   006   |   O    |
|   007   |   O    |
|   008   |  104   |
|   009   |  107   |
|   010   |  116   |
|   011   |  128   |
|   012   |  146   |
|   013   |  151   |
|   014   |  155   |
|   015   |  165   |

```
002 - O
003 - O
004 - 100, G
005 - 101, 102, G
006 - O
007 - O
008 - 103, 104, G
009 - 105, 106, 107, G
010 - 108, 109, 110, 111, 112, 113, 114, 115, 116, G
011 - 117, 118, 119, 120, 121, 122, 123a, 125, 126a, 127, 128, G
012 - 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, 143, 144, 145, 146, G
013 - 147, 148a, 149, 150, 151, G
014 - 152, 153a, 154, 155, G
015 - 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `void SetSpawnCount(uint32 ucSpawn)` |
| 5 | `bool GetSteam2GetEncryptionKeyToSendToNewClient(void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey)` |
| 6 | `bool SendSteam2UserConnect( uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie)` |
| 7 | `bool SendSteam3UserConnect(CSteamID steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie)` |
| 8 | `bool RemoveUserConnect(uint32 unUserID)` |
| 9 | `bool SendUserDisconnect(CSteamID steamID, uint32 unUserID)` |
| 10 | `bool SendUserStatusResponse(CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast)` |
| 11 | `bool Obsolete_GSSetStatus(int32 nAppIdServed, uint32 unServerFlags, int cPlayers, int cPlayersMax, int cBotPlayers, int unGamePort, const char *pchServerName, const char *pchGameDir, const char *pchMapName, const char *pchVersion)` |
| 12 | `bool UpdateStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName)` |
| 13 | `bool BSecure()` |
| 14 | `CSteamID GetSteamID()` |
| 15 | `bool SetServerType(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion)` |
| 16 | `bool SetServerType2(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 17 | `bool UpdateStatus2(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 18 | `bool CreateUnauthenticatedUser(CSteamID *pSteamID)` |
| 19 | `bool SetUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 20 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 21 | `void SetGameType(const char *pchGameType)` |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `bool BSecure()` |
| 5 | `CSteamID GetSteamID()` |
| 6 | `bool GetSteam2GetEncryptionKeyToSendToNewClient(void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey)` |
| 7 | `bool SendUserConnect(uint32, uint32, uint16, const void *, uint32)` |
| 8 | `bool RemoveUserConnect(uint32 unUserID)` |
| 9 | `bool SendUserDisconnect(CSteamID steamID, uint32 unUserID)` |
| 10 | `void SetSpawnCount(uint32 ucSpawn)` |
| 11 | `bool SetServerType(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 12 | `bool UpdateStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 13 | `bool CreateUnauthenticatedUser(CSteamID *pSteamID)` |
| 14 | `bool SetUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 15 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 16 | `void SetGameType(const char *pchGameType)` |
| 17 | `bool GetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `bool BSecure()` |
| 5 | `CSteamID GetSteamID()` |
| 6 | `void SendUserConnectAndAuthenticate(CSteamID steamIDUser, uint32 unIPClient, void *pvAuthBlob, uint32 cubAuthBlobSize)` |
| 7 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 8 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 9 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 10 | `bool BSetServerType(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 11 | `void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 12 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 13 | `void SetGameType(const char *pchGameType)` |
| 14 | `bool BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `bool BSecure()` |
| 5 | `CSteamID GetSteamID()` |
| 6 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 7 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 8 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 9 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 10 | `bool BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 11 | `void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 12 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 13 | `void SetGameType(const char *pchGameType)` |
| 14 | `bool BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `bool BSecure()` |
| 5 | `CSteamID GetSteamID()` |
| 6 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 7 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 8 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 9 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 10 | `bool BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 11 | `void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 12 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 13 | `void SetGameType(const char *pchGameType)` |
| 14 | `bool BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` |
| 15 | `void GetGameplayStats()` |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `bool BSecure()` |
| 5 | `CSteamID GetSteamID()` |
| 6 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 7 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 8 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 9 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 10 | `bool BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 11 | `void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 12 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 13 | `void SetGameType(const char *pchGameType)` |
| 14 | `bool BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` |
| 15 | `void GetGameplayStats()` |
| 16 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |

</details>
<!-- #endregion -->

<!-- #region 008 -->
<details style="margin-left: 20px">
<summary><b><code>008</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `bool BSecure()` |
| 5 | `CSteamID GetSteamID()` |
| 6 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 7 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 8 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 9 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 10 | `bool BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 11 | `void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 12 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 13 | `void SetGameType(const char *pchGameType)` |
| 14 | `bool BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` |
| 15 | `void GetGameplayStats()` |
| 16 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |
| 17 | `uint32 GetPublicIP()` |

</details>
<!-- #endregion -->

<!-- #region 009 -->
<details style="margin-left: 20px">
<summary><b><code>009</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `bool BSecure()` |
| 5 | `CSteamID GetSteamID()` |
| 6 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 7 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 8 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 9 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 10 | `bool BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 11 | `void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 12 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 13 | `void SetGameType(const char *pchGameType)` |
| 14 | `bool BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` |
| 15 | `void GetGameplayStats()` |
| 16 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |
| 17 | `uint32 GetPublicIP()` |
| 18 | `void SetGameData(const char *pchGameData)` |
| 19 | `EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)` |

</details>
<!-- #endregion -->

<!-- #region 010 -->
<details style="margin-left: 20px">
<summary><b><code>010</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `void LogOn()` |
| 2 | `void LogOff()` |
| 3 | `bool BLoggedOn()` |
| 4 | `bool BSecure()` |
| 5 | `CSteamID GetSteamID()` |
| 6 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 7 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 8 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 9 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 10 | `bool BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` |
| 11 | `void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` |
| 12 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` |
| 13 | `void SetGameTags(const char *pchGameTags)` |
| 14 | `void GetGameplayStats()` |
| 15 | `SteamAPICall_t GetServerReputation()` |
| 16 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |
| 17 | `uint32 GetPublicIP()` |
| 18 | `void SetGameData(const char *pchGameData)` |
| 19 | `EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)` |
| 20 | `HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)` |
| 21 | `EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)` |
| 22 | `void EndAuthSession(CSteamID steamID)` |
| 23 | `void CancelAuthTicket(HAuthTicket hAuthTicket)` |

</details>
<!-- #endregion -->

<!-- #region 011 -->
<details style="margin-left: 20px">
<summary><b><code>011</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)` |
| 2 | `void SetProduct(const char *pszProduct)` |
| 3 | `void SetGameDescription(const char *pszGameDescription)` |
| 4 | `void SetModDir(const char *pszModDir)` |
| 5 | `void SetDedicatedServer(bool bDedicated)` |
| 6 | `void LogOn(const char *pszAccountName, const char *pszPassword)` |
| 7 | `void LogOnAnonymous()` |
| 8 | `void LogOff()` |
| 9 | `bool BLoggedOn()` |
| 10 | `bool BSecure()` |
| 11 | `CSteamID GetSteamID()` |
| 12 | `bool WasRestartRequested()` |
| 13 | `void SetMaxPlayerCount(int cPlayersMax)` |
| 14 | `void SetBotPlayerCount(int cBotplayers)` |
| 15 | `void SetServerName(const char *pszServerName)` |
| 16 | `void SetMapName(const char *pszMapName)` |
| 17 | `void SetPasswordProtected(bool bPasswordProtected)` |
| 18 | `void SetSpectatorPort(uint16 unSpectatorPort)` |
| 19 | `void SetSpectatorServerName(const char *pszSpectatorServerName)` |
| 20 | `void ClearAllKeyValues()` |
| 21 | `void SetKeyValue(const char *pKey, const char *pValue)` |
| 22 | `void SetGameTags(const char *pchGameTags)` |
| 23 | `void SetGameData(const char *pchGameData)` |
| 24 | `void SetRegion(const char *pszRegion)` |
| 25 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 26 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 27 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 28 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 29 | `HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)` |
| 30 | `EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)` |
| 31 | `void EndAuthSession(CSteamID steamID)` |
| 32 | `void CancelAuthTicket(HAuthTicket hAuthTicket)` |
| 33 | `EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)` |
| 34 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |
| 35 | `void GetGameplayStats()` |
| 36 | `SteamAPICall_t GetServerReputation()` |
| 37 | `uint32 GetPublicIP()` |
| 38 | `bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)` |
| 39 | `int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)` |
| 40 | `void EnableHeartbeats(bool bActive)` |
| 41 | `void SetHeartbeatInterval(int iHeartbeatInterval)` |
| 42 | `void ForceHeartbeat()` |
| 43 | `SteamAPICall_t AssociateWithClan(CSteamID steamIDClan)` |
| 44 | `SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer)` |

</details>
<!-- #endregion -->

<!-- #region 012 -->
<details style="margin-left: 20px">
<summary><b><code>012</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)` |
| 2 | `void SetProduct(const char *pszProduct)` |
| 3 | `void SetGameDescription(const char *pszGameDescription)` |
| 4 | `void SetModDir(const char *pszModDir)` |
| 5 | `void SetDedicatedServer(bool bDedicated)` |
| 6 | `void LogOn(const char *pszToken)` |
| 7 | `void LogOnAnonymous()` |
| 8 | `void LogOff()` |
| 9 | `bool BLoggedOn()` |
| 10 | `bool BSecure()` |
| 11 | `CSteamID GetSteamID()` |
| 12 | `bool WasRestartRequested()` |
| 13 | `void SetMaxPlayerCount(int cPlayersMax)` |
| 14 | `void SetBotPlayerCount(int cBotplayers)` |
| 15 | `void SetServerName(const char *pszServerName)` |
| 16 | `void SetMapName(const char *pszMapName)` |
| 17 | `void SetPasswordProtected(bool bPasswordProtected)` |
| 18 | `void SetSpectatorPort(uint16 unSpectatorPort)` |
| 19 | `void SetSpectatorServerName(const char *pszSpectatorServerName)` |
| 20 | `void ClearAllKeyValues()` |
| 21 | `void SetKeyValue(const char *pKey, const char *pValue)` |
| 22 | `void SetGameTags(const char *pchGameTags)` |
| 23 | `void SetGameData(const char *pchGameData)` |
| 24 | `void SetRegion(const char *pszRegion)` |
| 25 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 26 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 27 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 28 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 29 | `HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)` |
| 30 | `EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)` |
| 31 | `void EndAuthSession(CSteamID steamID)` |
| 32 | `void CancelAuthTicket(HAuthTicket hAuthTicket)` |
| 33 | `EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)` |
| 34 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |
| 35 | `void GetGameplayStats()` |
| 36 | `SteamAPICall_t GetServerReputation()` |
| 37 | `uint32 GetPublicIP()` |
| 38 | `bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)` |
| 39 | `int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)` |
| 40 | `void EnableHeartbeats(bool bActive)` |
| 41 | `void SetHeartbeatInterval(int iHeartbeatInterval)` |
| 42 | `void ForceHeartbeat()` |
| 43 | `SteamAPICall_t AssociateWithClan(CSteamID steamIDClan)` |
| 44 | `SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer)` |

</details>
<!-- #endregion -->

<!-- #region 013 -->
<details style="margin-left: 20px">
<summary><b><code>013</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)` |
| 2 | `void SetProduct(const char *pszProduct)` |
| 3 | `void SetGameDescription(const char *pszGameDescription)` |
| 4 | `void SetModDir(const char *pszModDir)` |
| 5 | `void SetDedicatedServer(bool bDedicated)` |
| 6 | `void LogOn(const char *pszToken)` |
| 7 | `void LogOnAnonymous()` |
| 8 | `void LogOff()` |
| 9 | `bool BLoggedOn()` |
| 10 | `bool BSecure()` |
| 11 | `CSteamID GetSteamID()` |
| 12 | `bool WasRestartRequested()` |
| 13 | `void SetMaxPlayerCount(int cPlayersMax)` |
| 14 | `void SetBotPlayerCount(int cBotplayers)` |
| 15 | `void SetServerName(const char *pszServerName)` |
| 16 | `void SetMapName(const char *pszMapName)` |
| 17 | `void SetPasswordProtected(bool bPasswordProtected)` |
| 18 | `void SetSpectatorPort(uint16 unSpectatorPort)` |
| 19 | `void SetSpectatorServerName(const char *pszSpectatorServerName)` |
| 20 | `void ClearAllKeyValues()` |
| 21 | `void SetKeyValue(const char *pKey, const char *pValue)` |
| 22 | `void SetGameTags(const char *pchGameTags)` |
| 23 | `void SetGameData(const char *pchGameData)` |
| 24 | `void SetRegion(const char *pszRegion)` |
| 25 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 26 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 27 | `void SendUserDisconnect(CSteamID steamIDUser)` |
| 28 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 29 | `HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)` |
| 30 | `EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)` |
| 31 | `void EndAuthSession(CSteamID steamID)` |
| 32 | `void CancelAuthTicket(HAuthTicket hAuthTicket)` |
| 33 | `EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)` |
| 34 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |
| 35 | `void GetGameplayStats()` |
| 36 | `SteamAPICall_t GetServerReputation()` |
| 37 | `SteamIPAddress_t GetPublicIP()` |
| 38 | `bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)` |
| 39 | `int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)` |
| 40 | `void EnableHeartbeats(bool bActive)` |
| 41 | `void SetHeartbeatInterval(int iHeartbeatInterval)` |
| 42 | `void ForceHeartbeat()` |
| 43 | `SteamAPICall_t AssociateWithClan(CSteamID steamIDClan)` |
| 44 | `SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer)` |

</details>
<!-- #endregion -->

<!-- #region 014 -->
<details style="margin-left: 20px">
<summary><b><code>014</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)` |
| 2 | `void SetProduct(const char *pszProduct)` |
| 3 | `void SetGameDescription(const char *pszGameDescription)` |
| 4 | `void SetModDir(const char *pszModDir)` |
| 5 | `void SetDedicatedServer(bool bDedicated)` |
| 6 | `void LogOn(const char *pszToken)` |
| 7 | `void LogOnAnonymous()` |
| 8 | `void LogOff()` |
| 9 | `bool BLoggedOn()` |
| 10 | `bool BSecure()` |
| 11 | `CSteamID GetSteamID()` |
| 12 | `bool WasRestartRequested()` |
| 13 | `void SetMaxPlayerCount(int cPlayersMax)` |
| 14 | `void SetBotPlayerCount(int cBotplayers)` |
| 15 | `void SetServerName(const char *pszServerName)` |
| 16 | `void SetMapName(const char *pszMapName)` |
| 17 | `void SetPasswordProtected(bool bPasswordProtected)` |
| 18 | `void SetSpectatorPort(uint16 unSpectatorPort)` |
| 19 | `void SetSpectatorServerName(const char *pszSpectatorServerName)` |
| 20 | `void ClearAllKeyValues()` |
| 21 | `void SetKeyValue(const char *pKey, const char *pValue)` |
| 22 | `void SetGameTags(const char *pchGameTags)` |
| 23 | `void SetGameData(const char *pchGameData)` |
| 24 | `void SetRegion(const char *pszRegion)` |
| 25 | `void SetAdvertiseServerActive(bool bActive)` |
| 26 | `HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)` |
| 27 | `EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)` |
| 28 | `void EndAuthSession(CSteamID steamID)` |
| 29 | `void CancelAuthTicket(HAuthTicket hAuthTicket)` |
| 30 | `EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)` |
| 31 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |
| 32 | `void GetGameplayStats()` |
| 33 | `SteamAPICall_t GetServerReputation()` |
| 34 | `SteamIPAddress_t GetPublicIP()` |
| 35 | `bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)` |
| 36 | `int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)` |
| 37 | `SteamAPICall_t AssociateWithClan(CSteamID steamIDClan)` |
| 38 | `SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer)` |
| 39 | `bool SendUserConnectAndAuthenticate_DEPRECATED(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 40 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 41 | `void SendUserDisconnect_DEPRECATED(CSteamID steamIDUser)` |
| 42 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 43 | `void SetMasterServerHeartbeatInterval_DEPRECATED(int iHeartbeatInterval)` |
| 44 | `void ForceMasterServerHeartbeat_DEPRECATED()` |

</details>
<!-- #endregion -->

<!-- #region 015 -->
<details style="margin-left: 20px">
<summary><b><code>015</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)` |
| 2 | `void SetProduct(const char *pszProduct)` |
| 3 | `void SetGameDescription(const char *pszGameDescription)` |
| 4 | `void SetModDir(const char *pszModDir)` |
| 5 | `void SetDedicatedServer(bool bDedicated)` |
| 6 | `void LogOn(const char *pszToken)` |
| 7 | `void LogOnAnonymous()` |
| 8 | `void LogOff()` |
| 9 | `bool BLoggedOn()` |
| 10 | `bool BSecure()` |
| 11 | `CSteamID GetSteamID()` |
| 12 | `bool WasRestartRequested()` |
| 13 | `void SetMaxPlayerCount(int cPlayersMax)` |
| 14 | `void SetBotPlayerCount(int cBotplayers)` |
| 15 | `void SetServerName(const char *pszServerName)` |
| 16 | `void SetMapName(const char *pszMapName)` |
| 17 | `void SetPasswordProtected(bool bPasswordProtected)` |
| 18 | `void SetSpectatorPort(uint16 unSpectatorPort)` |
| 19 | `void SetSpectatorServerName(const char *pszSpectatorServerName)` |
| 20 | `void ClearAllKeyValues()` |
| 21 | `void SetKeyValue(const char *pKey, const char *pValue)` |
| 22 | `void SetGameTags(const char *pchGameTags)` |
| 23 | `void SetGameData(const char *pchGameData)` |
| 24 | `void SetRegion(const char *pszRegion)` |
| 25 | `void SetAdvertiseServerActive(bool bActive)` |
| 26 | `HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)` |
| 27 | `EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)` |
| 28 | `void EndAuthSession(CSteamID steamID)` |
| 29 | `void CancelAuthTicket(HAuthTicket hAuthTicket)` |
| 30 | `EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)` |
| 31 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` |
| 32 | `void GetGameplayStats()` |
| 33 | `SteamAPICall_t GetServerReputation()` |
| 34 | `SteamIPAddress_t GetPublicIP()` |
| 35 | `bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)` |
| 36 | `int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)` |
| 37 | `SteamAPICall_t AssociateWithClan(CSteamID steamIDClan)` |
| 38 | `SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer)` |
| 39 | `bool SendUserConnectAndAuthenticate_DEPRECATED(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` |
| 40 | `CSteamID CreateUnauthenticatedUserConnection()` |
| 41 | `void SendUserDisconnect_DEPRECATED(CSteamID steamIDUser)` |
| 42 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` |
| 43 | `void SetMasterServerHeartbeatInterval_DEPRECATED(int iHeartbeatInterval)` |
| 44 | `void ForceMasterServerHeartbeat_DEPRECATED()` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|Num|Methods|I. Versions|
| :-: | :- | :- |
| 1 | `SteamAPICall_t AssociateWithClan(CSteamID steamIDClan)` | `011`, `012`, `013`, `014`, `015` |
| 2 | `EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)` | `010`, `011`, `012`, `013`, `014`, `015` |
| 3 | `bool BGetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` | `004`, `005`, `006`, `007`, `008`, `009` |
| 4 | `bool BLoggedOn()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 5 | `bool BSecure()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 6 | `bool BSetServerType(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` | `004` |
| 7 | `bool BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` | `005`, `006`, `007`, `008`, `009`, `010` |
| 8 | `bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` | `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 9 | `void CancelAuthTicket(HAuthTicket hAuthTicket)` | `010`, `011`, `012`, `013`, `014`, `015` |
| 10 | `void ClearAllKeyValues()` | `011`, `012`, `013`, `014`, `015` |
| 11 | `SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer)` | `011`, `012`, `013`, `014`, `015` |
| 12 | `bool CreateUnauthenticatedUser(CSteamID *pSteamID)` | `002`, `003` |
| 13 | `CSteamID CreateUnauthenticatedUserConnection()` | `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 14 | `void EnableHeartbeats(bool bActive)` | `011`, `012`, `013` |
| 15 | `void EndAuthSession(CSteamID steamID)` | `010`, `011`, `012`, `013`, `014`, `015` |
| 16 | `void ForceHeartbeat()` | `011`, `012`, `013` |
| 17 | `void ForceMasterServerHeartbeat_DEPRECATED()` | `014`, `015` |
| 18 | `HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)` | `010`, `011`, `012`, `013`, `014`, `015` |
| 19 | `void GetGameplayStats()` | `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 20 | `int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)` | `011`, `012`, `013`, `014`, `015` |
| 21 | `uint32 GetPublicIP()` | `008`, `009`, `010`, `011`, `012` |
| 22 | `SteamIPAddress_t GetPublicIP()` | `013`, `014`, `015` |
| 23 | `SteamAPICall_t GetServerReputation()` | `010`, `011`, `012`, `013`, `014`, `015` |
| 24 | `bool GetSteam2GetEncryptionKeyToSendToNewClient(void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey)` | `002`, `003` |
| 25 | `CSteamID GetSteamID()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 26 | `bool GetUserAchievementStatus(CSteamID steamID, const char *pchAchievementName)` | `003` |
| 27 | `bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)` | `011`, `012`, `013`, `014`, `015` |
| 28 | `bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)` | `011`, `012`, `013`, `014`, `015` |
| 29 | `void LogOff()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 30 | `void LogOn()` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010` |
| 31 | `void LogOn(const char *pszAccountName, const char *pszPassword)` | `011` |
| 32 | `void LogOn(const char *pszToken)` | `012`, `013`, `014`, `015` |
| 33 | `void LogOnAnonymous()` | `011`, `012`, `013`, `014`, `015` |
| 34 | `bool Obsolete_GSSetStatus(int32 nAppIdServed, uint32 unServerFlags, int cPlayers, int cPlayersMax, int cBotPlayers, int unGamePort, const char *pchServerName, const char *pchGameDir, const char *pchMapName, const char *pchVersion)` | `002` |
| 35 | `bool RemoveUserConnect(uint32 unUserID)` | `002`, `003` |
| 36 | `bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)` | `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 37 | `bool SendSteam2UserConnect( uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie)` | `002` |
| 38 | `bool SendSteam3UserConnect(CSteamID steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie)` | `002` |
| 39 | `bool SendUserConnect(uint32, uint32, uint16, const void *, uint32)` | `003` |
| 40 | `void SendUserConnectAndAuthenticate(CSteamID steamIDUser, uint32 unIPClient, void *pvAuthBlob, uint32 cubAuthBlobSize)` | `004` |
| 41 | `bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 42 | `bool SendUserConnectAndAuthenticate_DEPRECATED(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)` | `014`, `015` |
| 43 | `bool SendUserDisconnect(CSteamID steamID, uint32 unUserID)` | `002`, `003` |
| 44 | `void SendUserDisconnect(CSteamID steamIDUser)` | `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013` |
| 45 | `void SendUserDisconnect_DEPRECATED(CSteamID steamIDUser)` | `014`, `015` |
| 46 | `bool SendUserStatusResponse(CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast)` | `002` |
| 47 | `void SetAdvertiseServerActive(bool bActive)` | `014`, `015` |
| 48 | `void SetBotPlayerCount(int cBotplayers)` | `011`, `012`, `013`, `014`, `015` |
| 49 | `void SetDedicatedServer(bool bDedicated)` | `011`, `012`, `013`, `014`, `015` |
| 50 | `void SetGameData(const char *pchGameData)` | `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 51 | `void SetGameDescription(const char *pszGameDescription)` | `011`, `012`, `013`, `014`, `015` |
| 52 | `void SetGameTags(const char *pchGameTags)` | `010`, `011`, `012`, `013`, `014`, `015` |
| 53 | `void SetGameType(const char *pchGameType)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
| 54 | `void SetHeartbeatInterval(int iHeartbeatInterval)` | `011`, `012`, `013` |
| 55 | `void SetKeyValue(const char *pKey, const char *pValue)` | `011`, `012`, `013`, `014`, `015` |
| 56 | `void SetMapName(const char *pszMapName)` | `011`, `012`, `013`, `014`, `015` |
| 57 | `void SetMasterServerHeartbeatInterval_DEPRECATED(int iHeartbeatInterval)` | `014`, `015` |
| 58 | `void SetMaxPlayerCount(int cPlayersMax)` | `011`, `012`, `013`, `014`, `015` |
| 59 | `void SetModDir(const char *pszModDir)` | `011`, `012`, `013`, `014`, `015` |
| 60 | `void SetPasswordProtected(bool bPasswordProtected)` | `011`, `012`, `013`, `014`, `015` |
| 61 | `void SetProduct(const char *pszProduct)` | `011`, `012`, `013`, `014`, `015` |
| 62 | `void SetRegion(const char *pszRegion)` | `011`, `012`, `013`, `014`, `015` |
| 63 | `void SetServerName(const char *pszServerName)` | `011`, `012`, `013`, `014`, `015` |
| 64 | `bool SetServerType(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion)` | `002` |
| 65 | `bool SetServerType(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` | `003` |
| 66 | `bool SetServerType2(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)` | `002` |
| 67 | `void SetSpawnCount(uint32 ucSpawn)` | `002`, `003` |
| 68 | `void SetSpectatorPort(uint16 unSpectatorPort)` | `011`, `012`, `013`, `014`, `015` |
| 69 | `void SetSpectatorServerName(const char *pszSpectatorServerName)` | `011`, `012`, `013`, `014`, `015` |
| 70 | `bool SetUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)` | `002`, `003` |
| 71 | `void UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` | `004`, `005`, `006`, `007`, `008`, `009`, `010` |
| 72 | `void UpdateSpectatorPort(uint16 unSpectatorPort)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010` |
| 73 | `bool UpdateStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName)` | `002` |
| 74 | `bool UpdateStatus(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` | `003` |
| 75 | `bool UpdateStatus2(int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)` | `002` |
| 76 | `EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)` | `009`, `010`, `011`, `012`, `013`, `014`, `015` |
| 77 | `bool WasRestartRequested()` | `011`, `012`, `013`, `014`, `015` |

</details>
<!-- #endregion -->

</details>
<!-- #endregion -->

<!-- #region Disclaimer -->
```
// ---- DISCLAIMER -------------------------------------------------------------- //
// Официальная документация отсутствует. Данные могут быть неточными или сырыми.
// Если вы нашли ошибку, пожалуйста, исправьте её или создайте Issue/PR.
// ------------------------------------------------------------------------------ //
```
<!-- #endregion -->

<!-- #region Doc -->
```cpp
class ISteamGameServer;
```

Описание класса.

## Method
```cpp
Type Method(typeVar variable)
```

| Название   | Тип       | Описание             |
| :--------- | :-------- | :------------------- |
| `variable` | `typeVar` | Описание переменной. |

Описание метода.

**Возвращает:** `Type`\
Описание возвращаемого значения.

> [!WARNING]
> На данный момент это лишь прототип документации.
<!-- #endregion -->