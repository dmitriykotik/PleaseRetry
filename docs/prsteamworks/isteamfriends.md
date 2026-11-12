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

# ISteamFriends

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   003   |  101   |
|   004   |  102   |
|   005   |  109   |
|   006   |  110   |
|   007   |  111   |
|   008   |  112   |
|   009   |  116   |
|   010   |   G    |
|   011   |  119   |
|   012   |   G    |
|   013   |  125   |
|   014   |  131   |
|   015   |  142   |
|   016   |   G    |
|   017   |  161   |
|   018   |  165   |

```
003 - 100, 101, G
004 - 102, G
005 - 103, 104, 105, 106, 107, 108, 109, G
006-  110, G
007 - 111, G
008 - 112, G
009 - 113, 114, 115, 116, G
010 - G
011 - 117, 118, 119, G
012 - G
013 - 120, 121, 122, 123a, 125, G
014 - 126a, 127, 128, 129a, 130, 131, G
015 - 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, G
016 - G
017 - 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, G
018 - 162, 163, 164, 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `int GetFriendAvatar(CSteamID steamIDFriend)` |
| 10 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)` |
| 11 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 12 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 13 | `int GetClanCount()` |
| 14 | `CSteamID GetClanByIndex(int iClan)` |
| 15 | `const char *GetClanName(CSteamID steamIDClan)` |
| 16 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 17 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 18 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 19 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 20 | `void ActivateGameOverlay(const char *pchDialog)` |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `int GetFriendAvatar(CSteamID steamIDFriend, int eAvatarSize)` |
| 10 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)` |
| 11 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 12 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 13 | `int GetClanCount()` |
| 14 | `CSteamID GetClanByIndex(int iClan)` |
| 15 | `const char *GetClanName(CSteamID steamIDClan)` |
| 16 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 17 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 18 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 19 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 20 | `void ActivateGameOverlay(const char *pchDialog)` |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `int GetFriendAvatar(CSteamID steamIDFriend, int eAvatarSize)` |
| 10 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 11 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 12 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 13 | `int GetClanCount()` |
| 14 | `CSteamID GetClanByIndex(int iClan)` |
| 15 | `const char *GetClanName(CSteamID steamIDClan)` |
| 16 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 17 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 18 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 19 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 20 | `void ActivateGameOverlay(const char *pchDialog)` |
| 21 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 22 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 23 | `void ActivateGameOverlayToStore(AppId_t nAppID)` |
| 24 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `int GetFriendAvatar(CSteamID steamIDFriend, int eAvatarSize)` |
| 10 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 11 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 12 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 13 | `int GetClanCount()` |
| 14 | `CSteamID GetClanByIndex(int iClan)` |
| 15 | `const char *GetClanName(CSteamID steamIDClan)` |
| 16 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 17 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 18 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 19 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 20 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 21 | `void ActivateGameOverlay(const char *pchDialog)` |
| 22 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 23 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 24 | `void ActivateGameOverlayToStore(AppId_t nAppID)` |
| 25 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 26 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 12 | `int GetClanCount()` |
| 13 | `CSteamID GetClanByIndex(int iClan)` |
| 14 | `const char *GetClanName(CSteamID steamIDClan)` |
| 15 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 16 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 17 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 18 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 19 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 20 | `void ActivateGameOverlay(const char *pchDialog)` |
| 21 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 22 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 23 | `void ActivateGameOverlayToStore(AppId_t nAppID)` |
| 24 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 25 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 26 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 27 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 28 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |

</details>
<!-- #endregion -->

<!-- #region 008 -->
<details style="margin-left: 20px">
<summary><b><code>008</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 12 | `int GetClanCount()` |
| 13 | `CSteamID GetClanByIndex(int iClan)` |
| 14 | `const char *GetClanName(CSteamID steamIDClan)` |
| 15 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 16 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 17 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 18 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 19 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 20 | `void ActivateGameOverlay(const char *pchDialog)` |
| 21 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 22 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 23 | `void ActivateGameOverlayToStore(AppId_t nAppID)` |
| 24 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 25 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 26 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 27 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 28 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 29 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 30 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 31 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 32 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 33 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 34 | `uint32 GetUserRestrictions()` |

</details>
<!-- #endregion -->

<!-- #region 009 -->
<details style="margin-left: 20px">
<summary><b><code>009</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 12 | `int GetClanCount()` |
| 13 | `CSteamID GetClanByIndex(int iClan)` |
| 14 | `const char *GetClanName(CSteamID steamIDClan)` |
| 15 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 16 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 17 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 18 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 19 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 20 | `void ActivateGameOverlay(const char *pchDialog)` |
| 21 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 22 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 23 | `void ActivateGameOverlayToStore(AppId_t nAppID)` |
| 24 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 25 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 26 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 27 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 28 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 29 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 30 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 31 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 32 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 33 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 34 | `uint32 GetUserRestrictions()` |
| 35 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 36 | `void ClearRichPresence()` |
| 37 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 38 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 39 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 40 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 41 | `int GetCoplayFriendCount()` |
| 42 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 43 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 44 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |

</details>
<!-- #endregion -->

<!-- #region 010 -->
<details style="margin-left: 20px">
<summary><b><code>010</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName_old( const char *pchPersonaName )` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount( int iFriendFlags )` |
| 5 | `CSteamID GetFriendByIndex( int iFriend, int iFriendFlags )` |
| 6 | `EFriendRelationship GetFriendRelationship( CSteamID steamIDFriend )` |
| 7 | `EPersonaState GetFriendPersonaState( CSteamID steamIDFriend )` |
| 8 | `const char *GetFriendPersonaName( CSteamID steamIDFriend )` |
| 9 | `bool GetFriendGamePlayed( CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo )` |
| 10 | `const char *GetFriendPersonaNameHistory( CSteamID steamIDFriend, int iPersonaName )` |
| 11 | `bool HasFriend( CSteamID steamIDFriend, int iFriendFlags )` |
| 12 | `int GetClanCount()` |
| 13 | `CSteamID GetClanByIndex( int iClan )` |
| 14 | `const char *GetClanName( CSteamID steamIDClan )` |
| 15 | `const char *GetClanTag( CSteamID steamIDClan )` |
| 16 | `bool GetClanActivityCounts( CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting )` |
| 17 | `SteamAPICall_t DownloadClanActivityCounts( CSteamID groupIDs[], int nIds )` |
| 18 | `int GetFriendCountFromSource( CSteamID steamIDSource )` |
| 19 | `CSteamID GetFriendFromSourceByIndex( CSteamID steamIDSource, int iFriend )` |
| 20 | `bool IsUserInSource( CSteamID steamIDUser, CSteamID steamIDSource )` |
| 21 | `void SetInGameVoiceSpeaking( CSteamID steamIDUser, bool bSpeaking )` |
| 22 | `void ActivateGameOverlay( const char *pchDialog )` |
| 23 | `void ActivateGameOverlayToUser( const char *pchDialog, CSteamID steamID )` |
| 24 | `void ActivateGameOverlayToWebPage( const char *pchURL )` |
| 25 | `void ActivateGameOverlayToStore( AppId_t nAppID )` |
| 26 | `void SetPlayedWith( CSteamID steamIDUserPlayedWith )` |
| 27 | `void ActivateGameOverlayInviteDialog( CSteamID steamIDLobby )` |
| 28 | `int GetSmallFriendAvatar( CSteamID steamIDFriend )` |
| 29 | `int GetMediumFriendAvatar( CSteamID steamIDFriend )` |
| 30 | `int GetLargeFriendAvatar( CSteamID steamIDFriend )` |
| 31 | `bool RequestUserInformation( CSteamID steamIDUser, bool bRequireNameOnly )` |
| 32 | `SteamAPICall_t RequestClanOfficerList( CSteamID steamIDClan )` |
| 33 | `CSteamID GetClanOwner( CSteamID steamIDClan )` |
| 34 | `int GetClanOfficerCount( CSteamID steamIDClan )` |
| 35 | `CSteamID GetClanOfficerByIndex( CSteamID steamIDClan, int iOfficer )` |
| 36 | `EUserRestriction GetUserRestrictions_old()` |
| 37 | `bool SetRichPresence( const char *pchKey, const char *pchValue )` |
| 38 | `void ClearRichPresence()` |
| 39 | `const char *GetFriendRichPresence( CSteamID steamIDFriend, const char *pchKey )` |
| 40 | `int GetFriendRichPresenceKeyCount( CSteamID steamIDFriend )` |
| 41 | `const char *GetFriendRichPresenceKeyByIndex( CSteamID steamIDFriend, int iKey )` |
| 42 | `bool InviteUserToGame( CSteamID steamIDFriend, const char *pchConnectString )` |
| 43 | `int GetCoplayFriendCount()` |
| 44 | `CSteamID GetCoplayFriend( int iCoplayFriend )` |
| 45 | `int GetFriendCoplayTime( CSteamID steamIDFriend )` |
| 46 | `AppId_t GetFriendCoplayGame( CSteamID steamIDFriend )` |
| 47 | `SteamAPICall_t JoinClanChatRoom( CSteamID groupID )` |
| 48 | `bool LeaveClanChatRoom( CSteamID groupID )` |
| 49 | `int GetClanChatMemberCount( CSteamID groupID )` |
| 50 | `CSteamID GetChatMemberByIndex( CSteamID groupID, int iIndex )` |
| 51 | `bool SendClanChatMessage( CSteamID groupID, const char *cszMessage )` |
| 52 | `int GetClanChatMessage( CSteamID groupID, int iChatID, void *pvData, int cubData, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter )` |
| 53 | `bool IsClanChatAdmin( CSteamID groupID, CSteamID userID )` |
| 54 | `bool IsClanChatWindowOpenInSteam( CSteamID groupID )` |
| 55 | `bool OpenClanChatWindowInSteam( CSteamID groupID )` |
| 56 | `bool CloseClanChatWindowInSteam( CSteamID groupID )` |
| 57 | `bool SetListenForFriendsMessages( bool bListen )` |
| 58 | `bool ReplyToFriendMessage( CSteamID friendID, const char *cszMessage )` |
| 59 | `int GetFriendMessage( CSteamID friendID, int iChatID, void *pvData, int cubData, EChatEntryType *peChatEntryType )` |

</details>
<!-- #endregion -->

<!-- #region 011 -->
<details style="margin-left: 20px">
<summary><b><code>011</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `void SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 12 | `int GetClanCount()` |
| 13 | `CSteamID GetClanByIndex(int iClan)` |
| 14 | `const char *GetClanName(CSteamID steamIDClan)` |
| 15 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 16 | `bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)` |
| 17 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans, int cClansToRequest)` |
| 18 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 19 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 20 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 21 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 22 | `void ActivateGameOverlay(const char *pchDialog)` |
| 23 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 24 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 25 | `void ActivateGameOverlayToStore(AppId_t nAppID)` |
| 26 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 27 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 28 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 29 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 30 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 31 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 32 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 33 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 34 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 35 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 36 | `uint32 GetUserRestrictions()` |
| 37 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 38 | `void ClearRichPresence()` |
| 39 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 40 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 41 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 42 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` |
| 43 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 44 | `int GetCoplayFriendCount()` |
| 45 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 46 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 47 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |
| 48 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` |
| 49 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` |
| 50 | `int GetClanChatMemberCount(CSteamID steamIDClan)` |
| 51 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` |
| 52 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` |
| 53 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *, CSteamID *)` |
| 54 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` |
| 55 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` |
| 56 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 57 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 58 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` |
| 59 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` |
| 60 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` |
| 61 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` |
| 62 | `SteamAPICall_t IsFollowing(CSteamID steamID)` |
| 63 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` |

