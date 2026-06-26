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

# ISteamAppList

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | F. SDK | L. SDK | U. SDK |
| :-----: | :----: | :----: | :----: |
|   001   |   29   |   58   |   58   |
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                    |
| :---: | :------------------------------------------------------------------------- |
|   1   | `uint32 GetNumInstalledApps()`                                             |
|   2   | `uint32 GetInstalledApps(AppId_t *pvecAppID, uint32 unMaxAppIDs)`          |
|   3   | `int GetAppName(AppId_t nAppID, char *pchName, int cchNameMax)`            |
|   4   | `int GetAppInstallDir(AppId_t nAppID, char *pchDirectory, int cchNameMax)` |
|   5   | `int GetAppBuildId(AppId_t nAppID)`                                        |

</details>

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
class ISteamAppList;
```

Позволяет обнаруживать установленные приложения для локального клиента Steam.

## GetNumInstalledApps
```cpp
uint32 GetNumInstalledApps()
```

Получает количество установленных приложений.

**Возвращает:** `uint32`\
Количество установленных приложений.

## GetInstalledApps
```cpp
uint32 GetInstalledApps(AppId_t *pvecAppID, uint32 unMaxAppIDs)
```

| Название      | Тип         | Описание                                                                       |
| :------------ | :---------- | :----------------------------------------------------------------------------- |
| `pvecAppId`   | `AppId_t *` | Буфер типа `AppId_t`, в который записываются `AppId` установленных приложений. |
| `unMaxAppIDs` | `uint32`    | Размер буфера `pvecAppId` в количестве элементов.                              |

Получает установленные приложения и записывает их `AppId_t` в буфер `pvecAppId`.

**Возвращает:** `uint32`\
Количество элементов, записанных в буфер `pvecAppId`.

## GetAppName
```cpp
int GetAppName(AppId_t nAppID, char *pchName, int cchNameMax)
```

| Название     | Тип       | Описание                                                              |
| :----------- | :-------- | :-------------------------------------------------------------------- |
| `nAppID`     | `AppId_t` | `AppId`, для которого запрашивается информация о названии приложения. |
| `pchName`    | `char *`  | Строковой буфер, в который передаётся название приложения.            |
| `cchNameMax` | `int`     | Размер буфера `pchName` в байтах.                                     |

Получает название установленного приложения по его `AppId`.

**Возвращает:** `int`\
Количество символов записанных в буфер `pchName`.\
`-1` если указанное приложение не было найдено в системе.

## GetAppInstallDir
```cpp
int GetAppInstallDir(AppId_t nAppID, char *pchDirectory, int cchNameMax)
```

| Название       | Тип       | Описание                                                          |
| :------------- | :-------- | :---------------------------------------------------------------- |
| `nAppID`       | `AppId_t` | `AppId`, для которого запрашивается информация о папке установки. |
| `pchDirectory` | `char *`  | Строковой буфер, в который копируется путь к папке.               |
| `cchNameMax`   | `int`     | Размер буфера `pchDirectory` в байтах.                            |

Получает папку установленного приложения по его `AppId`.

**Возвращает:** `int`\
Длина записанной строки в байтах.\
`-1` если указанное приложение не было найдено в системе или если папка установки не определена.

## GetAppBuildId
```cpp
int GetAppBuildId(AppId_t nAppID)
```

| Название | Тип       | Описание                                                        |
| :------- | :-------- | :-------------------------------------------------------------- |
| `nAppID` | `AppId_t` | `AppId`, для которого запрашивается информация о номере сборки. |

Получает номер сборки установленного приложения по его `AppId`.

**Возвращает:** `int`\
Номер сборки установленного приложения.
<!-- #endregion -->