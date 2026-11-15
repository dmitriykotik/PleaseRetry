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

# ISteamScreenshots

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  122   |
|   002   |  137   |
|   003   |  165   |

```
001 - 116, 117, 118, 119, 120, 121, 122
002 - 123a, 125, 126a, 127, 128, 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137
003 - 138a, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                       |
| :---: | :---------------------------------------------------------------------------------------------------------------------------- |
|   1   | `ScreenshotHandle WriteScreenshot(void *pubRGB, uint32 cubRGB, int nWidth, int nHeight)`                                      |
|   2   | `ScreenshotHandle AddScreenshotToLibrary(const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight)` |
|   3   | `void TriggerScreenshot()`                                                                                                    |
|   4   | `void HookScreenshots(bool bHook)`                                                                                            |
|   5   | `bool SetLocation(ScreenshotHandle hScreenshot, const char *pchLocation)`                                                     |
|   6   | `bool TagUser(ScreenshotHandle hScreenshot, CSteamID steamID)`                                                                |

</details>
<!-- #endregion -->

<!-- #region 002 -->
<details style="margin-left: 20px">
<summary><b><code>002</code></b></summary>

|  Num  | Methods                                                                                                                       |
| :---: | :---------------------------------------------------------------------------------------------------------------------------- |
|   1   | `ScreenshotHandle WriteScreenshot(void *pubRGB, uint32 cubRGB, int nWidth, int nHeight)`                                      |
|   2   | `ScreenshotHandle AddScreenshotToLibrary(const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight)` |
|   3   | `void TriggerScreenshot()`                                                                                                    |
|   4   | `void HookScreenshots(bool bHook)`                                                                                            |
|   5   | `bool SetLocation(ScreenshotHandle hScreenshot, const char *pchLocation)`                                                     |
|   6   | `bool TagUser(ScreenshotHandle hScreenshot, CSteamID steamID)`                                                                |
|   7   | `bool TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)`                                    |

</details>
<!-- #endregion -->

<!-- #region 003 -->
<details style="margin-left: 20px">
<summary><b><code>003</code></b></summary>

|  Num  | Methods                                                                                                                       |
| :---: | :---------------------------------------------------------------------------------------------------------------------------- |
|   1   | `ScreenshotHandle WriteScreenshot(void *pubRGB, uint32 cubRGB, int nWidth, int nHeight)`                                      |
|   2   | `ScreenshotHandle AddScreenshotToLibrary(const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight)` |
|   3   | `void TriggerScreenshot()`                                                                                                    |
|   4   | `void HookScreenshots(bool bHook)`                                                                                            |
|   5   | `bool SetLocation(ScreenshotHandle hScreenshot, const char *pchLocation)`                                                     |
|   6   | `bool TagUser(ScreenshotHandle hScreenshot, CSteamID steamID)`                                                                |
|   7   | `bool TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)`                                    |
|   8   | `bool IsScreenshotsHooked()`                                                                                                  |
|   9   | `ScreenshotHandle AddVRScreenshotToLibrary(EVRScreenshotType eType, const char *pchFilename, const char *pchVRFilename)`      |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                                       | I. Versions         |
| :---: | :---------------------------------------------------------------------------------------------------------------------------- | :------------------ |
|   1   | `ScreenshotHandle AddScreenshotToLibrary(const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight)` | `001`, `002`, `003` |
|   2   | `ScreenshotHandle AddVRScreenshotToLibrary(EVRScreenshotType eType, const char *pchFilename, const char *pchVRFilename)`      | `003`               |
|   3   | `void HookScreenshots(bool bHook)`                                                                                            | `001`, `002`, `003` |
|   4   | `bool IsScreenshotsHooked()`                                                                                                  | `003`               |
|   5   | `bool SetLocation(ScreenshotHandle hScreenshot, const char *pchLocation)`                                                     | `001`, `002`, `003` |
|   6   | `bool TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)`                                    | `002`, `003`        |
|   7   | `bool TagUser(ScreenshotHandle hScreenshot, CSteamID steamID)`                                                                | `001`, `002`, `003` |
|   8   | `void TriggerScreenshot()`                                                                                                    | `001`, `002`, `003` |
|   9   | `ScreenshotHandle WriteScreenshot(void *pubRGB, uint32 cubRGB, int nWidth, int nHeight)`                                      | `001`, `002`, `003` |

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
class ISteamScreenshots;
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