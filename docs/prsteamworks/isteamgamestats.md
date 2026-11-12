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

# ISteamGameStats

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK |
| :-----: | :----: |
|   001   |  117   |

```
001 - 108, 109, 110, 111, 112, 113, 114, 115, 116, 117
```
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<!-- #region 001 -->
<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                    |
| :---: | :--------------------------------------------------------------------------------------------------------- |
|   1   | `SteamAPICall_t GetNewSession(int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted)` |
|   2   | `SteamAPICall_t EndSession(uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode)`                      |
|   3   | `EResult AddSessionAttributeInt(uint64 ulSessionID, const char* pstrName, int32 nData)`                    |
|   4   | `EResult AddSessionAttributeString(uint64 ulSessionID, const char* pstrName, const char *pstrData)`        |
|   5   | `EResult AddSessionAttributeFloat(uint64 ulSessionID, const char* pstrName, float fData)`                  |
|   6   | `EResult AddNewRow(uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName)`                       |
|   7   | `EResult CommitRow(uint64 ulRowID)`                                                                        |
|   8   | `EResult CommitOutstandingRows(uint64 ulSessionID)`                                                        |
|   9   | `EResult AddRowAttributeInt(uint64 ulRowID, const char *pstrName, int32 nData)`                            |
|  10   | `EResult AddRowAtributeString(uint64 ulRowID, const char *pstrName, const char *pstrData)`                 |
|  11   | `EResult AddRowAttributeFloat(uint64 ulRowID, const char *pstrName, float fData)`                          |
|  12   | `EResult AddSessionAttributeInt64(uint64 ulSessionID, const char *pstrName, int64 llData)`                 |
|  13   | `EResult AddRowAttributeInt64(uint64 ulRowID, const char *pstrName, int64 llData)`                         |

</details>
<!-- #endregion -->

<!-- #region All -->
<details style="margin-left: 20px">
<summary><b><code>All</code></b></summary>

|  Num  | Methods                                                                                                    | I. Versions |
| :---: | :--------------------------------------------------------------------------------------------------------- | :---------- |
|   1   | `EResult AddNewRow(uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName)`                       | `001`       |
|   2   | `EResult AddRowAtributeString(uint64 ulRowID, const char *pstrName, const char *pstrData)`                 | `001`       |
|   3   | `EResult AddRowAttributeFloat(uint64 ulRowID, const char *pstrName, float fData)`                          | `001`       |
|   4   | `EResult AddRowAttributeInt(uint64 ulRowID, const char *pstrName, int32 nData)`                            | `001`       |
|   5   | `EResult AddRowAttributeInt64(uint64 ulRowID, const char *pstrName, int64 llData)`                         | `001`       |
|   6   | `EResult AddSessionAttributeFloat(uint64 ulSessionID, const char* pstrName, float fData)`                  | `001`       |
|   7   | `EResult AddSessionAttributeInt(uint64 ulSessionID, const char* pstrName, int32 nData)`                    | `001`       |
|   8   | `EResult AddSessionAttributeInt64(uint64 ulSessionID, const char *pstrName, int64 llData)`                 | `001`       |
|   9   | `EResult AddSessionAttributeString(uint64 ulSessionID, const char* pstrName, const char *pstrData)`        | `001`       |
|  10   | `EResult CommitOutstandingRows(uint64 ulSessionID)`                                                        | `001`       |
|  11   | `EResult CommitRow(uint64 ulRowID)`                                                                        | `001`       |
|  12   | `SteamAPICall_t EndSession(uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode)`                      | `001`       |
|  13   | `SteamAPICall_t GetNewSession(int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted)` | `001`       |

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
class ISteamGameStats;
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