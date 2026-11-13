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
| File                        | Class                                      | Interface                                    | Found versions | Type  | Status  |
| :-------------------------- | :----------------------------------------- | :------------------------------------------- | :------------: | :---: | :-----: |
| isteamapplist.h             | ISteamAppList                              | STEAMAPPLIST_INTERFACE_VERSION`XXX`          |    001-001     |  `V`  | &check; |
| isteamappticket.h           | ISteamAppTicket                            | STEAMAPPTICKET_INTERFACE_VERSION`XXX`        |    001-001     |  `V`  | &check; |
| isteamapps.h                | ISteamApps                                 | STEAMAPPS_INTERFACE_VERSION`XXX`             |    001-009     |  `V`  | &check; |
| isteamclient.h              | ISteamClient                               | SteamClient`XXX`                             |    007-023     |  `V`  | &cross; |
| isteamcontentserver.h       | ISteamContentServer                        | SteamContentServer`XXX`                      |    001-002     |  `V`  | &check; |
| isteamcontroller.h          | ISteamController                           | ~                                            |       ~        |  `V`  | &check; |
| isteamfriends.h             | ISteamFriends                              | SteamFriends`XXX`                            |    003-018     |  `V`  | &check; |
| isteamgamecoordinator.h     | ISteamGameCoordinator                      | SteamGameCoordinator`XXX`                    |    001-001     |  `V`  | &check; |
| isteamgameserver.h          | ISteamGameServer                           | SteamGameServer`XXX`                         |    002-015     |  `V`  | &check; |
| isteamgameserverstats.h     | ISteamGameServerStats                      | SteamGameServerStats`XXX`                    |    001-001     |  `V`  | &check; |
| isteamgamestats.h           | ISteamGameStats                            | SteamGameStats`XXX`                          |    001-001     |  `V`  | &check; |
| isteamhtmlsurface.h         | ISteamHTMLSurface                          | STEAMHTMLSURFACE_INTERFACE_VERSION_`XXX`     |    001-005     |  `V`  | &check; |
| isteamhttp.h                | ISteamHTTP                                 | STEAMHTTP_INTERFACE_VERSION`XXX`             |    001-003     |  `V`  | &check; |
| isteaminput.h               | ISteamInput                                | SteamInput`XXX`                              |    001-007     |  `V`  | &check; |
| isteaminventory.h           | ISteamInventory                            | STEAMINVENTORY_INTERFACE_V`XXX`              |    001-003     |  `V`  | &check; |
| isteammasterserverupdater.h | ISteamMasterServerUpdater                  | SteamMasterServerUpdater`XXX`                |    001-001     |  `V`  | &cross; |
| isteammatchmaking.h         | ISteamMatchmaking                          | SteamMatchMaking`XXX`                        |    002-009     |  `V`  | &cross; |
| isteammatchmaking.h         | ISteamMatchmakingPingResponse              | -                                            |       -        |  `G`  |    -    |
| isteammatchmaking.h         | ISteamMatchmakingPlayersResponse           | -                                            |       -        |  `G`  |    -    |
| isteammatchmaking.h         | ISteamMatchmakingRulesResponse             | -                                            |       -        |  `G`  |    -    |
| isteammatchmaking.h         | ISteamMatchmakingServerFriendsResponse     | -                                            |       -        |  `G`  |    -    |
| isteammatchmaking.h         | ISteamMatchmakingServerListResponse        | -                                            |       -        |  `G`  |    -    |
| isteammatchmaking.h         | ISteamMatchmakingServers                   | SteamMatchMakingServers`XXX`                 |    001-003     |  `V`  | &cross; |
| isteammatchmaking.h         | ISteamGameSearch                           | SteamMatchGameSearch`XXX`                    |    001-001     |  `V`  | &cross; |
| isteammatchmaking.h         | ISteamParties                              | SteamParties`XXX`                            |    002-002     |  `V`  | &cross; |
| isteammusic.h               | ISteamMusic                                | STEAMMUSIC_INTERFACE_VERSION`XXX`            |    001-001     |  `V`  | &cross; |
| isteammusicremote.h         | ISteamMusicRemote                          | STEAMMUSICREMOTE_INTERFACE_VERSION`XXX`      |    001-001     |  `V`  | &cross; |
| isteamnetworking.h          | ISteamNetworking                           | SteamNetworking`XXX`                         |    001-006     |  `V`  | &cross; |
| isteamnetworkingfakeip.h    | ISteamNetworkingFakeUDPPort                | -                                            |       -        |  `G`  |    -    |
| isteamnetworkingmessages.h  | ISteamNetworkingMessages                   | SteamNetworkingMessages`XXX`                 |    002-002     |  `V`  | &cross; |
| isteamnetworkingsockets.h   | ISteamNetworkingSockets                    | SteamNetworkingSockets`XXX`                  |    001-013     |  `V`  | &cross; |
| isteamnetworkingsockets.h   | ISteamNetworkingConnectionCustomSignaling  | -                                            |       -        |  `G`  |    -    |
| isteamnetworkingsockets.h   | ISteamNetworkingConnectionSignaling        | -                                            |       -        |  `G`  |    -    |
| isteamnetworkingsockets.h   | ISteamNetworkingCustomSignalingRecvContext | -                                            |       -        |  `G`  |    -    |
| isteamnetworkingsockets.h   | ISteamNetworkingSignalingRecvContext       | -                                            |       -        |  `G`  |    -    |
| isteamnetworkingsockets.h   | ISteamNetworkingSocketsCallbacks           | -                                            |       -        |  `G`  |    -    |
| isteamnetworkingutils.h     | ISteamNetworkingUtils                      | SteamNetworkingUtils`XXX`                    |    001-004     |  `V`  | &cross; |
| isteamps3overlayrender.h    | ISteamPS3OverlayRender                     | -                                            |       -        |  `V`  | &cross; |
| isteamps3overlayrender.h    | ISteamPS3OverlayRenderHost                 | -                                            |       -        |  `G`  | &cross; |
| isteamparentalsettings.h    | ISteamParentalSettings                     | STEAMPARENTALSETTINGS_INTERFACE_VERSION`XXX` |    001-001     |  `V`  | &cross; |
| isteamremoteplay.h          | ISteamRemotePlay                           | STEAMREMOTEPLAY_INTERFACE_VERSION`XXX`       |    001-004     |  `V`  | &cross; |
| isteamremotestorage.h       | ISteamRemoteStorage                        | STEAMREMOTESTORAGE_INTERFACE_VERSION`XXX`    |    001-016     |  `V`  | &cross; |
| isteamscreenshots.h         | ISteamScreenshots                          | STEAMSCREENSHOTS_INTERFACE_VERSION`XXX`      |    001-003     |  `V`  | &cross; |
| isteamtv.h                  | ISteamTV                                   | STEAMTV_INTERFACE_V`XXX`                     |    001-001     |  `V`  | &cross; |
| isteamtimeline.h            | ISteamTimeline                             | STEAMTIMELINE_INTERFACE_V`XXX`               |    001-004     |  `V`  | &cross; |
| isteamugc.h                 | ISteamUGC                                  | STEAMUGC_INTERFACE_VERSION`XXX`              |    001-021     |  `V`  | &cross; |
| isteamunifiedmessages.h     | ISteamUnifiedMessages                      | STEAMUNIFIEDMESSAGES_INTERFACE_VERSION`XXX`  |    001-001     |  `V`  | &cross; |
| isteamuser.h                | ISteamUser                                 | SteamUser`XXX`                               |    009-023     |  `V`  | &cross; |
| isteamuserstats.h           | ISteamUserStats                            | STEAMUSERSTATS_INTERFACE_VERSION`XXX`        |    001-013     |  `V`  | &cross; |
| isteamutils.h               | ISteamUtils                                | SteamUtils`XXX`                              |    002-011     |  `V`  | &cross; |
| isteamvideo.h               | ISteamVideo                                | STEAMVIDEO_INTERFACE_V`XXX`                  |    001-007     |  `V`  | &cross; |