</details>
<!-- #endregion -->

<!-- #region 012 -->
<details style="margin-left: 20px">
<summary><b><code>012</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `SteamAPICall_t SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 12 | `int GetClanCount()` |
| 13 | `CSteamID GetClanByIndex(int iClan)` |
| 14 | `const char *GetClanName(CSteamID steamIDClan)` |
| 15 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 16 | `bool GetClanActivityCounts(CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting)` |
| 17 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID groupIDs[], int nIds)` |
| 18 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 19 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 20 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 21 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 22 | `void ActivateGameOverlay(const char *pchDialog)` |
| 23 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 24 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 25 | `void ActivateGameOverlayToStore(AppId_t nAppID)` |
| 26 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 27 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 28 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 29 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 30 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 31 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 32 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 33 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 34 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 35 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 36 | `EUserRestriction GetUserRestrictions_old()` |
| 37 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 38 | `void ClearRichPresence()` |
| 39 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 40 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 41 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 42 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` |
| 43 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 44 | `int GetCoplayFriendCount()` |
| 45 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 46 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 47 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |
| 48 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` |
| 49 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` |
| 50 | `int GetClanChatMemberCount(CSteamID steamIDClan)` |
| 51 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` |
| 52 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` |
| 53 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter)` |
| 54 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` |
| 55 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` |
| 56 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 57 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 58 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` |
| 59 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` |
| 60 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` |
| 61 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` |
| 62 | `SteamAPICall_t IsFollowing(CSteamID steamID)` |
| 63 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` |

</details>
<!-- #endregion -->

<!-- #region 013 -->
<details style="margin-left: 20px">
<summary><b><code>013</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `SteamAPICall_t SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 12 | `int GetClanCount()` |
| 13 | `CSteamID GetClanByIndex(int iClan)` |
| 14 | `const char *GetClanName(CSteamID steamIDClan)` |
| 15 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 16 | `bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)` |
| 17 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans, int cClansToRequest)` |
| 18 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 19 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 20 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 21 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 22 | `void ActivateGameOverlay(const char *pchDialog)` |
| 23 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 24 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 25 | `void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)` |
| 26 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 27 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 28 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 29 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 30 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 31 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 32 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 33 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 34 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 35 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 36 | `uint32 GetUserRestrictions()` |
| 37 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 38 | `void ClearRichPresence()` |
| 39 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 40 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 41 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 42 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` |
| 43 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 44 | `int GetCoplayFriendCount()` |
| 45 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 46 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 47 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |
| 48 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` |
| 49 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` |
| 50 | `int GetClanChatMemberCount(CSteamID steamIDClan)` |
| 51 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` |
| 52 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` |
| 53 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *, CSteamID *)` |
| 54 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` |
| 55 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` |
| 56 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 57 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 58 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` |
| 59 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` |
| 60 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` |
| 61 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` |
| 62 | `SteamAPICall_t IsFollowing(CSteamID steamID)` |
| 63 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` |

