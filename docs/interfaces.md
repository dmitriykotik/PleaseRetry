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

# Интерфейсы
В данной документации вы найдёте всю необходимую информацию по интерфейсам.

## Таблица
| File                        | Class                     | Interface                                    | Found versions | Real versions | Status  |
| :-------------------------- | :------------------------ | :------------------------------------------- | :------------: | :-----------: | :-----: |
| isteamapplist.h             | ISteamAppList             | STEAMAPPLIST_INTERFACE_VERSION`XXX`          |    001-001     |    001-001    | &check; |
| isteamapps.h                | ISteamApps                | STEAMAPPS\_INTERFACE\_VERSION`XXX`           |    001-009     |    001-009    | &check; |
| isteamappticket.h           | ISteamAppTicket           | STEAMAPPTICKET_INTERFACE_VERSION`XXX`        |    001-001     |    001-001    | &check; |
| isteamclient.h              | ISteamClient              | SteamClient`XXX`                             |    007-023     |    006-023    | &cross; |
| isteamcontroller.h          | ISteamController          | ~                                            |       ~        |       ~       | &cross; |
| isteamfriends.h             | ISteamFriends             | SteamFriends`XXX`                            |    003-018     |    001-018    | &check; |
| isteamgamecoordinator.h     | ISteamGameCoordinator     | SteamGameCoordinator`XXX`                    |    001-001     |    001-001    | &cross; |
| isteamgameserver.h          | ISteamGameServer          | SteamGameServer`XXX`                         |    004-015     |    002-015    | &cross; |
| isteamgameserverstats.h     | ISteamGameServerStats     | SteamGameServerStats`XXX`                    |    001-001     |    001-001    | &cross; |
| isteamgamestats.h           | ISteamGameStats           | SteamGameStats`XXX`                          |    001-001     |    001-001    | &cross; |
| isteamhtmlsurface.h         | ISteamHTMLSurface         | STEAMHTMLSURFACE_INTERFACE_VERSION_`XXX`     |    002-005     |    001-005    | &cross; |
| isteamhttp.h                | ISteamHTTP                | STEAMHTTP_INTERFACE_VERSION`XXX`             |    001-003     |    001-003    | &cross; |
| isteaminput.h               | ISteamInput               | SteamInput`XXX`                              |    001-006     |    001-006    | &cross; |
| isteaminventory.h           | ISteamInventory           | STEAMINVENTORY_INTERFACE_V`XXX`              |    001-003     |    001-003    | &cross; |
| isteammasterserverupdater.h | ISteamMasterServerUpdater | SteamMasterServerUpdater`XXX`                |    001-001     |    001-001    | &cross; |
| isteammatchmaking.h         | ISteamMatchmaking         | SteamMatchMaking`XXX`                        |    002-009     |    001-009    | &cross; |
| isteammatchmaking.h         | ISteamMatchmakingServers  | SteamMatchMakingServers`XXX`                 |    001-002     |    001-002    | &cross; |
| isteammatchmaking.h         | ISteamGameSearch          | SteamMatchGameSearch`XXX`                    |    001-001     |    001-002    | &cross; |
| isteammatchmaking.h         | ISteamParties             | SteamParties`XXX`                            |    002-002     |    002-002    | &cross; |
| isteammusic.h               | ISteamMusic               | STEAMMUSIC_INTERFACE_VERSION`XXX`            |    001-001     |    001-001    | &cross; |
| isteammusicremote.h         | ISteamMusicRemote         | STEAMMUSICREMOTE_INTERFACE_VERSION`XXX`      |    001-001     |    001-001    | &cross; |
| isteamnetworking.h          | ISteamNetworking          | SteamNetworking`XXX`                         |    001-006     |    001-006    | &cross; |
| isteamnetworkingmessages.h  | ISteamNetworkingMessages  | SteamNetworkingMessages`XXX`                 |    002-002     |    002-002    | &cross; |
| isteamnetworkingsockets.h   | ISteamNetworkingSockets   | SteamNetworkingSockets`XXX`                  |    002-012     |    002-012    | &cross; |
| isteamnetworkingutils.h     | ISteamNetworkingUtils     | SteamNetworkingUtils`XXX`                    |    001-004     |    001-004    | &cross; |
| isteamparentalsettings.h    | ISteamParentalSettings    | STEAMPARENTALSETTINGS_INTERFACE_VERSION`XXX` |    001-001     |    001-001    | &cross; |
| isteamremoteplay.h          | ISteamRemotePlay          | STEAMREMOTEPLAY_INTERFACE_VERSION`XXX`       |    001-004     |    001-004    | &cross; |
| isteamremotestorage.h       | ISteamRemoteStorage       | STEAMREMOTESTORAGE_INTERFACE_VERSION`XXX`    |    002-016     |    001-016    | &cross; |
| isteamscreenshots.h         | ISteamScreenshots         | STEAMSCREENSHOTS_INTERFACE_VERSION`XXX`      |    001-003     |    001-004    | &cross; |
| isteamtimeline.h            | ISteamTimeline            | STEAMTIMELINE_INTERFACE_V`XXX`               |    001-004     |    001-004    | &cross; |
| isteamugc.h                 | ISteamUGC                 | STEAMUGC_INTERFACE_VERSION`XXX`              |    001-021     |    001-021    | &cross; |
| isteamunifiedmessages.h     | ISteamUnifiedMessages     | STEAMUNIFIEDMESSAGES_INTERFACE_VERSION`XXX`  |    001-001     |    001-001    | &cross; |
| isteamuser.h                | ISteamUser                | SteamUser`XXX`                               |    009-023     |    004-023    | &cross; |
| isteamuserstats.h           | ISteamUserStats           | STEAMUSERSTATS\_INTERFACE\_VERSION`XXX`      |    003-013     |    001-013    | &cross; |
| isteamutils.h               | ISteamUtils               | SteamUtils`XXX`                              |    002-010     |    001-010    | &cross; |
| isteamvideo.h               | ISteamVideo               | STEAMVIDEO_INTERFACE_V`XXX`                  |    001-007     |    001-007    | &cross; |

