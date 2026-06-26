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

# ISteamApps

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | F. SDK | L. SDK | U. SDK |
| :-----: | :----: | :----: | :----: |
|   001   |   00   |   00   |   00   |
|   002   |   01   |   03   |   03   |
|   003   |   04   |   11   |   11   |
|   004   |   12   |   17   |   17   |
|   005   |   18   |   25   |   25   |
|   006   |   26   |   31   |   31   |
|   007   |   32   |   36   |   36   |
|   008   |   37   |   63   |   63   |
|   009   |   64   |   *    |  *64   |
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                               |
| :---: | :------------------------------------------------------------------------------------ |
|   1   | `int GetAppData(AppId_t nAppID, const char *pchKey, char *pchValue, int cchValueMax)` |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                   |
| :---: | :---------------------------------------- |
|   1   | `bool BIsSubscribed()`                    |
|   2   | `bool BIsLowViolence()`                   |
|   3   | `bool BIsCybercafe()`                     |
|   4   | `bool BIsVACBanned()`                     |
|   5   | `const char *GetCurrentGameLanguage()`    |
|   6   | `const char *GetAvailableGameLanguages()` |
|   7   | `bool BIsSubscribedApp(AppId_t appID)`    |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                   |
| :---: | :---------------------------------------- |
|   1   | `bool BIsSubscribed()`                    |
|   2   | `bool BIsLowViolence()`                   |
|   3   | `bool BIsCybercafe()`                     |
|   4   | `bool BIsVACBanned()`                     |
|   5   | `const char *GetCurrentGameLanguage()`    |
|   6   | `const char *GetAvailableGameLanguages()` |
|   7   | `bool BIsSubscribedApp(AppId_t appID)`    |
|   8   | `bool BIsDlcInstalled(AppId_t appID)`     |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                       |
| :---: | :------------------------------------------------------------------------------------------------------------ |
|   1   | `bool BIsSubscribed()`                                                                                        |
|   2   | `bool BIsLowViolence()`                                                                                       |
|   3   | `bool BIsCybercafe()`                                                                                         |
|   4   | `bool BIsVACBanned()`                                                                                         |
|   5   | `const char *GetCurrentGameLanguage()`                                                                        |
|   6   | `const char *GetAvailableGameLanguages()`                                                                     |
|   7   | `bool BIsSubscribedApp(AppId_t appID)`                                                                        |
|   8   | `bool BIsDlcInstalled(AppId_t appID)`                                                                         |
|   9   | `uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)`                                                          |
|  10   | `bool BIsSubscribedFromFreeWeekend()`                                                                         |
|  11   | `int GetDLCCount()`                                                                                           |
|  12   | `bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)` |
|  13   | `void InstallDLC(AppId_t nAppID)`                                                                             |
|  14   | `void UninstallDLC(AppId_t nAppID)`                                                                           |

</details>
<!-- #endregion -->

<!-- #region 005 -->
<details style="margin-left: 20px">
<summary><b><code>005</code></b></summary>

|  Num  | Methods                                                                                                       |
| :---: | :------------------------------------------------------------------------------------------------------------ |
|   1   | `bool BIsSubscribed()`                                                                                        |
|   2   | `bool BIsLowViolence()`                                                                                       |
|   3   | `bool BIsCybercafe()`                                                                                         |
|   4   | `bool BIsVACBanned()`                                                                                         |
|   5   | `const char *GetCurrentGameLanguage()`                                                                        |
|   6   | `const char *GetAvailableGameLanguages()`                                                                     |
|   7   | `bool BIsSubscribedApp(AppId_t appID)`                                                                        |
|   8   | `bool BIsDlcInstalled(AppId_t appID)`                                                                         |
|   9   | `uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)`                                                          |
|  10   | `bool BIsSubscribedFromFreeWeekend()`                                                                         |
|  11   | `int GetDLCCount()`                                                                                           |
|  12   | `bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)` |
|  13   | `void InstallDLC(AppId_t nAppID)`                                                                             |
|  14   | `void UninstallDLC(AppId_t nAppID)`                                                                           |
|  15   | `void RequestAppProofOfPurchaseKey(AppId_t nAppID)`                                                           |
|  16   | `bool GetCurrentBetaName(char *pchName, int cchNameBufferSize)`                                               |
|  17   | `bool MarkContentCorrupt(bool bMissingFilesOnly)`                                                             |
|  18   | `uint32 GetInstalledDepots(DepotId_t *pvecDepots, uint32 cMaxDepots)`                                         |
|  19   | `uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)`                         |
|  20   | `bool BIsAppInstalled(AppId_t appID)`                                                                         |

</details>
<!-- #endregion -->

<!-- #region 006 -->
<details style="margin-left: 20px">
<summary><b><code>006</code></b></summary>

