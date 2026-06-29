# //========= Copyright (C) 2026, dmitriykotik. Released under the MIT License. ==//
# // This file is part of PleaseRetryEmu, an open-source project. This software 
# // is provided "AS IS", without warranty of any kind, express or implied, 
# // including but not limited to the warranties of merchantability, fitness 
# // for a particular purpose and noninfringement.
# //
# // LEGAL NOTICE: This software is an independent compatibility layer and is NOT 
# // affiliated with, endorsed, or authorized by Valve Corporation. "Steam" and 
# // "Steamworks" are registered trademarks of Valve Corporation. 
# //
# // Developed strictly for EDUCATIONAL, RESEARCH, and software preservation 
# // purposes. The author holds NO LIABILITY for any misuse, legal consequences, 
# // or third-party restrictions. All actions are performed at your own risk.
# //=============================================================================//

set(EMUDLL_NAME "PREmuDll" CACHE INTERNAL "")

set(libraryName32 "steam_api")
set(libraryName64 "steam_api64")

add_library(${EMUDLL_NAME} SHARED main.cpp)

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set_target_properties(${EMUDLL_NAME} PROPERTIES OUTPUT_NAME ${libraryName64})
else()
    set_target_properties(${EMUDLL_NAME} PROPERTIES OUTPUT_NAME ${libraryName32})
endif()

set_target_properties(${EMUDLL_NAME} PROPERTIES
    LINKER_LANGUAGE CXX
)

target_link_libraries(${EMUDLL_NAME} PRIVATE ${STEAMWORKS_NAME})