> [!WARNING]
> **Обратите внимание:** знак `~` означает, что вам необходимо прочитать документацию по этому интерфейсу. Всю информацию вы найдёте в этом файле.

:::NOTE
frerfe
:::

`File` - Полное имя файла интерфейса в `Steamworks SDK`.\
`Class` - Класс, который использует этот интерфейс. Полезно для VTable.\
`Interface` - Текстовое название интерфейса. Обычно передаётся игрой в `steam_api`. Обратите внимание, что `XXX` - это версия интерфейса. Например: `SteamClientXXX` -> `SteamClient015`.
> [!IMPORTANT]
> Текстовое название интерфейса может отличаться от названия класса интерфейса.

`Found versions` - Версии интерфейсов, которые были найдены и добавлены в проект.\
`Real versions` - Версии интерфейсов, которые были обнаружены в различных библиотеках `Steam`. Однако значение `Real versions` может отличаться, если какие-то версии интерфейсов по каким-либо причинам недоступны.
`Status` - Статус разработки интерфейса в данном проекте.

## Что это?
`PleaseRetrySteamworks` — это SDK, в котором собраны интерфейсы и типы данных `SteamworksSDK`. Я написал его как дополнение для своего основного проекта `PleaseRetryEmu`, потому что существующие варианты меня не совсем устроили.


### Зачем?
- `GoldbergEmu` - отличный проект, но взаимодействовать с его SDK мне показалось неудобно. К тому же SDK в проекте уже давно не обновлялся, а ведь уже появились новые версии интерфейсов.
- `OpenSteamworks` - точно так же, как и с `GoldbergEmu`. Проекту уже лет 15, и он давно заброшен по понятным причинам.
- `SteamworksSDK` - изначально заточен под разработчиков игр, а не под другие цели. В нём куча вещей, которые для эмуляции просто не нужны. Тянуть его целиком в проект, на мой взгляд, непрактично - для понимания структуры запросов steam_api вполне достаточно одних интерфейсов.

Ну, вы понимаете. Мне показалось, что проще написать с нуля свой SDK, взяв только самое необходимое. Считайте, что мой проект - это не форк `SteamworksSDK`, а полностью новый SDK, созданный специально для целей, где есть зависимость от версий интерфейсов.

> [!NOTE]
> Однако, не все интерфейсы и методы были написаны только с помощью `SteamworksSDK`. За основу некоторых методов и интерфейсов пришлось брать сторонние проекты (например, `GoldbergEmu` и `OpenSteamworks`), а также данные, полученные реверс инженерингом.

**Обратите внимание:** может возникнуть проблема совместимости со `SteamworksSDK`. Если для ваших задач нет необходимости использовать разные версии инструментов, то лучше используйте оригинальный `SteamworksSDK`.

## О таблицах в документации
В начале файла приведена таблица со всеми интерфейсами о которых будет идти речь дальше. Однако, в документации есть и другие таблицы, которые по структуре будут одинаковыми, поэтому я распишу определения для всех повторяющихся (по структуре) таблиц в этом файле, чтобы не писать их под каждой таблицей.