|  Num  | Methods                                                                                                       |
| :---: | :------------------------------------------------------------------------------------------------------------ |
|   1   | `bool BIsSubscribed()`                                                                                        |
|   2   | `bool BIsLowViolence()`                                                                                       |
|   3   | `bool BIsCybercafe()`                                                                                         |
|   4   | `bool BIsVACBanned()`                                                                                         |
|   5   | `const char *GetCurrentGameLanguage()`                                                                        |
|   6   | `const char *GetAvailableGameLanguages()`                                                                     |
|   7   | `bool BIsSubscribedApp(AppId_t appID)`                                                                        |
|   8   | `bool BIsDlcInstalled(AppId_t appID)`                                                                         |
|   9   | `uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)`                                                          |
|  10   | `bool BIsSubscribedFromFreeWeekend()`                                                                         |
|  11   | `int GetDLCCount()`                                                                                           |
|  12   | `bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)` |
|  13   | `void InstallDLC(AppId_t nAppID)`                                                                             |
|  14   | `void UninstallDLC(AppId_t nAppID)`                                                                           |
|  15   | `void RequestAppProofOfPurchaseKey(AppId_t nAppID)`                                                           |
|  16   | `bool GetCurrentBetaName(char *pchName, int cchNameBufferSize)`                                               |
|  17   | `bool MarkContentCorrupt(bool bMissingFilesOnly)`                                                             |
|  18   | `uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)`                          |
|  19   | `uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)`                         |
|  20   | `bool BIsAppInstalled(AppId_t appID)`                                                                         |
|  21   | `CSteamID GetAppOwner()`                                                                                      |
|  22   | `const char *GetLaunchQueryParam(const char *pchKey)`                                                         |

</details>
<!-- #endregion -->

<!-- #region 007 -->
<details style="margin-left: 20px">
<summary><b><code>007</code></b></summary>

|  Num  | Methods                                                                                                       |
| :---: | :------------------------------------------------------------------------------------------------------------ |
|   1   | `bool BIsSubscribed()`                                                                                        |
|   2   | `bool BIsLowViolence()`                                                                                       |
|   3   | `bool BIsCybercafe()`                                                                                         |
|   4   | `bool BIsVACBanned()`                                                                                         |
|   5   | `const char *GetCurrentGameLanguage()`                                                                        |
|   6   | `const char *GetAvailableGameLanguages()`                                                                     |
|   7   | `bool BIsSubscribedApp(AppId_t appID)`                                                                        |
|   8   | `bool BIsDlcInstalled(AppId_t appID)`                                                                         |
|   9   | `uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)`                                                          |
|  10   | `bool BIsSubscribedFromFreeWeekend()`                                                                         |
|  11   | `int GetDLCCount()`                                                                                           |
|  12   | `bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)` |
|  13   | `void InstallDLC(AppId_t nAppID)`                                                                             |
|  14   | `void UninstallDLC(AppId_t nAppID)`                                                                           |
|  15   | `void RequestAppProofOfPurchaseKey(AppId_t nAppID)`                                                           |
|  16   | `bool GetCurrentBetaName(char *pchName, int cchNameBufferSize)`                                               |
|  17   | `bool MarkContentCorrupt(bool bMissingFilesOnly)`                                                             |
|  18   | `uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)`                          |
|  19   | `uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)`                         |
|  20   | `bool BIsAppInstalled(AppId_t appID)`                                                                         |
|  21   | `CSteamID GetAppOwner()`                                                                                      |
|  22   | `const char *GetLaunchQueryParam(const char *pchKey)`                                                         |
|  23   | `bool GetDlcDownloadProgress(AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)`              |
|  24   | `int GetAppBuildId()`                                                                                         |

</details>
<!-- #endregion -->

<!-- #region 008 -->
<details style="margin-left: 20px">
<summary><b><code>008</code></b></summary>

