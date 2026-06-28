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

# Интерфейсы (_`PleaseRetrySteamworks`_)
В данной документации вы найдёте всю необходимую информацию по интерфейсам.

## Таблица
| File                        | Class                     | Interface                                    | Found versions | Real versions | Status  |
| :-------------------------- | :------------------------ | :------------------------------------------- | :------------: | :-----------: | :-----: |
| isteamapplist.h             | ISteamAppList             | STEAMAPPLIST_INTERFACE_VERSION`XXX`          |    001-001     |    001-001    | &check; |
| isteamapps.h                | ISteamApps                | STEAMAPPS\_INTERFACE\_VERSION`XXX`           |    001-009     |    001-009    | &check; |
| isteamappticket.h           | ISteamAppTicket           | STEAMAPPTICKET_INTERFACE_VERSION`XXX`        |    001-001     |    001-001    | &check; |
| isteamclient.h              | ISteamClient              | SteamClient`XXX`                             |    007-023     |    006-023    | &cross; |
| isteamcontroller.h          | ISteamController          | ~                                            |       ~        |       ~       | &check; |
| isteamfriends.h             | ISteamFriends             | SteamFriends`XXX`                            |    003-018     |    001-018    | &cross; |
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