**Общие определения:**\
`Value` - Некоторое значение в таблице.\
`Некоторый интерфейс` - Интерфейс, о котором идёт речь в текущей главе.\
`SDK` - `SteamworksSDK`. В контексте версий данного проекта используется сокращенный формат: версии обозначаются двузначным числом (например, `47`), тогда как в оригинале используется трехзначное число, всегда начинающееся с единицы (например, `147`). (`версия в проекте` → `версия в оригинале`: `47` → `147`, `32` → `132` и т.д.)\
`I. Versions` - Версии `некоторого интерфейса`.

### Таблицы
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | F. SDK  | L. SDK  | U. SDK  |
| :-----: | :-----: | :-----: | :-----: |
| `Value` | `Value` | `Value` | `Value` |

В этой таблице приведены версии `некоторого интерфейса` и версии `SDK`, в которых они были обнаружены. Однако, некоторые интерфейсы могут быть заимствованы из сторонних проектов. В таком случае вместо версии `SDK` указывается буквенный идентификатор проекта (*это означает, что в публичном `SDK` я не нашёл этот интерфейс, но он существует*):
- `G` - `GoldbergEmu`.
- `O` - `OpenSteamworks`.
- &cross; - Нет информации.
  
#### Определения
`Version` - Версия `некоторого интерфейса`.\
`F. SDK` - Версия `SDK`, в которой впервые появился интерфейс.\
`L. SDK` - Версия `SDK`, в которой последний раз появился этот интерфейс. (_* - означает, что интерфейс используется в последней версии `SDK` на момент последнего редактирования документации_)\
`U. SDK` - Версия `SDK`, интерфейс которой был использован в этом проекте. 
</details>

<details>
<summary><b><code>Methods</code></b></summary>

<details style="margin-left: 20px">
<summary><b><code>xxx</code></b></summary>

|   Num   | Methods |
| :-----: | :------ |
| `Value` | `Value` |

В этой таблице приведены методы `некоторого интерфейса` версии `xxx`. Методы расположены в том же порядке, в каком они объявлены в самом классе `некоторого интерфейса`. 

#### Определения
`xxx` - Версия `некоторого интерфейса`.\
`Num` - Метод по счёту.\
`Methods` - Методы.

</details>

</details>

---
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

# ISteamAppTicket

<!-- #region SDKs used -->
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | F. SDK | L. SDK | U. SDK |
| :-----: | :----: | :----: | :----: |
|   001   |   12   |   *    |  *64   |
</details>
<!-- #endregion -->

<!-- #region Methods -->
<details>
<summary><b><code>Methods</code></b></summary>

<details style="margin-left: 20px">
<summary><b><code>001</code></b></summary>

|  Num  | Methods                                                                                                                                                                 |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|   1   | `uint32 GetAppOwnershipTicketData(uint32 nAppID, void *pvBuffer, uint32 cbBufferLength, uint32 *piAppId, uint32 *piSteamId, uint32 *piSignature, uint32 *pcbSignature)` |

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
class ISteamAppTicket;
```

Предоставляет зашифрованные билеты владения для проверки лицензии приложения и `SteamID` пользователя без постоянного обращения к серверам.

## GetAppOwnershipTicketData
```cpp
uint32 GetAppOwnershipTicketData(uint32 nAppID, void *pvBuffer, uint32 cbBufferLength, uint32 *piAppId, uint32 *piSteamId, uint32 *piSignature, uint32 *pcbSignature)
```

| Название         | Тип        | Описание                                             |
| :--------------- | :--------- | :--------------------------------------------------- |
| `nAppID`         | `uint32`   | Идентификатор запрашиваемого приложения.             |
| `pvBuffer`       | `void *`   | Буфер для записи билета владения.                    |
| `cbBufferLength` | `uint32`   | Максимальный размер буфера в байтах.                 |
| `piAppId`        | `uint32 *` | Смещение (в байтах) до поля `AppId` внутри билета.   |
| `piSteamId`      | `uint32 *` | Смещение (в байтах) до поля `SteamID` внутри билета. |
| `piSignature`    | `uint32 *` | Смещение (в байтах) до начала криптоподписи.         |
| `pcbSignature`   | `uint32 *` | Длина подписи в байтах.                              |

Копирует сырой буфер билета в `pvBuffer` и возвращает смещения ключевых полей внутри него.

**Возвращает:** `uint32`\
количество фактически записанных байт в `pvBuffer`.
<!-- #endregion -->