|  Num  | Methods                                                                                                                                                |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool BIsSubscribed()`                                                                                                                                 |
|   2   | `bool BIsLowViolence()`                                                                                                                                |
|   3   | `bool BIsCybercafe()`                                                                                                                                  |
|   4   | `bool BIsVACBanned()`                                                                                                                                  |
|   5   | `const char *GetCurrentGameLanguage()`                                                                                                                 |
|   6   | `const char *GetAvailableGameLanguages()`                                                                                                              |
|   7   | `bool BIsSubscribedApp(AppId_t appID)`                                                                                                                 |
|   8   | `bool BIsDlcInstalled(AppId_t appID)`                                                                                                                  |
|   9   | `uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)`                                                                                                   |
|  10   | `bool BIsSubscribedFromFreeWeekend()`                                                                                                                  |
|  11   | `int GetDLCCount()`                                                                                                                                    |
|  12   | `bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)`                                          |
|  13   | `void InstallDLC(AppId_t nAppID)`                                                                                                                      |
|  14   | `void UninstallDLC(AppId_t nAppID)`                                                                                                                    |
|  15   | `void RequestAppProofOfPurchaseKey(AppId_t nAppID)`                                                                                                    |
|  16   | `bool GetCurrentBetaName(char *pchName, int cchNameBufferSize)`                                                                                        |
|  17   | `bool MarkContentCorrupt(bool bMissingFilesOnly)`                                                                                                      |
|  18   | `uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)`                                                                   |
|  19   | `uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)`                                                                  |
|  20   | `bool BIsAppInstalled(AppId_t appID)`                                                                                                                  |
|  21   | `CSteamID GetAppOwner()`                                                                                                                               |
|  22   | `const char *GetLaunchQueryParam(const char *pchKey)`                                                                                                  |
|  23   | `bool GetDlcDownloadProgress(AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)`                                                       |
|  24   | `int GetAppBuildId()`                                                                                                                                  |
|  25   | `void RequestAllProofOfPurchaseKeys()`                                                                                                                 |
|  26   | `SteamAPICall_t GetFileDetails(const char* pszFileName)`                                                                                               |
|  27   | `int GetLaunchCommandLine(char *pszCommandLine, int cubCommandLine)`                                                                                   |
|  28   | `bool BIsSubscribedFromFamilySharing()`                                                                                                                |
|  29   | `bool BIsTimedTrial(uint32* punSecondsAllowed, uint32* punSecondsPlayed)`                                                                              |
|  30   | `bool SetDlcContext(AppId_t nAppID)`                                                                                                                   |
|  31   | `int GetNumBetas(int *pnAvailable, int *pnPrivate)`                                                                                                    |
|  32   | `bool GetBetaInfo(int iBetaIndex, uint32 *punFlags, uint32 *punBuildID, char *pchBetaName, int cchBetaName, char *pchDescription, int cchDescription)` |
|  33   | `bool SetActiveBeta(const char *pchBetaName)`                                                                                                          |

</details>
<!-- #endregion -->

<!-- #region 009 -->
<details style="margin-left: 20px">
<summary><b><code>009</code></b></summary>

|  Num  | Methods                                                                                                                                                                        |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `bool BIsSubscribed()`                                                                                                                                                         |
|   2   | `bool BIsLowViolence()`                                                                                                                                                        |
|   3   | `bool BIsCybercafe()`                                                                                                                                                          |
|   4   | `bool BIsVACBanned()`                                                                                                                                                          |
|   5   | `const char *GetCurrentGameLanguage()`                                                                                                                                         |
|   6   | `const char *GetAvailableGameLanguages()`                                                                                                                                      |
|   7   | `bool BIsSubscribedApp(AppId_t appID)`                                                                                                                                         |
|   8   | `bool BIsDlcInstalled(AppId_t appID)`                                                                                                                                          |
|   9   | `uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)`                                                                                                                           |
|  10   | `bool BIsSubscribedFromFreeWeekend()`                                                                                                                                          |
|  11   | `int GetDLCCount()`                                                                                                                                                            |
|  12   | `bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)`                                                                  |
|  13   | `void InstallDLC(AppId_t nAppID)`                                                                                                                                              |
|  14   | `void UninstallDLC(AppId_t nAppID)`                                                                                                                                            |
|  15   | `void RequestAppProofOfPurchaseKey(AppId_t nAppID)`                                                                                                                            |
|  16   | `bool GetCurrentBetaName(char *pchName, int cchNameBufferSize)`                                                                                                                |
|  17   | `bool MarkContentCorrupt(bool bMissingFilesOnly)`                                                                                                                              |
|  18   | `uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)`                                                                                           |
|  19   | `uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)`                                                                                          |
|  20   | `bool BIsAppInstalled(AppId_t appID)`                                                                                                                                          |
|  21   | `CSteamID GetAppOwner()`                                                                                                                                                       |
|  22   | `const char *GetLaunchQueryParam(const char *pchKey)`                                                                                                                          |
|  23   | `bool GetDlcDownloadProgress(AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)`                                                                               |
|  24   | `int GetAppBuildId()`                                                                                                                                                          |
|  25   | `void RequestAllProofOfPurchaseKeys()`                                                                                                                                         |
|  26   | `SteamAPICall_t GetFileDetails(const char* pszFileName)`                                                                                                                       |
|  27   | `int GetLaunchCommandLine(char *pszCommandLine, int cubCommandLine)`                                                                                                           |
|  28   | `bool BIsSubscribedFromFamilySharing()`                                                                                                                                        |
|  29   | `bool BIsTimedTrial(uint32* punSecondsAllowed, uint32* punSecondsPlayed)`                                                                                                      |
|  30   | `bool SetDlcContext(AppId_t nAppID)`                                                                                                                                           |
|  31   | `int GetNumBetas(int *pnAvailable, int *pnPrivate)`                                                                                                                            |
|  32   | `bool GetBetaInfo(int iBetaIndex, uint32 *punFlags, uint32 *punBuildID, char *pchBetaName, int cchBetaName, char *pchDescription, int cchDescription, uint32 *punLastUpdated)` |
|  33   | `bool SetActiveBeta(const char *pchBetaName)`                                                                                                                                  |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                        | I. Versions                                            |
| :---: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------- |
|   1   | `int GetAppData(AppId_t nAppID, const char *pchKey, char *pchValue, int cchValueMax)`                                                                                          | `001`                                                  |
|   2   | `bool BIsSubscribed()`                                                                                                                                                         | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|   3   | `bool BIsLowViolence()`                                                                                                                                                        | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|   4   | `bool BIsCybercafe()`                                                                                                                                                          | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|   5   | `bool BIsVACBanned()`                                                                                                                                                          | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|   6   | `const char *GetCurrentGameLanguage()`                                                                                                                                         | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|   7   | `const char *GetAvailableGameLanguages()`                                                                                                                                      | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|   8   | `bool BIsSubscribedApp(AppId_t appID)`                                                                                                                                         | `002`, `003`, `004`, `005`, `006`, `007`, `008`, `009` |
|   9   | `bool BIsDlcInstalled(AppId_t appID)`                                                                                                                                          | `003`, `004`, `005`, `006`, `007`, `008`, `009`        |
|  10   | `uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)`                                                                                                                           | `004`, `005`, `006`, `007`, `008`, `009`               |
|  11   | `bool BIsSubscribedFromFreeWeekend()`                                                                                                                                          | `004`, `005`, `006`, `007`, `008`, `009`               |
|  12   | `int GetDLCCount()`                                                                                                                                                            | `004`, `005`, `006`, `007`, `008`, `009`               |
|  13   | `bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)`                                                                  | `004`, `005`, `006`, `007`, `008`, `009`               |
|  14   | `void InstallDLC(AppId_t nAppID)`                                                                                                                                              | `004`, `005`, `006`, `007`, `008`, `009`               |
|  15   | `void UninstallDLC(AppId_t nAppID)`                                                                                                                                            | `004`, `005`, `006`, `007`, `008`, `009`               |
|  16   | `void RequestAppProofOfPurchaseKey(AppId_t nAppID)`                                                                                                                            | `005`, `006`, `007`, `008`, `009`                      |
|  17   | `bool GetCurrentBetaName(char *pchName, int cchNameBufferSize)`                                                                                                                | `005`, `006`, `007`, `008`, `009`                      |
|  18   | `bool MarkContentCorrupt(bool bMissingFilesOnly)`                                                                                                                              | `005`, `006`, `007`, `008`, `009`                      |
|  19   | `uint32 GetInstalledDepots(DepotId_t *pvecDepots, uint32 cMaxDepots)`                                                                                                          | `005`                                                  |
|  20   | `uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)`                                                                                          | `005`, `006`, `007`, `008`, `009`                      |
|  21   | `bool BIsAppInstalled(AppId_t appID)`                                                                                                                                          | `005`, `006`, `007`, `008`, `009`                      |
|  22   | `uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)`                                                                                           | `006`, `007`, `008`, `009`                             |
|  23   | `CSteamID GetAppOwner()`                                                                                                                                                       | `006`, `007`, `008`, `009`                             |
|  24   | `const char *GetLaunchQueryParam(const char *pchKey)`                                                                                                                          | `006`, `007`, `008`, `009`                             |
|  25   | `bool GetDlcDownloadProgress(AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)`                                                                               | `007`, `008`, `009`                                    |
|  26   | `int GetAppBuildId()`                                                                                                                                                          | `007`, `008`, `009`                                    |
|  27   | `void RequestAllProofOfPurchaseKeys()`                                                                                                                                         | `008`, `009`                                           |
|  28   | `SteamAPICall_t GetFileDetails(const char* pszFileName)`                                                                                                                       | `008`, `009`                                           |
|  29   | `int GetLaunchCommandLine(char *pszCommandLine, int cubCommandLine)`                                                                                                           | `008`, `009`                                           |
|  30   | `bool BIsSubscribedFromFamilySharing()`                                                                                                                                        | `008`, `009`                                           |
|  31   | `bool BIsTimedTrial(uint32* punSecondsAllowed, uint32* punSecondsPlayed)`                                                                                                      | `008`, `009`                                           |
|  32   | `bool SetDlcContext(AppId_t nAppID)`                                                                                                                                           | `008`, `009`                                           |
|  33   | `int GetNumBetas(int *pnAvailable, int *pnPrivate)`                                                                                                                            | `008`, `009`                                           |
|  34   | `bool GetBetaInfo(int iBetaIndex, uint32 *punFlags, uint32 *punBuildID, char *pchBetaName, int cchBetaName, char *pchDescription, int cchDescription)`                         | `008`                                                  |
|  35   | `bool SetActiveBeta(const char *pchBetaName)`                                                                                                                                  | `008`, `009`                                           |
|  36   | `bool GetBetaInfo(int iBetaIndex, uint32 *punFlags, uint32 *punBuildID, char *pchBetaName, int cchBetaName, char *pchDescription, int cchDescription, uint32 *punLastUpdated)` | `009`                                                  |

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
class ISteamApps;
```

