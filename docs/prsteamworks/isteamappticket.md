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
Количество фактически записанных байт в `pvBuffer`.
<!-- #endregion -->