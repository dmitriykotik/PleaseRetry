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

# ISteamMusic

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  165   |

```
001 - 129a, 130, 131, 132, 133b, 134, 135, 135a, 136, 137, 138a, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                    |
| :---: | :----------------------------------------- |
|   1   | `bool BIsEnabled()`                        |
|   2   | `bool BIsPlaying()`                        |
|   3   | `AudioPlayback_Status GetPlaybackStatus()` |
|   4   | `void Play()`                              |
|   5   | `void Pause()`                             |
|   6   | `void PlayPrevious()`                      |
|   7   | `void PlayNext()`                          |
|   8   | `void SetVolume(float flVolume)`           |
|   9   | `float GetVolume()`                        |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                    | I. Versions |
| :---: | :----------------------------------------- | :---------- |
|   1   | `bool BIsEnabled()`                        | `001`       |
|   2   | `bool BIsPlaying()`                        | `001`       |
|   3   | `AudioPlayback_Status GetPlaybackStatus()` | `001`       |
|   4   | `float GetVolume()`                        | `001`       |
|   5   | `void Pause()`                             | `001`       |
|   6   | `void Play()`                              | `001`       |
|   7   | `void PlayNext()`                          | `001`       |
|   8   | `void PlayPrevious()`                      | `001`       |
|   9   | `void SetVolume(float flVolume)`           | `001`       |

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
class ISteamMusic;
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