Представляет подробную информацию о приложениях и доп. контенте, а также позволяет выполнять над ними те или иные действия.

## GetAppData
```cpp
int GetAppData(AppId_t nAppID, const char *pchKey, char *pchValue, int cchValueMax)
```

| Название      | Тип            | Описание                                                                  |
| :------------ | :------------- | :------------------------------------------------------------------------ |
| `nAppID`      | `AppId_t`      | `AppId`, для которого запрашивается информация.                           |
| `pchKey`      | `const char *` | Текстовый ключ, значение которого необходимо получить.                    |
| `pchValue`    | `char *`       | Строковый буфер, в который будет скопировано текстовое значение свойства. |
| `cchValueMax` | `int`          | Размер буфера `pchValue` в байтах.                                        |

Получает кастомные метаданные, связанные с указанным приложением, по строковому ключу.

**Возвращает:** `int`\
Количество байт, фактически записанных в буфер `pchValue`.

## BIsSubscribed
```cpp
bool BIsSubscribed()
```

Проверяет, подписан ли активный пользователь на текущий AppID. (Владеет ли активный пользователь текущим приложением)

**Возвращает:** `bool`\
`true`, если активный пользователь владеет текущим приложением, в противном случае `false`.

## BIsLowViolence
```cpp
bool BIsLowViolence()
```

