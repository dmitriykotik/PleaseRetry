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

# PleaseRetrySteamworks
`PleaseRetrySteamworks` - это набор интерфейсов, необходимых для работы эмулятора.

Набор создан на основе следующих проектов:
- `SteamworksSDK`
- `OpenSteamworks`
- `GoldbergEmu`

В `CMake` проект определён как набор интерфейсов.
```cmake
add_library(${STEAMWORKS_NAME} INTERFACE)
``` 
Вы можете подключить `PleaseRetrySteamworks` следующим образом: 
```cmake
target_link_libraries(project_name PRIVATE ${STEAMWORKS_NAME})
```

---
Более подробную информацию Вы можете найти в документации по интерфейсам. Перейдите [**по этой ссылке**](https://pre.dmitriykotik.ru/#interfaces).

