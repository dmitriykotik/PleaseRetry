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

# ISteamMatchmaking

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |   O    |
|   002   |  101   |
|   003   |   G    |
|   004   |  102   |
|   005   |   G    |
|   006   |  104   |
|   007   |  107   |
|   008   |  116   |
|   009   |  165   |

```
001 - O
002 - 100, 101, G
003 - G
004 - 102, G
005 - G
006 - 103, 104, G
007 - 105, 106, 107, G
008 - 108, 109, 110, 111, 112, 113, 114, 115, 116, G
009 - 117, 118, 119, 120, 121, 122, 123a, 125, 126a, 127, 128, 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)`                       |
|   3   | `int AddFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                                             |
|   4   | `bool RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags)`                                                                           |
|   5   | `bool GetFavoriteGame2(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   6   | `int AddFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   7   | `bool RemoveFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   8   | `void RequestLobbyList(uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters)`                                                                   |
|   9   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|  10   | `void CreateLobby(uint64 ulGameID, bool bPrivate)`                                                                                                               |
|  11   | `void JoinLobby(CSteamID steamIDLobby)`                                                                                                                          |
|  12   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  13   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  14   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  15   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  16   | `const char *GetLobbyData(CSteamID SteamIDLobby, const char *pchKey)`                                                                                            |
|  17   | `void SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  18   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  19   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  20   | `void ChangeLobbyAdmin(CSteamID steamIDLobby, CSteamID steamIDNewAdmin)`                                                                                         |
|  21   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  22   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  23   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   3   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   4   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   5   | `void RequestLobbyList()`                                                                                                                                        |
|   6   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|   7   | `void CreateLobby(bool bPrivate)`                                                                                                                                |
|   8   | `void JoinLobby(CSteamID steamIDLobby)`                                                                                                                          |
|   9   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  10   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  11   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  12   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  13   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            |
|  14   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  15   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  16   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  17   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  18   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  19   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |
|  20   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   3   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   4   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   5   | `void RequestLobbyList_OLD()`                                                                                                                                    |
|   6   | `void AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)`                                                                         |
|   7   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)`                                                     |
|   8   | `void AddRequestLobbyListSlotsAvailableFilter()`                                                                                                                 |
|   9   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|  10   | `void CreateLobby(bool bPrivate)`                                                                                                                                |
|  11   | `void JoinLobby_OLD(CSteamID steamIDLobby)`                                                                                                                      |
|  12   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  13   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  14   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  15   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  16   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            |
|  17   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  18   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  19   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  20   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  21   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  22   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |
|  23   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     |
|  24   | `bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)`                               |
|  25   | `bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)`                                                                                               |
|  26   | `int GetLobbyMemberLimit(CSteamID steamIDLobby)`                                                                                                                 |
|  27   | `void SetLobbyVoiceEnabled(CSteamID steamIDLobby, bool bVoiceEnabled)`                                                                                           |
|  28   | `bool RequestFriendsLobbies()`                                                                                                                                   |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   3   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   4   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   5   | `void RequestLobbyList()`                                                                                                                                        |
|   6   | `void AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)`                                                                         |
|   7   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)`                                                     |
|   8   | `void AddRequestLobbyListSlotsAvailableFilter()`                                                                                                                 |
|   9   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|  10   | `void CreateLobby(bool bPrivate)`                                                                                                                                |
|  11   | `void JoinLobby(CSteamID steamIDLobby)`                                                                                                                          |
|  12   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  13   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  14   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  15   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  16   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            |
|  17   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  18   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  19   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  20   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  21   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  22   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |
|  23   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     |
|  24   | `bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)`                               |
|  25   | `bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)`                                                                                               |
|  26   | `int GetLobbyMemberLimit(CSteamID steamIDLobby)`                                                                                                                 |
|  27   | `bool RequestFriendsLobbies()`                                                                                                                                   |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   3   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   4   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   5   | `void RequestLobbyList_OLD()`                                                                                                                                    |
|   6   | `void AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)`                                                                         |
|   7   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)`                                                     |
|   8   | `void AddRequestLobbyListSlotsAvailableFilter()`                                                                                                                 |
|   9   | `void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)`                                                                      |
|  10   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|  11   | `void CreateLobby_OLD(ELobbyType eLobbyType)`                                                                                                                    |
|  12   | `void JoinLobby_OLD(CSteamID steamIDLobby)`                                                                                                                      |
|  13   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  14   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  15   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  16   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  17   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            |
|  18   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  19   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  20   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  21   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  22   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  23   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |
|  24   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     |
|  25   | `bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)`                               |
|  26   | `bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)`                                                                                               |
|  27   | `int GetLobbyMemberLimit(CSteamID steamIDLobby)`                                                                                                                 |
|  28   | `bool RequestFriendsLobbies()`                                                                                                                                   |
|  29   | `bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)`                                                                                                |
|  30   | `CSteamID GetLobbyOwner(CSteamID steamIDLobby)`                                                                                                                  |
|  31   | `float GetLobbyDistance(CSteamID steamIDLobby)`                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   3   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   4   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   5   | `SteamAPICall_t RequestLobbyList()`                                                                                                                              |
|   6   | `void AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)`                                                                         |
|   7   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)`                                                     |
|   8   | `void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)`                                                                      |
|   9   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|  10   | `SteamAPICall_t CreateLobby(ELobbyType eLobbyType)`                                                                                                              |
|  11   | `SteamAPICall_t JoinLobby(CSteamID steamIDLobby)`                                                                                                                |
|  12   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  13   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  14   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  15   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  16   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            |
|  17   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  18   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  19   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  20   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  21   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  22   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |
|  23   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     |
|  24   | `bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)`                               |
|  25   | `bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)`                                                                                               |
|  26   | `int GetLobbyMemberLimit(CSteamID steamIDLobby)`                                                                                                                 |
|  27   | `bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)`                                                                                                |
|  28   | `CSteamID GetLobbyOwner(CSteamID steamIDLobby)`                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   3   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   4   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   5   | `SteamAPICall_t RequestLobbyList()`                                                                                                                              |
|   6   | `void AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)`                                 |
|   7   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)`                                        |
|   8   | `void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)`                                                                      |
|   9   | `void AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)`                                                                                              |
|  10   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|  11   | `SteamAPICall_t CreateLobby(ELobbyType eLobbyType, int cMaxMembers)`                                                                                             |
|  12   | `SteamAPICall_t JoinLobby(CSteamID steamIDLobby)`                                                                                                                |
|  13   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  14   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  15   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  16   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  17   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            |
|  18   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  19   | `int GetLobbyDataCount(CSteamID steamIDLobby)`                                                                                                                   |
|  20   | `bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)`                    |
|  21   | `bool DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                                |
|  22   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  23   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  24   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  25   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  26   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |
|  27   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     |
|  28   | `bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)`                               |
|  29   | `bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)`                                                                                               |
|  30   | `int GetLobbyMemberLimit(CSteamID steamIDLobby)`                                                                                                                 |
|  31   | `bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)`                                                                                                |
|  32   | `bool SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)`                                                                                              |
|  33   | `CSteamID GetLobbyOwner(CSteamID steamIDLobby)`                                                                                                                  |
|  34   | `bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)`                                                                                            |

</details>
<!-- #endregion -->

<!-- #region 008 -->
<details style="margin-left: 20px">
<summary><b><code>008</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   3   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   4   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   5   | `SteamAPICall_t RequestLobbyList()`                                                                                                                              |
|   6   | `void AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)`                                 |
|   7   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)`                                        |
|   8   | `void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)`                                                                      |
|   9   | `void AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)`                                                                                              |
|  10   | `void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)`                                                                              |
|  11   | `void AddRequestLobbyListResultCountFilter(int cMaxResults)`                                                                                                     |
|  12   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|  13   | `SteamAPICall_t CreateLobby(ELobbyType eLobbyType, int cMaxMembers)`                                                                                             |
|  14   | `SteamAPICall_t JoinLobby(CSteamID steamIDLobby)`                                                                                                                |
|  15   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  16   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  17   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  18   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  19   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            |
|  20   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  21   | `int GetLobbyDataCount(CSteamID steamIDLobby)`                                                                                                                   |
|  22   | `bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)`                    |
|  23   | `bool DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                                |
|  24   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  25   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  26   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  27   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  28   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |
|  29   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     |
|  30   | `bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)`                               |
|  31   | `bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)`                                                                                               |
|  32   | `int GetLobbyMemberLimit(CSteamID steamIDLobby)`                                                                                                                 |
|  33   | `bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)`                                                                                                |
|  34   | `bool SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)`                                                                                              |
|  35   | `CSteamID GetLobbyOwner(CSteamID steamIDLobby)`                                                                                                                  |
|  36   | `bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)`                                                                                            |
|  37   | `void CheckForPSNGameBootInvite(unsigned int iGameBootAttributes)`                                                                                               |

</details>
<!-- #endregion -->

<!-- #region 009 -->
<details style="margin-left: 20px">
<summary><b><code>009</code></b></summary>

|  Num  | Methods                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `int GetFavoriteGameCount()`                                                                                                                                     |
|   2   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` |
|   3   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         |
|   4   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       |
|   5   | `SteamAPICall_t RequestLobbyList()`                                                                                                                              |
|   6   | `void AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)`                                 |
|   7   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)`                                        |
|   8   | `void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)`                                                                      |
|   9   | `void AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)`                                                                                              |
|  10   | `void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)`                                                                              |
|  11   | `void AddRequestLobbyListResultCountFilter(int cMaxResults)`                                                                                                     |
|  12   | `void AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby)`                                                                                         |
|  13   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           |
|  14   | `SteamAPICall_t CreateLobby(ELobbyType eLobbyType, int cMaxMembers)`                                                                                             |
|  15   | `SteamAPICall_t JoinLobby(CSteamID steamIDLobby)`                                                                                                                |
|  16   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         |
|  17   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         |
|  18   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  |
|  19   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             |
|  20   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            |
|  21   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             |
|  22   | `int GetLobbyDataCount(CSteamID steamIDLobby)`                                                                                                                   |
|  23   | `bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)`                    |
|  24   | `bool DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                                |
|  25   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                |
|  26   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       |
|  27   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            |
|  28   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  |
|  29   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   |
|  30   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     |
|  31   | `bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)`                               |
|  32   | `bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)`                                                                                               |
|  33   | `int GetLobbyMemberLimit(CSteamID steamIDLobby)`                                                                                                                 |
|  34   | `bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)`                                                                                                |
|  35   | `bool SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)`                                                                                              |
|  36   | `CSteamID GetLobbyOwner(CSteamID steamIDLobby)`                                                                                                                  |
|  37   | `bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)`                                                                                            |
|  38   | `bool SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent)`                                                                                     |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                          | I. Versions                                                   |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------ |
|   1   | `int AddFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                                             | `001`                                                         |
|   2   | `int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`        |
|   3   | `int AddFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)`                         | `001`                                                         |
|   4   | `void AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby)`                                                                                         | `009`                                                         |
|   5   | `void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)`                                                                              | `008`, `009`                                                  |
|   6   | `void AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)`                                                                         | `003`, `004`, `005`, `006`                                    |
|   7   | `void AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)`                                                                                              | `007`, `008`, `009`                                           |
|   8   | `void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)`                                                                      | `005`, `006`, `007`, `008`, `009`                             |
|   9   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)`                                                     | `003`, `004`, `005`, `006`                                    |
|  10   | `void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)`                                        | `007`, `008`, `009`                                           |
|  11   | `void AddRequestLobbyListResultCountFilter(int cMaxResults)`                                                                                                     | `008`, `009`                                                  |
|  12   | `void AddRequestLobbyListSlotsAvailableFilter()`                                                                                                                 | `003`, `004`, `005`                                           |
|  13   | `void AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)`                                 | `007`, `008`, `009`                                           |
|  14   | `void ChangeLobbyAdmin(CSteamID steamIDLobby, CSteamID steamIDNewAdmin)`                                                                                         | `001`                                                         |
|  15   | `void CheckForPSNGameBootInvite(unsigned int iGameBootAttributes)`                                                                                               | `008`                                                         |
|  16   | `void CreateLobby(uint64 ulGameID, bool bPrivate)`                                                                                                               | `001`                                                         |
|  17   | `void CreateLobby(bool bPrivate)`                                                                                                                                | `002`, `003`, `004`                                           |
|  18   | `SteamAPICall_t CreateLobby(ELobbyType eLobbyType)`                                                                                                              | `006`                                                         |
|  19   | `SteamAPICall_t CreateLobby(ELobbyType eLobbyType, int cMaxMembers)`                                                                                             | `007`, `008`, `009`                                           |
|  20   | `void CreateLobby_OLD(ELobbyType eLobbyType)`                                                                                                                    | `005`                                                         |
|  21   | `bool DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                                | `007`, `008`, `009`                                           |
|  22   | `bool GetFavoriteGame(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)`                       | `001`                                                         |
|  23   | `bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`        |
|  24   | `bool GetFavoriteGame2(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)` | `001`                                                         |
|  25   | `int GetFavoriteGameCount()`                                                                                                                                     | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  26   | `CSteamID GetLobbyByIndex(int iLobby)`                                                                                                                           | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  27   | `int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)`                  | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  28   | `const char *GetLobbyData(CSteamID SteamIDLobby, const char *pchKey)`                                                                                            | `001`                                                         |
|  29   | `const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)`                                                                                            | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`        |
|  30   | `bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)`                    | `007`, `008`, `009`                                           |
|  31   | `int GetLobbyDataCount(CSteamID steamIDLobby)`                                                                                                                   | `007`, `008`, `009`                                           |
|  32   | `float GetLobbyDistance(CSteamID steamIDLobby)`                                                                                                                  | `005`                                                         |
|  33   | `bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)`                               | `003`, `004`, `005`, `006`, `007`, `008`, `009`               |
|  34   | `CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)`                                                                                             | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  35   | `const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)`                                                                | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  36   | `int GetLobbyMemberLimit(CSteamID steamIDLobby)`                                                                                                                 | `003`, `004`, `005`, `006`, `007`, `008`, `009`               |
|  37   | `CSteamID GetLobbyOwner(CSteamID steamIDLobby)`                                                                                                                  | `005`, `006`, `007`, `008`, `009`                             |
|  38   | `int GetNumLobbyMembers(CSteamID steamIDLobby)`                                                                                                                  | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  39   | `bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)`                                                                                         | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  40   | `void JoinLobby(CSteamID steamIDLobby)`                                                                                                                          | `001`, `002`, `004`                                           |
|  41   | `SteamAPICall_t JoinLobby(CSteamID steamIDLobby)`                                                                                                                | `006`, `007`, `008`, `009`                                    |
|  42   | `void JoinLobby_OLD(CSteamID steamIDLobby)`                                                                                                                      | `003`, `005`                                                  |
|  43   | `void LeaveLobby(CSteamID steamIDLobby)`                                                                                                                         | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  44   | `bool RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags)`                                                                           | `001`                                                         |
|  45   | `bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`        |
|  46   | `bool RemoveFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)`                                                       | `001`                                                         |
|  47   | `bool RequestFriendsLobbies()`                                                                                                                                   | `003`, `004`, `005`                                           |
|  48   | `bool RequestLobbyData(CSteamID steamIDLobby)`                                                                                                                   | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  49   | `void RequestLobbyList(uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters)`                                                                   | `001`                                                         |
|  50   | `void RequestLobbyList()`                                                                                                                                        | `002`, `004`                                                  |
|  51   | `SteamAPICall_t RequestLobbyList()`                                                                                                                              | `006`, `007`, `008`, `009`                                    |
|  52   | `void RequestLobbyList_OLD()`                                                                                                                                    | `003`, `005`                                                  |
|  53   | `bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)`                                                                            | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  54   | `bool SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent)`                                                                                     | `009`                                                         |
|  55   | `void SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             | `001`                                                         |
|  56   | `bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                             | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`        |
|  57   | `void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)`                                     | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009`        |
|  58   | `bool SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)`                                                                                              | `007`, `008`, `009`                                           |
|  59   | `void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)`                                                                       | `001`, `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|  60   | `bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)`                                                                                               | `003`, `004`, `005`, `006`, `007`, `008`, `009`               |
|  61   | `bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)`                                                                                            | `007`, `008`, `009`                                           |
|  62   | `bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)`                                                                                                | `005`, `006`, `007`, `008`, `009`                             |
|  63   | `void SetLobbyVoiceEnabled(CSteamID steamIDLobby, bool bVoiceEnabled)`                                                                                           | `003`                                                         |

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
class ISteamMatchmaking;
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