Проверяет, предоставляет лицензия, которой владеет пользователь, хранилища с контентом с _низким уровнем насилия_.

Хранилища с контентом с низким уровнем насилия используются для продажи в странах с соответствующими ограничениями.

**Возвращает:** `bool`\
`true`, если лицензия, которой владеет пользователь, предоставляет доступ к хранилищам с контентом с низким уровнем насилия, в противном случае `false`.

## BIsCybercafe
```cpp
bool BIsCybercafe()
```

Проверяет, предназначено ли текущее приложение для _интернет-кафе_.

**Возвращает:** `bool`\
`true`, если лицензия предназначена для _интернет-кафе_, в противном случае - `false`.

## BIsVACBanned
```cpp
bool BIsVACBanned()
```

Проверяет, есть ли на аккаунте пользователя блокировка `VAC` _(Valve Anti-Cheat)_.

**Возвращает:** `bool`\
`true` если на аккаунте пользователя есть блокировка `VAC`, в противном случае `false`.

## GetCurrentGameLanguage
```cpp
const char *GetCurrentGameLanguage()
```

Получает текущий язык, установленный для текущего приложения _(например, "russian", "english")_.

**Возвращает:** `const char *`\
Указатель на неизменяемую строку, содержащую текстовое имя языка.

## GetAvailableGameLanguages
```cpp
const char *GetAvailableGameLanguages()
```

Получает список языков, которые поддерживает текущее приложение, через запятую.

**Возвращает:** `const char *`\
Возвращает список языков, разделённых запятыми.

## BIsSubscribedApp
```cpp
bool BIsSubscribedApp(AppId_t appID)
```

| Название | Тип       | Описание            |
| :------- | :-------- | :------------------ |
| `appID`  | `AppId_t` | Проверяемый `AppId` |

Проверяет, подписан ли активный пользователь на указанный `AppId`. (Владеет ли активный пользователь указанным приложением `AppId`)

**Возвращает:** `bool`\
`true`, если активный пользователь подписан на указанное приложение, в противном случае `false`.

## BIsDlcInstalled
```cpp
bool BIsDlcInstalled(AppId_t appID)
```

| Название | Тип       | Описание                                     |
| :------- | :-------- | :------------------------------------------- |
| `appID`  | `AppId_t` | `AppId` проверяемого элемента доп. контента. |

Проверяет, владеет ли пользователь конкретным доп. контентом, и установлен ли он.

**Возвращает:** `bool`\
`true`, если пользователь владеет дополнительным контентом и он сейчас установлен, в противном случае `false`.

## GetEarliestPurchaseUnixTime
```cpp
uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)
```

| Название | Тип       | Описание                                                          |
| :------- | :-------- | :---------------------------------------------------------------- |
| `nAppID` | `AppId_t` | `AppId`, для которого запрашивается информация о времени покупки. |

Получает время покупки указанного приложения в формате _UNIX_-времени _(время с 1 января 1970 года)_.

Используется для награждения пользователей, исходя из времени изначальной покупки.

**Возвращает:** `uint32`
Время самой ранней покупки в формате _UNIX_-времени _(число секунд с 1 января 1970 года)_.

## BIsSubscribedFromFreeWeekend
```cpp
bool BIsSubscribedFromFreeWeekend()
```

Проверяет, подписан ли активный пользователь на текущий `AppId` в рамках акции _«Бесплатные выходные»_.

**Возвращает:** `bool`\
`true`, если активный пользователь подписан на текущее приложение в рамках акции _«Бесплатные выходные»_, в противном случае `false`.

## GetDLCCount
```cpp
int GetDLCCount()
```

Возвращает число элементов доп. контента для текущего приложения.

**Возвращает:** `int`\
Число элементов доп. контента для текущего приложения. Обратите внимание, что это значение может доходить до 64, в зависимости от того, сколько у пользователя дополнений, которыми он не владеет. _Если у вашего приложения много доп. контента, вам следует составить внутренний список известных дополнений, с которым можно будет сверяться._

## BGetDLCDataByIndex
```cpp
bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
```

| Название            | Тип         | Описание                                                                         |
| :------------------ | :---------- | :------------------------------------------------------------------------------- |
| `iDLC`              | `int`       | Получаемый индекс элемента доп. контента между `0` и `GetDLCCount`.              |
| `pAppID`            | `AppId_t *` | Возвращает `AppId` данного элемента доп. контента.                               |
| `pbAvailable`       | `bool *`    | Возвращает информацию о том, доступен ли данный доп. контент в магазине `Steam`. |
| `pchName`           | `char *`    | Возвращает название доп. контента, которое копируется в буфер.                   |
| `cchNameBufferSize` | `int`       | Длина буфера `pchName`.                                                          |

