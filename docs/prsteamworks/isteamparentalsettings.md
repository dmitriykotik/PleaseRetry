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

# ISteamParentalSettings

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  165   |

```
001 - 141, 142, 143, 144, 145, 146, 147, 148a, 149, 150, 151, 152, 153a, 154, 155, 156, 157, 158a, 159, 160, 161, 162, 163, 164, 165, G
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                 |
| :---: | :------------------------------------------------------ |
|   1   | `bool BIsParentalLockEnabled()`                         |
|   2   | `bool BIsParentalLockLocked()`                          |
|   3   | `bool BIsAppBlocked(AppId_t nAppID)`                    |
|   4   | `bool BIsAppInBlockList(AppId_t nAppID)`                |
|   5   | `bool BIsFeatureBlocked(EParentalFeature eFeature)`     |
|   6   | `bool BIsFeatureInBlockList(EParentalFeature eFeature)` |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                 | I. Versions |
| :---: | :------------------------------------------------------ | :---------- |
|   1   | `bool BIsAppBlocked(AppId_t nAppID)`                    | `001`       |
|   2   | `bool BIsAppInBlockList(AppId_t nAppID)`                | `001`       |
|   3   | `bool BIsFeatureBlocked(EParentalFeature eFeature)`     | `001`       |
|   4   | `bool BIsFeatureInBlockList(EParentalFeature eFeature)` | `001`       |
|   5   | `bool BIsParentalLockEnabled()`                         | `001`       |
|   6   | `bool BIsParentalLockLocked()`                          | `001`       |

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
class ISteamParentalSettings;
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