</details>
<!-- #endregion -->

<!-- #region 014 -->
<details style="margin-left: 20px">
<summary><b><code>014</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `SteamAPICall_t SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `const char *GetPlayerNickname(CSteamID steamIDPlayer)` |
| 12 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 13 | `int GetClanCount()` |
| 14 | `CSteamID GetClanByIndex(int iClan)` |
| 15 | `const char *GetClanName(CSteamID steamIDClan)` |
| 16 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 17 | `bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)` |
| 18 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans, int cClansToRequest)` |
| 19 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 20 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 21 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 22 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 23 | `void ActivateGameOverlay(const char *pchDialog)` |
| 24 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 25 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 26 | `void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)` |
| 27 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 28 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 29 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 30 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 31 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 32 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 33 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 34 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 35 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 36 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 37 | `uint32 GetUserRestrictions()` |
| 38 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 39 | `void ClearRichPresence()` |
| 40 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 41 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 42 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 43 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` |
| 44 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 45 | `int GetCoplayFriendCount()` |
| 46 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 47 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 48 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |
| 49 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` |
| 50 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` |
| 51 | `int GetClanChatMemberCount(CSteamID steamIDClan)` |
| 52 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` |
| 53 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` |
| 54 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)` |
| 55 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` |
| 56 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` |
| 57 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 58 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 59 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` |
| 60 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` |
| 61 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` |
| 62 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` |
| 63 | `SteamAPICall_t IsFollowing(CSteamID steamID)` |
| 64 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` |

</details>
<!-- #endregion -->

<!-- #region 015 -->
<details style="margin-left: 20px">
<summary><b><code>015</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `SteamAPICall_t SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `int GetFriendSteamLevel(CSteamID steamIDFriend)` |
| 12 | `const char *GetPlayerNickname(CSteamID steamIDPlayer)` |
| 13 | `int GetFriendsGroupCount()` |
| 14 | `FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG)` |
| 15 | `const char *GetFriendsGroupName(FriendsGroupID_t friendsGroupID)` |
| 16 | `int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID)` |
| 17 | `void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID *pOutSteamIDMembers, int nMembersCount)` |
| 18 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 19 | `int GetClanCount()` |
| 20 | `CSteamID GetClanByIndex(int iClan)` |
| 21 | `const char *GetClanName(CSteamID steamIDClan)` |
| 22 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 23 | `bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)` |
| 24 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans, int cClansToRequest)` |
| 25 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 26 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 27 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 28 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 29 | `void ActivateGameOverlay(const char *pchDialog)` |
| 30 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 31 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 32 | `void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)` |
| 33 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 34 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 35 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 36 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 37 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 38 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 39 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 40 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 41 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 42 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 43 | `uint32 GetUserRestrictions()` |
| 44 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 45 | `void ClearRichPresence()` |
| 46 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 47 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 48 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 49 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` |
| 50 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 51 | `int GetCoplayFriendCount()` |
| 52 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 53 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 54 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |
| 55 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` |
| 56 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` |
| 57 | `int GetClanChatMemberCount(CSteamID steamIDClan)` |
| 58 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` |
| 59 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` |
| 60 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)` |
| 61 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` |
| 62 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` |
| 63 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 64 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 65 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` |
| 66 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` |
| 67 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` |
| 68 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` |
| 69 | `SteamAPICall_t IsFollowing(CSteamID steamID)` |
| 70 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` |
| 71 | `bool IsClanPublic(CSteamID steamIDClan)` |
| 72 | `bool IsClanOfficialGameGroup(CSteamID steamIDClan)` |