Возвращает метаданные для доп. контента по индексу.

**Возвращает:** `bool`\
`true`, если у текущего приложения есть связанный с ним дополнительный контент, и `iDLC` будет равен значению между `0` и `GetDLCCount`, в противном случае `false`.

## InstallDLC
```cpp
void InstallDLC(AppId_t nAppID)
```

| Название | Тип       | Описание                                              |
| :------- | :-------- | :---------------------------------------------------- |
| `nAppID` | `AppId_t` | Дополнительный контент, который вы хотите установить. |

Позволяет установить необязательный элемент доп. контента.

**Возвращает:** `void`

## UninstallDLC
```cpp
void UninstallDLC(AppId_t nAppID)
```

| Название | Тип       | Описание                                           |
| :------- | :-------- | :------------------------------------------------- |
| `nAppID` | `AppId_t` | Дополнительный контент, который вы хотите удалить. |

Позволяет удалить необязательный элемент доп. контента.

**Возвращает:** `void`

## RequestAppProofOfPurchaseKey
```cpp
void RequestAppProofOfPurchaseKey(AppId_t nAppID)
```

| Название | Тип       | Описание                                        |
| :------- | :-------- | :---------------------------------------------- |
| `nAppID` | `AppId_t` | `AppId`, для которого запрашивается информация. |

Устарело. Использовался для получения ключа подтверждения продукта.

**Возвращает:** `void`

## RequestAllProofOfPurchaseKeys
```cpp
void RequestAllProofOfPurchaseKeys()
```

Устарело. Использовался для получения ключа подтверждения продукта.

**Возвращает:** `void`

## GetCurrentBetaName
```cpp
bool GetCurrentBetaName(char *pchName, int cchNameBufferSize)
```

| Название            | Тип      | Описание                                            |
| :------------------ | :------- | :-------------------------------------------------- |
| `pchName`           | `char *` | Буфер, куда будет скопировано название бета-версии. |
| `cchNameBufferSize` | `int`    | Размер буфера `pchName`.                            |

Проверяет, что пользователь запустил приложение из бета-ветки, и если да - возвращает название ветки.

**Возвращает:** `bool`\
`true` если пользователь запустил приложение из бета-ветки, в противном случае `false`.

## MarkContentCorrupt
```cpp
bool MarkContentCorrupt(bool bMissingFilesOnly)
```

| Название            | Тип    | Описание                                                                              |
| :------------------ | :----- | :------------------------------------------------------------------------------------ |
| `bMissingFilesOnly` | `bool` | Сканировать только отсутствующие файлы, не проверять контрольную сумму каждого файла. |

Позволяет принудительно проверять контент игры при следующем запуске.

Если вы обнаружите, что игра устарела _(к примеру, если клиент определит, что версия не совпадает с версией на сервере)_,
то можете вызвать MarkContentCorrupt для принудительной проверки, показать сообщение пользователю и выйти из игры.

**Возвращает:** `bool`

## GetInstalledDepots `005`
```cpp
uint32 GetInstalledDepots(DepotId_t *pvecDepots, uint32 cMaxDepots)
```

| Название     | Тип           | Описание                                                                   |
| :----------- | :------------ | :------------------------------------------------------------------------- |
| `pvecDepots` | `DepotId_t *` | Предварительно выделенный массив, который будет заполнен списком хранилищ. |
| `cMaxDepots` | `uint32`      | Максимальное число получаемых хранилищ, обычно размер `pvecDepots`.        |

Получает список всех установленных хранилищ для данного `AppId` в порядке подключения.

**Возвращает:** `uint32`\
Число возвращённых хранилищ.

## GetInstalledDepots `006`
```cpp
uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)
```

| Название     | Тип           | Описание                                                                   |
| :----------- | :------------ | :------------------------------------------------------------------------- |
| `appID`      | `AppId_t`     | Приложение, для которого будут перечислены хранилища.                      |
| `pvecDepots` | `DepotId_t *` | Предварительно выделенный массив, который будет заполнен списком хранилищ. |
| `cMaxDepots` | `uint32`      | Максимальное число получаемых хранилищ, обычно размер `pvecDepots`.        |

Получает список всех установленных хранилищ для данного `AppId` в порядке подключения.

**Возвращает:** `uint32`\
Число возвращённых хранилищ.

## GetAppInstallDir
```cpp
uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
```

| Название              | Тип       | Описание                                                          |
| :-------------------- | :-------- | :---------------------------------------------------------------- |
| `appID`               | `AppId_t` | `AppId`, для которого запрашивается информация о папке установки. |
| `pchFolder`           | `char *`  | Строковой буфер, в который копируется путь к папке.               |
| `cchFolderBufferSize` | `uint32`  | Размер буфера `pchFolder` в байтах.                               |

Получает папку установки конкретного `AppId`.

Работает, даже если приложение не установлено. В этом случае показывает папку библиотеки `Steam`, куда игра устанавливается по умолчанию.

