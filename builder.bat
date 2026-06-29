REM //========= Copyright (C) 2026, dmitriykotik. Released under the MIT License. ==//
REM // This file is part of PleaseRetryEmu, an open-source project. This software 
REM // is provided "AS IS", without warranty of any kind, express or implied, 
REM // including but not limited to the warranties of merchantability, fitness 
REM // for a particular purpose and noninfringement.
REM //
REM // LEGAL NOTICE: This software is an independent compatibility layer and is NOT 
REM // affiliated with, endorsed, or authorized by Valve Corporation. "Steam" and 
REM // "Steamworks" are registered trademarks of Valve Corporation. 
REM //
REM // Developed strictly for EDUCATIONAL, RESEARCH, and software preservation 
REM // purposes. The author holds NO LIABILITY for any misuse, legal consequences, 
REM // or third-party restrictions. All actions are performed at your own risk.
REM //=============================================================================//

@echo off
setlocal EnableDelayedExpansion
chcp 65001 >nul

set BUILD_TYPE=Release
set ARCH=x86
set GENERATOR=Visual Studio 18 2026

:menu
cls
echo =========================================================
echo   [ PleaseRetry Builder ]
echo =========================================================
echo.
echo   Current Configuration:
echo   -------------------------------------------------------
echo   [1] Build Type : %BUILD_TYPE%
echo   [2] Target Arch: %ARCH%
echo   [3] Generator  : %GENERATOR%
echo.
echo   Actions:
echo   -------------------------------------------------------
echo   [4] Configure  (CMake Generate)
echo   [5] Build      (CMake Build)
echo   [6] Clean      (Remove Cache)
echo   [7] Publish    (Deploy)
echo.
echo   [0] Exit
echo =========================================================
set /p choice=" Select an option > "

if "%choice%"=="1" goto change_type
if "%choice%"=="2" goto change_arch
if "%choice%"=="3" goto change_gen
if "%choice%"=="4" goto configure
if "%choice%"=="5" goto build
if "%choice%"=="6" goto clean
if "%choice%"=="7" goto publish
if "%choice%"=="0" goto exit

goto menu

:change_type
cls
echo =========================================================
echo   [ Select Build Type ]
echo =========================================================
echo   [1] Debug
echo   [2] Release
echo =========================================================
set /p t=" Select an option > "
if "%t%"=="1" set BUILD_TYPE=Debug
if "%t%"=="2" set BUILD_TYPE=Release
goto menu

:change_arch
cls
echo =========================================================
echo   [ Select Architecture ]
echo =========================================================
echo   [1] x64
echo   [2] x86 (32-bit)
echo =========================================================
set /p a=" Select an option > "
if "%a%"=="1" set ARCH=x64
if "%a%"=="2" set ARCH=x86
goto menu

:change_gen
cls
echo =========================================================
echo   [ Select CMake Generator ]
echo =========================================================
echo   [1] Ninja
echo   [2] Visual Studio 18 2026
echo   [3] Visual Studio 17 2022
echo   [4] Visual Studio 16 2019
echo   [5] Visual Studio 15 2017
echo   [6] Visual Studio 14 2015
echo   [7] Custom Input...
echo =========================================================
set /p g=" Select an option > "
if "%g%"=="1" set GENERATOR=Ninja
if "%g%"=="2" set GENERATOR=Visual Studio 18 2026
if "%g%"=="3" set GENERATOR=Visual Studio 17 2022
if "%g%"=="4" set GENERATOR=Visual Studio 16 2019
if "%g%"=="5" set GENERATOR=Visual Studio 15 2017
if "%g%"=="6" set GENERATOR=Visual Studio 14 2015
if "%g%"=="7" (
    set /p GENERATOR=" Enter custom generator name > "
)
goto menu

:get_build_dir
set BUILD_DIR=build\%ARCH%_%BUILD_TYPE%
exit /b

:configure_func
call :get_build_dir
echo.
echo [INFO] Generating project in %BUILD_DIR%...

set CMAKE_ARCH=%ARCH%
if "%ARCH%"=="x86" set CMAKE_ARCH=Win32

if "%GENERATOR%"=="Ninja" (
    cmake -S . -B %BUILD_DIR% -G "%GENERATOR%" -DCMAKE_BUILD_TYPE=%BUILD_TYPE%
) else (
    cmake -S . -B %BUILD_DIR% -G "%GENERATOR%" -A !CMAKE_ARCH! -DCMAKE_BUILD_TYPE=%BUILD_TYPE%
)
exit /b

:configure
call :configure_func
echo.
pause
goto menu

:build
call :get_build_dir
call :configure_func
echo.
echo [INFO] Building project...
cmake --build %BUILD_DIR% --config %BUILD_TYPE% --parallel
echo.
pause
goto menu

:clean
call :get_build_dir
echo.
echo [INFO] Removing directory: %BUILD_DIR%...
if exist %BUILD_DIR% rmdir /s /q %BUILD_DIR%
echo [INFO] Clean complete.
echo.
pause
goto menu

:publish
call :get_build_dir
set PUBLISH_DIR=publish\%ARCH%_%BUILD_TYPE%
echo.
echo [INFO] Publishing artifacts to: %PUBLISH_DIR%...
cmake --install %BUILD_DIR% --config %BUILD_TYPE% --prefix %PUBLISH_DIR%
echo.
pause
goto menu

:exit
echo.
echo =========================================================
echo   [ Are you sure you want to exit? ]
echo =========================================================
echo   [1] Yes
echo   [2] No
echo =========================================================
set /p a=" Select an option > "
if "%a%"=="1" goto sure
if "%a%"=="2" goto menu
goto menu

:sure
endlocal
exit /b