</details>
<!-- #endregion -->

<!-- #region 016 -->
<details style="margin-left: 20px">
<summary><b><code>016</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `SteamAPICall_t SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `int GetFriendSteamLevel(CSteamID steamIDFriend)` |
| 12 | `const char *GetPlayerNickname(CSteamID steamIDPlayer)` |
| 13 | `int GetFriendsGroupCount()` |
| 14 | `FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG)` |
| 15 | `const char *GetFriendsGroupName(FriendsGroupID_t friendsGroupID)` |
| 16 | `int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID)` |
| 17 | `void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID *pOutSteamIDMembers, int nMembersCount)` |
| 18 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 19 | `int GetClanCount()` |
| 20 | `CSteamID GetClanByIndex(int iClan)` |
| 21 | `const char *GetClanName(CSteamID steamIDClan)` |
| 22 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 23 | `bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)` |
| 24 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans, int cClansToRequest)` |
| 25 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 26 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 27 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 28 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 29 | `void ActivateGameOverlay(const char *pchDialog)` |
| 30 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 31 | `void ActivateGameOverlayToWebPage(const char *pchURL)` |
| 32 | `void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)` |
| 33 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 34 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 35 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 36 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 37 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 38 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 39 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 40 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 41 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 42 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 43 | `uint32 GetUserRestrictions()` |
| 44 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 45 | `void ClearRichPresence()` |
| 46 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 47 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 48 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 49 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` |
| 50 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 51 | `int GetCoplayFriendCount()` |
| 52 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 53 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 54 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |
| 55 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` |
| 56 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` |
| 57 | `int GetClanChatMemberCount(CSteamID steamIDClan)` |
| 58 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` |
| 59 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` |
| 60 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)` |
| 61 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` |
| 62 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` |
| 63 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 64 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 65 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` |
| 66 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` |
| 67 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` |
| 68 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` |
| 69 | `SteamAPICall_t IsFollowing(CSteamID steamID)` |
| 70 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` |
| 71 | `bool IsClanPublic(CSteamID steamIDClan)` |
| 72 | `bool IsClanOfficialGameGroup(CSteamID steamIDClan)` |
| 73 | `int GetNumChatsWithUnreadPriorityMessages()` |

</details>
<!-- #endregion -->

<!-- #region 017 -->
<details style="margin-left: 20px">
<summary><b><code>017</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `SteamAPICall_t SetPersonaName(const char *pchPersonaName)` |
| 3 | `EPersonaState GetPersonaState()` |
| 4 | `int GetFriendCount(int iFriendFlags)` |
| 5 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 6 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 7 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 8 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 9 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 10 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 11 | `int GetFriendSteamLevel(CSteamID steamIDFriend)` |
| 12 | `const char *GetPlayerNickname(CSteamID steamIDPlayer)` |
| 13 | `int GetFriendsGroupCount()` |
| 14 | `FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG)` |
| 15 | `const char *GetFriendsGroupName(FriendsGroupID_t friendsGroupID)` |
| 16 | `int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID)` |
| 17 | `void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID *pOutSteamIDMembers, int nMembersCount)` |
| 18 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 19 | `int GetClanCount()` |
| 20 | `CSteamID GetClanByIndex(int iClan)` |
| 21 | `const char *GetClanName(CSteamID steamIDClan)` |
| 22 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 23 | `bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)` |
| 24 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans, int cClansToRequest)` |
| 25 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 26 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 27 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 28 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 29 | `void ActivateGameOverlay(const char *pchDialog)` |
| 30 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 31 | `void ActivateGameOverlayToWebPage(const char *pchURL, EActivateGameOverlayToWebPageMode eMode = k_EActivateGameOverlayToWebPageMode_Default)` |
| 32 | `void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)` |
| 33 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 34 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 35 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 36 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 37 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 38 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 39 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 40 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 41 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 42 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 43 | `uint32 GetUserRestrictions()` |
| 44 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 45 | `void ClearRichPresence()` |
| 46 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 47 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 48 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 49 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` |
| 50 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 51 | `int GetCoplayFriendCount()` |
| 52 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 53 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 54 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |
| 55 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` |
| 56 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` |
| 57 | `int GetClanChatMemberCount(CSteamID steamIDClan)` |
| 58 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` |
| 59 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` |
| 60 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)` |
| 61 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` |
| 62 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` |
| 63 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 64 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 65 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` |
| 66 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` |
| 67 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` |
| 68 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` |
| 69 | `SteamAPICall_t IsFollowing(CSteamID steamID)` |
| 70 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` |
| 71 | `bool IsClanPublic(CSteamID steamIDClan)` |
| 72 | `bool IsClanOfficialGameGroup(CSteamID steamIDClan)` |
| 73 | `int GetNumChatsWithUnreadPriorityMessages()` |
| 74 | `void ActivateGameOverlayRemotePlayTogetherInviteDialog(CSteamID steamIDLobby)` |
| 75 | `bool RegisterProtocolInOverlayBrowser(const char *pchProtocol)` |
| 76 | `void ActivateGameOverlayInviteDialogConnectString(const char *pchConnectString)` |
| 77 | `SteamAPICall_t RequestEquippedProfileItems(CSteamID steamID)` |
| 78 | `bool BHasEquippedProfileItem(CSteamID steamID, ECommunityProfileItemType itemType)` |
| 79 | `const char *GetProfileItemPropertyString(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)` |
| 80 | `uint32 GetProfileItemPropertyUint(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)` |

</details>
<!-- #endregion -->

<!-- #region 018 -->
<details style="margin-left: 20px">
<summary><b><code>018</code></b></summary>

|Num|Methods|
| :-: | :- |
| 1 | `const char *GetPersonaName()` |
| 2 | `EPersonaState GetPersonaState()` |
| 3 | `int GetFriendCount(int iFriendFlags)` |
| 4 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` |
| 5 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` |
| 6 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` |
| 7 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` |
| 8 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` |
| 9 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` |
| 10 | `int GetFriendSteamLevel(CSteamID steamIDFriend)` |
| 11 | `const char *GetPlayerNickname(CSteamID steamIDPlayer)` |
| 12 | `int GetFriendsGroupCount()` |
| 13 | `FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG)` |
| 14 | `const char *GetFriendsGroupName(FriendsGroupID_t friendsGroupID)` |
| 15 | `int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID)` |
| 16 | `void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID *pOutSteamIDMembers, int nMembersCount)` |
| 17 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` |
| 18 | `int GetClanCount()` |
| 19 | `CSteamID GetClanByIndex(int iClan)` |
| 20 | `const char *GetClanName(CSteamID steamIDClan)` |
| 21 | `const char *GetClanTag(CSteamID steamIDClan)` |
| 22 | `bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)` |
| 23 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans, int cClansToRequest)` |
| 24 | `int GetFriendCountFromSource(CSteamID steamIDSource)` |
| 25 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` |
| 26 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` |
| 27 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` |
| 28 | `void ActivateGameOverlay(const char *pchDialog)` |
| 29 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` |
| 30 | `void ActivateGameOverlayToWebPage(const char *pchURL, EActivateGameOverlayToWebPageMode eMode = k_EActivateGameOverlayToWebPageMode_Default)` |
| 31 | `void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)` |
| 32 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` |
| 33 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` |
| 34 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` |
| 35 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` |
| 36 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` |
| 37 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` |
| 38 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` |
| 39 | `CSteamID GetClanOwner(CSteamID steamIDClan)` |
| 40 | `int GetClanOfficerCount(CSteamID steamIDClan)` |
| 41 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` |
| 42 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` |
| 43 | `void ClearRichPresence()` |
| 44 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` |
| 45 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` |
| 46 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` |
| 47 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` |
| 48 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` |
| 49 | `int GetCoplayFriendCount()` |
| 50 | `CSteamID GetCoplayFriend(int iCoplayFriend)` |
| 51 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` |
| 52 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` |
| 53 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` |
| 54 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` |
| 55 | `int GetClanChatMemberCount(CSteamID steamIDClan)` |
| 56 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` |
| 57 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` |
| 58 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)` |
| 59 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` |
| 60 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` |
| 61 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 62 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` |
| 63 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` |
| 64 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` |
| 65 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` |
| 66 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` |
| 67 | `SteamAPICall_t IsFollowing(CSteamID steamID)` |
| 68 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` |
| 69 | `bool IsClanPublic(CSteamID steamIDClan)` |
| 70 | `bool IsClanOfficialGameGroup(CSteamID steamIDClan)` |
| 71 | `int GetNumChatsWithUnreadPriorityMessages()` |
| 72 | `void ActivateGameOverlayRemotePlayTogetherInviteDialog(CSteamID steamIDLobby)` |
| 73 | `bool RegisterProtocolInOverlayBrowser(const char *pchProtocol)` |
| 74 | `void ActivateGameOverlayInviteDialogConnectString(const char *pchConnectString)` |
| 75 | `SteamAPICall_t RequestEquippedProfileItems(CSteamID steamID)` |
| 76 | `bool BHasEquippedProfileItem(CSteamID steamID, ECommunityProfileItemType itemType)` |
| 77 | `const char *GetProfileItemPropertyString(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)` |
| 78 | `uint32 GetProfileItemPropertyUint(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|Num|Methods|I. Versions|
| :-: | :- | :- |
| 1 | `void ActivateGameOverlay(const char *pchDialog)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 2 | `void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)` | `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 3 | `void ActivateGameOverlayInviteDialogConnectString(const char *pchConnectString)` | `017`, `018` |
| 4 | `void ActivateGameOverlayRemotePlayTogetherInviteDialog(CSteamID steamIDLobby)` | `017`, `018` |
| 5 | `void ActivateGameOverlayToStore(AppId_t nAppID)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012` |
| 6 | `void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)` | `013`, `014`, `015`, `016`, `017`, `018` |
| 7 | `void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 8 | `void ActivateGameOverlayToWebPage(const char *pchURL)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016` |
| 9 | `void ActivateGameOverlayToWebPage(const char *pchURL, EActivateGameOverlayToWebPageMode eMode = k_EActivateGameOverlayToWebPageMode_Default)` | `017`, `018` |
| 10 | `bool BHasEquippedProfileItem(CSteamID steamID, ECommunityProfileItemType itemType)` | `017`, `018` |
| 11 | `void ClearRichPresence()` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 12 | `bool CloseClanChatWindowInSteam( CSteamID groupID )` | `010` |
| 13 | `bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 14 | `SteamAPICall_t DownloadClanActivityCounts( CSteamID groupIDs[], int nIds )` | `010`, `012` |
| 15 | `SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans, int cClansToRequest)` | `011`, `013`, `014`, `015`, `016`, `017`, `018` |
| 16 | `SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 17 | `CSteamID GetChatMemberByIndex( CSteamID groupID, int iIndex )` | `010` |
| 18 | `CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 19 | `bool GetClanActivityCounts( CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting )` | `010`, `012` |
| 20 | `bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)` | `011`, `013`, `014`, `015`, `016`, `017`, `018` |
| 21 | `CSteamID GetClanByIndex(int iClan)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 22 | `int GetClanChatMemberCount( CSteamID groupID )` | `010` |
| 23 | `int GetClanChatMemberCount(CSteamID steamIDClan)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 24 | `int GetClanChatMessage( CSteamID groupID, int iChatID, void *pvData, int cubData, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter )` | `010` |
| 25 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *, CSteamID *)` | `011`, `013` |
| 26 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter)` | `012` |
| 27 | `int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)` | `014`, `015`, `016`, `017`, `018` |
| 28 | `int GetClanCount()` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 29 | `const char *GetClanName(CSteamID steamIDClan)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 30 | `CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)` | `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 31 | `int GetClanOfficerCount(CSteamID steamIDClan)` | `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 32 | `CSteamID GetClanOwner(CSteamID steamIDClan)` | `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 33 | `const char *GetClanTag(CSteamID steamIDClan)` | `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 34 | `CSteamID GetCoplayFriend(int iCoplayFriend)` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 35 | `int GetCoplayFriendCount()` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 36 | `SteamAPICall_t GetFollowerCount(CSteamID steamID)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 37 | `int GetFriendAvatar(CSteamID steamIDFriend)` | `003` |
| 38 | `int GetFriendAvatar(CSteamID steamIDFriend, int eAvatarSize)` | `004`, `005`, `006` |
| 39 | `CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 40 | `AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 41 | `int GetFriendCoplayTime(CSteamID steamIDFriend)` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 42 | `int GetFriendCount(int iFriendFlags)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 43 | `int GetFriendCountFromSource(CSteamID steamIDSource)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 44 | `CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 45 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)` | `003`, `004` |
| 46 | `bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 47 | `int GetFriendMessage( CSteamID friendID, int iChatID, void *pvData, int cubData, EChatEntryType *peChatEntryType )` | `010` |
| 48 | `int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 49 | `const char *GetFriendPersonaName(CSteamID steamIDFriend)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 50 | `const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 51 | `EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 52 | `EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 53 | `const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 54 | `const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 55 | `int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 56 | `int GetFriendsGroupCount()` | `015`, `016`, `017`, `018` |
| 57 | `FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG)` | `015`, `016`, `017`, `018` |
| 58 | `int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID)` | `015`, `016`, `017`, `018` |
| 59 | `void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID *pOutSteamIDMembers, int nMembersCount)` | `015`, `016`, `017`, `018` |
| 60 | `const char *GetFriendsGroupName(FriendsGroupID_t friendsGroupID)` | `015`, `016`, `017`, `018` |
| 61 | `int GetFriendSteamLevel(CSteamID steamIDFriend)` | `015`, `016`, `017`, `018` |
| 62 | `int GetLargeFriendAvatar(CSteamID steamIDFriend)` | `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 63 | `int GetMediumFriendAvatar(CSteamID steamIDFriend)` | `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 64 | `int GetNumChatsWithUnreadPriorityMessages()` | `016`, `017`, `018` |
| 65 | `const char *GetPersonaName()` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 66 | `EPersonaState GetPersonaState()` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 67 | `const char *GetPlayerNickname(CSteamID steamIDPlayer)` | `014`, `015`, `016`, `017`, `018` |
| 68 | `const char *GetProfileItemPropertyString(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)` | `017`, `018` |
| 69 | `uint32 GetProfileItemPropertyUint(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)` | `017`, `018` |
| 70 | `int GetSmallFriendAvatar(CSteamID steamIDFriend)` | `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 71 | `uint32 GetUserRestrictions()` | `008`, `009`, `011`, `013`, `014`, `015`, `016`, `017` |
| 72 | `EUserRestriction GetUserRestrictions_old()` | `010`, `012` |
| 73 | `bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 74 | `bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 75 | `bool IsClanChatAdmin( CSteamID groupID, CSteamID userID )` | `010` |
| 76 | `bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 77 | `bool IsClanChatWindowOpenInSteam( CSteamID groupID )` | `010` |
| 78 | `bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 79 | `bool IsClanOfficialGameGroup(CSteamID steamIDClan)` | `015`, `016`, `017`, `018` |
| 80 | `bool IsClanPublic(CSteamID steamIDClan)` | `015`, `016`, `017`, `018` |
| 81 | `SteamAPICall_t IsFollowing(CSteamID steamID)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 82 | `bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 83 | `SteamAPICall_t JoinClanChatRoom( CSteamID groupID )` | `010` |
| 84 | `SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 85 | `bool LeaveClanChatRoom( CSteamID groupID )` | `010` |
| 86 | `bool LeaveClanChatRoom(CSteamID steamIDClan)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 87 | `bool OpenClanChatWindowInSteam( CSteamID groupID )` | `010` |
| 88 | `bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 89 | `bool RegisterProtocolInOverlayBrowser(const char *pchProtocol)` | `017`, `018` |
| 90 | `bool ReplyToFriendMessage( CSteamID friendID, const char *cszMessage )` | `010` |
| 91 | `bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 92 | `SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)` | `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 93 | `SteamAPICall_t RequestEquippedProfileItems(CSteamID steamID)` | `017`, `018` |
| 94 | `void RequestFriendRichPresence(CSteamID steamIDFriend)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 95 | `bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)` | `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 96 | `bool SendClanChatMessage( CSteamID groupID, const char *cszMessage )` | `010` |
| 97 | `bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 98 | `void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 99 | `bool SetListenForFriendsMessages( bool bListen )` | `010` |
| 100 | `bool SetListenForFriendsMessages(bool bInterceptEnabled)` | `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 101 | `void SetPersonaName(const char *pchPersonaName)` | `003`, `004`, `005`, `006`, `007`, `008`, `009`, `011` |
| 102 | `SteamAPICall_t SetPersonaName(const char *pchPersonaName)` | `012`, `013`, `014`, `015`, `016`, `017` |
| 103 | `void SetPersonaName_old( const char *pchPersonaName )` | `010` |
| 104 | `void SetPlayedWith(CSteamID steamIDUserPlayedWith)` | `005`, `006`, `007`, `008`, `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |
| 105 | `bool SetRichPresence(const char *pchKey, const char *pchValue)` | `009`, `010`, `011`, `012`, `013`, `014`, `015`, `016`, `017`, `018` |

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
class ISteamFriends;
```

Интерфейс для доступа к информации об отдельных пользователях и взаимодействия с оверлеем.

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