**Возвращает:** `uint32`\
Копирует путь к папке установки в виде строки в буфер `pchFolder`, а также возвращает число байтов, которые были скопированы в этот буфер.

## BIsAppInstalled
```cpp
bool BIsAppInstalled(AppId_t appID)
```

| Название | Тип       | Описание                         |
| :------- | :-------- | :------------------------------- |
| `appID`  | `AppId_t` | `AppId` проверяемого приложения. |

Проверяет, установлено ли конкретное приложение.

Текущий пользователь может и не владеть приложением, если, к примеру, оно осталось с бесплатных выходных и проч.

**Возвращает:** `bool`\
`true`, если указанное приложение установлено, в противном случае `false`.

## GetAppOwner
```cpp
CSteamID GetAppOwner()
```

Получает `SteamID` исходного владельца текущего приложения. Отличается от текущего пользователя, если он получил доступ к игре с помощью функции `Family Sharing`.

**Возвращает:** `CSteamID`\
Исходный владелец текущего приложения.

## GetLaunchQueryParam
```cpp
const char *GetLaunchQueryParam(const char *pchKey)
```

| Название | Тип            | Описание                                       |
| :------- | :------------- | :--------------------------------------------- |
| `pchKey` | `const char *` | Ключ запуска для проверки. К примеру, `param1` |

Получает связанный параметр запуска, если игра запускается с помощью steam://run/\<appid\>/?param1=value1;param2=value2;param3=value3 и т.п.

Названия параметров, начинающиеся со знака «@», зарезервированы для внутреннего использования и всегда будут возвращать пустую строку.\
Названия параметров, начинающиеся со знака «\_», зарезервированы для функций Steam - игра может их запросить, однако рекомендуется не давать параметрам ваших собственных функций такие названия.

**Возвращает:** `const char *`\
Значение, связанное с предоставленным ключом. Возвращает пустую строку (""), если указанный ключ не существует.

## GetDlcDownloadProgress
```cpp
bool GetDlcDownloadProgress(AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
```

| Название             | Тип        | Описание                                         |
| :------------------- | :--------- | :----------------------------------------------- |
| `nAppID`             | `AppId_t`  | `AppId` элемента доп. контента для отслеживания. |
| `punBytesDownloaded` | `uint64 *` | Возвращает число загруженных байтов.             |
| `punBytesTotal`      | `uint64 *` | Возвращает полный размер загрузки в байтах.      |

Получает данные о ходе загрузки необязательного доп. контента.

**Возвращает:** `bool`\
`true`, если указанный доп. контент существует и в данный момент загружается, в противном случае `false`.

## GetAppBuildId
```cpp
int GetAppBuildId()
```

Получает ID сборки данного приложения. Значение может измениться в любое время, если на сервере произойдут изменения игры.

**Возвращает:** `int`\
Текущий номер сборки данного приложения. Равен `0`, если запущенная сборка не загружена из `Steam`.

## GetFileDetails
```cpp
SteamAPICall_t GetFileDetails(const char* pszFileName)
```

| Название      | Тип           | Описание                          |
| :------------ | :------------ | :-------------------------------- |
| `pszFileName` | `const char*` | Абсолютный путь и название файла. |

Асинхронно возвращает метаданные о конкретном файле в манифесте хранилища.

В данный момент предоставляет следующие данные:
_размер файла в байтах,_
_хеш SHA-1 файла,_
_флаги файла._

**Возвращает:** `SteamAPICall_t`, который необходимо использовать с результатом вызова `FileDetailsResult_t`.

## GetLaunchCommandLine
```cpp
int GetLaunchCommandLine(char *pszCommandLine, int cubCommandLine)
```

| Название         | Тип      | Описание                                                |
| :--------------- | :------- | :------------------------------------------------------ |
| `pszCommandLine` | `char *` | Строковой буфер, в который копируется командная строка. |
| `cubCommandLine` | `int`    | Размер буфера `pszCommandLine` в байтах.                |

Получает командную строку, если игра запущена через ссылку на Steam, к примеру: steam://run/\<appid\>//\<command line\>/. Этот метод предпочтительнее, чем запуск с помощью командной строки через операционную систему, который может угрожать безопасности аккаунта.

**Возвращает:** `int`\
Возвращает команду в виде строки в буфер `pszCommandLine`, а также число байтов, которые были скопированы в этот буфер.

## BIsSubscribedFromFamilySharing
```cpp
bool BIsSubscribedFromFamilySharing()
```

Проверяет, использует ли активный пользователь лицензию `Family Library Sharing`, принадлежащую другому пользователю, чтобы получить доступ к текущему `AppId`.

Чтобы определить `SteamID` владельца лицензии, воспользуйтесь функцией `GetAppOwner`.

**Возвращает:** `bool`\
`true`, если активный пользователь использует приложение через `Family Library Sharing`, в противном случае `false`.

## BIsTimedTrial
```cpp
bool BIsTimedTrial(uint32* punSecondsAllowed, uint32* punSecondsPlayed)
```

