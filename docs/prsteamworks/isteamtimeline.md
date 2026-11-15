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

# ISteamTimeline

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  160   |
|   004   |  165   |

```
001 - 160
004 - 161, 162, 163, 164, 165
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                          |
| :---: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `void SetTimelineStateDescription(const char *pchDescription, float flTimeDelta)`                                                                                                                                |
|   2   | `void ClearTimelineStateDescription(float flTimeDelta)`                                                                                                                                                          |
|   3   | `void AddTimelineEvent(const char *pchIcon, const char *pchTitle, const char *pchDescription, uint32 unPriority, float flStartOffsetSeconds, float flDurationSeconds, ETimelineEventClipPriority ePossibleClip)` |
|   4   | `void SetTimelineGameMode(ETimelineGameMode eMode)`                                                                                                                                                              |

</details>
<!-- #endregion -->

<!-- #region 004 -->
<details style="margin-left: 20px">
<summary><b><code>004</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                                                                             |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `void SetTimelineTooltip(const char *pchDescription, float flTimeDelta)`                                                                                                                                                                                                            |
|   2   | `void ClearTimelineTooltip(float flTimeDelta)`                                                                                                                                                                                                                                      |
|   3   | `void SetTimelineGameMode(ETimelineGameMode eMode)`                                                                                                                                                                                                                                 |
|   4   | `TimelineEventHandle_t AddInstantaneousTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unIconPriority, float flStartOffsetSeconds = 0.f, ETimelineEventClipPriority ePossibleClip = k_ETimelineEventClipPriority_None)`                 |
|   5   | `TimelineEventHandle_t AddRangeTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unIconPriority, float flStartOffsetSeconds = 0.f, float flDuration = 0.f, ETimelineEventClipPriority ePossibleClip = k_ETimelineEventClipPriority_None)` |
|   6   | `TimelineEventHandle_t StartRangeTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unPriority, float flStartOffsetSeconds, ETimelineEventClipPriority ePossibleClip)`                                                                     |
|   7   | `void UpdateRangeTimelineEvent(TimelineEventHandle_t ulEvent, const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unPriority, ETimelineEventClipPriority ePossibleClip)`                                                                                  |
|   8   | `void EndRangeTimelineEvent(TimelineEventHandle_t ulEvent, float flEndOffsetSeconds)`                                                                                                                                                                                               |
|   9   | `void RemoveTimelineEvent(TimelineEventHandle_t ulEvent)`                                                                                                                                                                                                                           |
|  10   | `SteamAPICall_t DoesEventRecordingExist(TimelineEventHandle_t ulEvent)`                                                                                                                                                                                                             |
|  11   | `void StartGamePhase()`                                                                                                                                                                                                                                                             |
|  12   | `void EndGamePhase()`                                                                                                                                                                                                                                                               |
|  13   | `void SetGamePhaseID(const char *pchPhaseID)`                                                                                                                                                                                                                                       |
|  14   | `SteamAPICall_t DoesGamePhaseRecordingExist(const char *pchPhaseID)`                                                                                                                                                                                                                |
|  15   | `void AddGamePhaseTag(const char *pchTagName, const char *pchTagIcon, const char *pchTagGroup, uint32 unPriority)`                                                                                                                                                                  |
|  16   | `void SetGamePhaseAttribute(const char *pchAttributeGroup, const char *pchAttributeValue, uint32 unPriority)`                                                                                                                                                                       |
|  17   | `void OpenOverlayToGamePhase(const char *pchPhaseID)`                                                                                                                                                                                                                               |
|  18   | `void OpenOverlayToTimelineEvent(const TimelineEventHandle_t ulEvent)`                                                                                                                                                                                                              |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                                                                                                                                                                             | I. Versions  |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------- |
|   1   | `void AddGamePhaseTag(const char *pchTagName, const char *pchTagIcon, const char *pchTagGroup, uint32 unPriority)`                                                                                                                                                                  | `004`        |
|   2   | `TimelineEventHandle_t AddInstantaneousTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unIconPriority, float flStartOffsetSeconds = 0.f, ETimelineEventClipPriority ePossibleClip = k_ETimelineEventClipPriority_None)`                 | `004`        |
|   3   | `TimelineEventHandle_t AddRangeTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unIconPriority, float flStartOffsetSeconds = 0.f, float flDuration = 0.f, ETimelineEventClipPriority ePossibleClip = k_ETimelineEventClipPriority_None)` | `004`        |
|   4   | `void AddTimelineEvent(const char *pchIcon, const char *pchTitle, const char *pchDescription, uint32 unPriority, float flStartOffsetSeconds, float flDurationSeconds, ETimelineEventClipPriority ePossibleClip)`                                                                    | `001`        |
|   5   | `void ClearTimelineStateDescription(float flTimeDelta)`                                                                                                                                                                                                                             | `001`        |
|   6   | `void ClearTimelineTooltip(float flTimeDelta)`                                                                                                                                                                                                                                      | `004`        |
|   7   | `SteamAPICall_t DoesEventRecordingExist(TimelineEventHandle_t ulEvent)`                                                                                                                                                                                                             | `004`        |
|   8   | `SteamAPICall_t DoesGamePhaseRecordingExist(const char *pchPhaseID)`                                                                                                                                                                                                                | `004`        |
|   9   | `void EndGamePhase()`                                                                                                                                                                                                                                                               | `004`        |
|  10   | `void EndRangeTimelineEvent(TimelineEventHandle_t ulEvent, float flEndOffsetSeconds)`                                                                                                                                                                                               | `004`        |
|  11   | `void OpenOverlayToGamePhase(const char *pchPhaseID)`                                                                                                                                                                                                                               | `004`        |
|  12   | `void OpenOverlayToTimelineEvent(const TimelineEventHandle_t ulEvent)`                                                                                                                                                                                                              | `004`        |
|  13   | `void RemoveTimelineEvent(TimelineEventHandle_t ulEvent)`                                                                                                                                                                                                                           | `004`        |
|  14   | `void SetGamePhaseAttribute(const char *pchAttributeGroup, const char *pchAttributeValue, uint32 unPriority)`                                                                                                                                                                       | `004`        |
|  15   | `void SetGamePhaseID(const char *pchPhaseID)`                                                                                                                                                                                                                                       | `004`        |
|  16   | `void SetTimelineGameMode(ETimelineGameMode eMode)`                                                                                                                                                                                                                                 | `001`, `004` |
|  17   | `void SetTimelineStateDescription(const char *pchDescription, float flTimeDelta)`                                                                                                                                                                                                   | `001`        |
|  18   | `void SetTimelineTooltip(const char *pchDescription, float flTimeDelta)`                                                                                                                                                                                                            | `004`        |
|  19   | `void StartGamePhase()`                                                                                                                                                                                                                                                             | `004`        |
|  20   | `TimelineEventHandle_t StartRangeTimelineEvent(const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unPriority, float flStartOffsetSeconds, ETimelineEventClipPriority ePossibleClip)`                                                                     | `004`        |
|  21   | `void UpdateRangeTimelineEvent(TimelineEventHandle_t ulEvent, const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unPriority, ETimelineEventClipPriority ePossibleClip)`                                                                                  | `004`        |

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
class ISteamTimeline;
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