> [!WARNING]
> **Обратите внимание:** знак `~` означает, что вам необходимо прочитать документацию по этому интерфейсу.

`File` - Полное имя файла интерфейса в `Steamworks SDK`.\
`Class` - Класс, который использует этот интерфейс. Полезно для VTable.\
`Interface` - Текстовое название интерфейса. Обычно передаётся игрой в `steam_api`. Обратите внимание, что `XXX` - это версия интерфейса. Например: `SteamClientXXX` -> `SteamClient015`.
> [!IMPORTANT]
> Текстовое название интерфейса может отличаться от названия класса интерфейса.

`Versions` - Версии интерфейсов, которые были найдены и добавлены в проект.\
`Type` - Тип класса. `V` - Имеет одну или несколько версий (явно объявляемые), является интерфейсом, логику реализует эмулятор; `G` - Имеет только одну версию (на все версии SDK), не является интерфейсом, логику реализует игра.\
`Status` - Статус разработки интерфейса в данном проекте.

## Что это?
`PleaseRetrySteamworks` -- это SDK, в котором собраны интерфейсы и типы данных `SteamworksSDK`. Я написал его как дополнение для своего основного проекта `PleaseRetryEmu`, потому что существующие варианты меня не совсем устроили.


### Зачем?
- `GoldbergEmu` - отличный проект, но взаимодействовать с его SDK мне показалось неудобно. К тому же SDK в проекте уже давно не обновлялся, а ведь уже появились новые версии интерфейсов.
- `OpenSteamworks` - точно так же, как и с `GoldbergEmu`. Проекту уже лет 15, и он давно заброшен, ведь разрабатывался когда не было публичного `SteamworksSDK`.
- `SteamworksSDK` - изначально заточен под разработчиков игр, а не под другие цели. В нём куча вещей, которые для эмуляции просто не нужны. Тянуть его целиком в проект, на мой взгляд, непрактично.