| Название            | Тип        | Описание                                                                    |
| :------------------ | :--------- | :-------------------------------------------------------------------------- |
| `punSecondsAllowed` | `uint32 *` | Возвращает число секунд, сколько будет длиться временная пробная версия.    |
| `punSecondsPlayed`  | `uint32 *` | Возвращает число секунд, проведённых пользователем в игре на данный момент. |

Проверяет, подписан ли активный пользователь на текущий `AppId` в рамках временной пробной версии. Если это так, возвращает `true` и показывает общее время, в течение которого можно играть во временную пробную версию, а также текущее количество времени, затраченное пользователем на игру.

**Возвращает:** `bool`\
`true` если активный пользователь подписан на текущий `AppId` в рамках временной пробной версии, в противном случае `false`.

## SetDlcContext
```cpp
bool SetDlcContext(AppId_t nAppID)
```

| Название | Тип       | Описание                                      |
| :------- | :-------- | :-------------------------------------------- |
| `nAppID` | `AppId_t` | Идентификатор `AppId` загружаемого дополнения |

Устанавливает контекст для последующих вызовов методов аутентификации или владения контентом, переключая область видимости на указанное дополнение.

**Возвращает:** `bool`\
`true`, если контекст был успешно переключен на указанный `AppId`, в противном случае `false`.

## GetNumBetas
```cpp
int GetNumBetas(int *pnAvailable, int *pnPrivate)
```

| Название      | Тип    | Описание                                                |
| :------------ | :----- | :------------------------------------------------------ |
| `pnAvailable` | `int*` | Количество бета-веток, доступных текущему пользователю. |
| `pnPrivate`   | `int*` | Сколько из них защищены паролем.                        |

Возвращает общее количество известных веток приложения _(включая стандартную «публичную» ветку)_, данные о которых можно получить с помощью `GetBetaInfo()`.

**Возвращает:** `int`\
Количество известных веток приложения.

## GetBetaInfo `008`
```cpp
bool GetBetaInfo(int iBetaIndex, uint32 *punFlags, uint32 *punBuildID, char *pchBetaName, int cchBetaName, char *pchDescription, int cchDescription)
```

| Название         | Тип        | Описание                                                                                         |
| :--------------- | :--------- | :----------------------------------------------------------------------------------------------- |
| `iBetaIndex`     | `int`      | Индекс ветки. Отсчёт начинается с нулевого индекса, который всегда обозначает стандартную ветку. |
| `punFlags`       | `uint32 *` | Набор флагов _(EBetaBranchFlags)_, описывающих текущее состояние ветки.                          |
| `punBuildID`     | `uint32 *` | `BuildID` контента, выпущенного в рамках этой ветки.                                             |
| `pchBetaName`    | `char *`   | Название бета-ветки.                                                                             |
| `cchBetaName`    | `int`      | Длина `pchBetaName`, предоставляемая в рамках вызова.                                            |
| `pchDescription` | `char *`   | Описание бета-ветки.                                                                             |
| `cchDescription` | `int`      | Длина pchDescription, предоставляемая в рамках вызова.                                           |

Позволяет получить данные о бета-ветке приложения: _название, описание и состояние_.

**Возвращает:** `bool`\
`true`, если переданный индекс ветки верный; в противном случае - `false`.

## GetBetaInfo `009`
```cpp
bool GetBetaInfo(int iBetaIndex, uint32 *punFlags, uint32 *punBuildID, char *pchBetaName, int cchBetaName, char *pchDescription, int cchDescription, uint32 *punLastUpdated)
```

| Название         | Тип        | Описание                                                                                         |
| :--------------- | :--------- | :----------------------------------------------------------------------------------------------- |
| `iBetaIndex`     | `int`      | Индекс ветки. Отсчёт начинается с нулевого индекса, который всегда обозначает стандартную ветку. |
| `punFlags`       | `uint32 *` | Набор флагов _(EBetaBranchFlags)_, описывающих текущее состояние ветки.                          |
| `punBuildID`     | `uint32 *` | `BuildID` контента, выпущенного в рамках этой ветки.                                             |
| `pchBetaName`    | `char *`   | Название бета-ветки.                                                                             |
| `cchBetaName`    | `int`      | Длина `pchBetaName`, предоставляемая в рамках вызова.                                            |
| `pchDescription` | `char *`   | Описание бета-ветки.                                                                             |
| `cchDescription` | `int`      | Длина pchDescription, предоставляемая в рамках вызова.                                           |
| `punLastUpdated` | `uint32 *` | Возвращает метку времени для последнего обновления сборки бета-ветки.                            |

Позволяет получить данные о бета-ветке приложения: _название, описание и состояние_.

**Возвращает:** `bool`\
`true`, если переданный индекс ветки верный; в противном случае - `false`.

## SetActiveBeta
```cpp
bool SetActiveBeta(const char *pchBetaName)
```

| Название      | Тип            | Описание                                                    |
| :------------ | :------------- | :---------------------------------------------------------- |
| `pchBetaName` | `const char *` | Название бета-ветки, на которую вы хотите переключить игру. |

Позволяет сделать бета-ветку приложения активной. Чтобы изменения вступили в силу, может потребоваться перезапуск Steam.

**Возвращает:** `bool`

<!-- #endregion -->