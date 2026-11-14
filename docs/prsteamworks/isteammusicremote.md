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

# ISteamMusicRemote

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  162   |

```
001 - 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                   |
| :---: | :------------------------------------------------------------------------ |
|   1   | `bool RegisterSteamMusicRemote(const char *pchName)`                      |
|   2   | `bool DeregisterSteamMusicRemote()`                                       |
|   3   | `bool BIsCurrentMusicRemote()`                                            |
|   4   | `bool BActivationSuccess(bool bValue)`                                    |
|   5   | `bool SetDisplayName(const char *pchDisplayName)`                         |
|   6   | `bool SetPNGIcon_64x64(void *pvBuffer, uint32 cbBufferLength)`            |
|   7   | `bool EnablePlayPrevious(bool bValue)`                                    |
|   8   | `bool EnablePlayNext(bool bValue)`                                        |
|   9   | `bool EnableShuffled(bool bValue)`                                        |
|  10   | `bool EnableLooped(bool bValue)`                                          |
|  11   | `bool EnableQueue(bool bValue)`                                           |
|  12   | `bool EnablePlaylists(bool bValue)`                                       |
|  13   | `bool UpdatePlaybackStatus(AudioPlayback_Status nStatus)`                 |
|  14   | `bool UpdateShuffled(bool bValue)`                                        |
|  15   | `bool UpdateLooped(bool bValue)`                                          |
|  16   | `bool UpdateVolume(float flValue)`                                        |
|  17   | `bool CurrentEntryWillChange()`                                           |
|  18   | `bool CurrentEntryIsAvailable(bool bAvailable)`                           |
|  19   | `bool UpdateCurrentEntryText(const char *pchText)`                        |
|  20   | `bool UpdateCurrentEntryElapsedSeconds(int nValue)`                       |
|  21   | `bool UpdateCurrentEntryCoverArt(void *pvBuffer, uint32 cbBufferLength)`  |
|  22   | `bool CurrentEntryDidChange()`                                            |
|  23   | `bool QueueWillChange()`                                                  |
|  24   | `bool ResetQueueEntries()`                                                |
|  25   | `bool SetQueueEntry(int nID, int nPosition, const char *pchEntryText)`    |
|  26   | `bool SetCurrentQueueEntry(int nID)`                                      |
|  27   | `bool QueueDidChange()`                                                   |
|  28   | `bool PlaylistWillChange()`                                               |
|  29   | `bool ResetPlaylistEntries()`                                             |
|  30   | `bool SetPlaylistEntry(int nID, int nPosition, const char *pchEntryText)` |
|  31   | `bool SetCurrentPlaylistEntry(int nID)`                                   |
|  32   | `bool PlaylistDidChange()`                                                |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                   | I. Versions |
| :---: | :------------------------------------------------------------------------ | :---------- |
|   1   | `bool BActivationSuccess(bool bValue)`                                    | `001`       |
|   2   | `bool BIsCurrentMusicRemote()`                                            | `001`       |
|   3   | `bool CurrentEntryDidChange()`                                            | `001`       |
|   4   | `bool CurrentEntryIsAvailable(bool bAvailable)`                           | `001`       |
|   5   | `bool CurrentEntryWillChange()`                                           | `001`       |
|   6   | `bool DeregisterSteamMusicRemote()`                                       | `001`       |
|   7   | `bool EnableLooped(bool bValue)`                                          | `001`       |
|   8   | `bool EnablePlaylists(bool bValue)`                                       | `001`       |
|   9   | `bool EnablePlayNext(bool bValue)`                                        | `001`       |
|  10   | `bool EnablePlayPrevious(bool bValue)`                                    | `001`       |
|  11   | `bool EnableQueue(bool bValue)`                                           | `001`       |
|  12   | `bool EnableShuffled(bool bValue)`                                        | `001`       |
|  13   | `bool PlaylistDidChange()`                                                | `001`       |
|  14   | `bool PlaylistWillChange()`                                               | `001`       |
|  15   | `bool QueueDidChange()`                                                   | `001`       |
|  16   | `bool QueueWillChange()`                                                  | `001`       |
|  17   | `bool RegisterSteamMusicRemote(const char *pchName)`                      | `001`       |
|  18   | `bool ResetPlaylistEntries()`                                             | `001`       |
|  19   | `bool ResetQueueEntries()`                                                | `001`       |
|  20   | `bool SetCurrentPlaylistEntry(int nID)`                                   | `001`       |
|  21   | `bool SetCurrentQueueEntry(int nID)`                                      | `001`       |
|  22   | `bool SetDisplayName(const char *pchDisplayName)`                         | `001`       |
|  23   | `bool SetPlaylistEntry(int nID, int nPosition, const char *pchEntryText)` | `001`       |
|  24   | `bool SetPNGIcon_64x64(void *pvBuffer, uint32 cbBufferLength)`            | `001`       |
|  25   | `bool SetQueueEntry(int nID, int nPosition, const char *pchEntryText)`    | `001`       |
|  26   | `bool UpdateCurrentEntryCoverArt(void *pvBuffer, uint32 cbBufferLength)`  | `001`       |
|  27   | `bool UpdateCurrentEntryElapsedSeconds(int nValue)`                       | `001`       |
|  28   | `bool UpdateCurrentEntryText(const char *pchText)`                        | `001`       |
|  29   | `bool UpdateLooped(bool bValue)`                                          | `001`       |
|  30   | `bool UpdatePlaybackStatus(AudioPlayback_Status nStatus)`                 | `001`       |
|  31   | `bool UpdateShuffled(bool bValue)`                                        | `001`       |
|  32   | `bool UpdateVolume(float flValue)`                                        | `001`       |

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
class ISteamMusicRemote;
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