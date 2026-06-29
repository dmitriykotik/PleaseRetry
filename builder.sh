#!/bin/bash

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

BUILD_TYPE="Release"
ARCH="x86"
GENERATOR="Unix Makefiles"

# ANSI Colors
CYAN='\033[1;36m'
GREEN='\033[1;32m'
YELLOW='\033[1;33m'
RED='\033[1;31m'
NC='\033[0m'

function show_menu() {
    clear
    echo -e "${CYAN}=========================================================${NC}"
    echo -e "   ${GREEN}[ PleaseRetry Builder ]${NC}"
    echo -e "${CYAN}=========================================================${NC}"
    echo ""
    echo -e "   ${YELLOW}Current Configuration:${NC}"
    echo "   -------------------------------------------------------"
    echo -e "   [1] Build Type : ${GREEN}$BUILD_TYPE${NC}"
    echo -e "   [2] Target Arch: ${GREEN}$ARCH${NC}"
    echo -e "   [3] Generator  : ${GREEN}$GENERATOR${NC}"
    echo ""
    echo -e "   ${YELLOW}Actions:${NC}"
    echo "   -------------------------------------------------------"
    echo "   [4] Configure  (CMake Generate)"
    echo "   [5] Build      (CMake Build)"
    echo "   [6] Clean      (Remove Cache)"
    echo "   [7] Publish    (Deploy)"
    echo ""
    echo -e "   [0] ${RED}Exit${NC}"
    echo -e "${CYAN}=========================================================${NC}"
}

function get_build_dir() {
    BUILD_DIR="build/${ARCH}_${BUILD_TYPE}"
}

function configure_func() {
	get_build_dir
    echo -e "\n${CYAN}[INFO] Generating project in $BUILD_DIR...${NC}"
            
    ARCH_FLAGS=""
    if [ "$ARCH" == "x86" ]; then
        ARCH_FLAGS="-DCMAKE_C_FLAGS=-m32 -DCMAKE_CXX_FLAGS=-m32"
    fi
           
    cmake -S . -B "$BUILD_DIR" -G "$GENERATOR" -DCMAKE_BUILD_TYPE="$BUILD_TYPE" $ARCH_FLAGS
}

function pause() {
    read -p " Press Enter to continue..."
}

function ays() {
    echo ""
    echo -e " ${CYAN}: Are you sure you want to exit?${NC}"
    echo -e " ${RED}[1] Yes${NC}"
    echo -e " ${GREEN}[2] No${NC}"
    read -p " Select an option > " t
    case $t in
        1) sure
    esac
}

function sure() {
    exit 0
}

while true; do
    show_menu
    read -p " Select an option > " choice

    case $choice in
        1)
            echo ""
            echo " [1] Debug"
            echo " [2] Release"
            read -p " Select Build Type > " t
            case $t in
                1) BUILD_TYPE="Debug" ;;
                2) BUILD_TYPE="Release" ;;
            esac
            ;;
        2)
            echo ""
            echo " [1] x64"
            echo " [2] x86 (32-bit)"
            read -p " Select Architecture > " a
            case $a in
                1) ARCH="x64" ;;
                2) ARCH="x86" ;;
            esac
            ;;
        3)
            echo ""
            echo " [1] Unix Makefiles"
            echo " [2] Ninja"
            echo " [3] Custom Input..."
            read -p " Select Generator > " g
            case $g in
                1) GENERATOR="Unix Makefiles" ;;
                2) GENERATOR="Ninja" ;;
                3) read -p " Enter custom generator name > " GENERATOR ;;
            esac
            ;;
        4)
            configure_func
            pause
            ;;
        5)
            get_build_dir
			configure_func
            echo -e "\n${CYAN}[INFO] Building project...${NC}"
            cmake --build "$BUILD_DIR" --config "$BUILD_TYPE" --parallel $(nproc)
            pause
            ;;
        6)
            get_build_dir
            echo -e "\n${YELLOW}[INFO] Removing directory: $BUILD_DIR...${NC}"
            rm -rf "$BUILD_DIR"
            echo -e "${GREEN}[INFO] Clean complete.${NC}"
            pause
            ;;
        7)
            get_build_dir
            PUBLISH_DIR="publish/${ARCH}_${BUILD_TYPE}"
            echo -e "\n${CYAN}[INFO] Publishing artifacts to: $PUBLISH_DIR...${NC}"
            cmake --install "$BUILD_DIR" --config "$BUILD_TYPE" --prefix "$PUBLISH_DIR"
            pause
            ;;
        0)
            ays
            ;;
        *)
            echo -e "\n${RED} Invalid option.${NC}"
            sleep 1
            ;;
    esac
done