Ну, вы понимаете. Мне показалось, что проще написать с нуля свой SDK, взяв только самое необходимое. Считайте, что мой проект - это не форк `SteamworksSDK`, а полностью новый SDK, созданный специально для целей, где есть зависимость от версий интерфейсов.

> [!NOTE]
> Однако, не все интерфейсы и методы были написаны только с помощью `SteamworksSDK`. За основу некоторых методов и интерфейсов пришлось брать сторонние проекты (например, `GoldbergEmu` и `OpenSteamworks`), а также данные, полученные реверс инженерингом.

**Обратите внимание:** может возникнуть проблема совместимости со `SteamworksSDK`. Если для ваших задач нет необходимости использовать разные версии инструментов, то лучше используйте оригинальный `SteamworksSDK`.

## О таблицах в документации
В начале файла приведена таблица со всеми интерфейсами о которых будет идти речь дальше. Однако, в документации есть и другие таблицы, которые по структуре будут одинаковыми, поэтому я распишу определения для всех повторяющихся (по структуре) таблиц в этом файле, чтобы не писать их под каждой таблицей.

**Общие определения:**\
`Value` - Некоторое значение в таблице.\
`Некоторый интерфейс` - Интерфейс, о котором идёт речь в текущей главе.\
`SDK` - `SteamworksSDK`. Версии обозначаются числами (например, `122`), числами с буквой (например, `123a`), буквами (например, `G` или `O`).\
`I. Versions` - Версии `некоторого интерфейса`.

### Таблицы
<details>
<summary><b><code>SDKs used</code></b></summary>

| Version | U. SDK  |
| :-----: | :-----: |
| `Value` | `Value` |

```
`Version` - `L. SDK`
```

В этой таблице приведены версии `некоторого интерфейса` и версии `SDK`, которые были использованы для этих интерфейсов. Однако, некоторые интерфейсы могут быть заимствованы из сторонних проектов. В таком случае вместо версии `SDK` указывается буквенный идентификатор проекта (*это означает, что в публичном `SDK` (`SteamworksSDK`) я не нашёл этот интерфейс, но он существует*):
- `G` - `GoldbergEmu`.
- `O` - `OpenSteamworks`.
- &cross; - Нет информации.
  
#### Определения
`Version` - Версия `некоторого интерфейса`.\
`L. SDK` - Список версий `SDK`, в которых была найдена версия `некоторого интерфейса`.
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