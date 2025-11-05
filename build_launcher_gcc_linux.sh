#!/bin/bash

clear

echo
echo "BUILD -- main.c"
echo




# Compilar main.c
gcc -Wall -O2 -fPIC \
    -I"src/include" \
    -I"src/include/libcef" \
    -c src/lpc_launcher/main.c \
    -o bin/lpc_launcher/main.o


echo
echo "BUILD -- display_manager/display_manager_nt.c"
echo

gcc -Wall -O2 -fPIC \
    -I"src" \
    -I"src/lpc_launcher" \
    -c src/lpc_launcher/display_manager/display_manager_linux.c \
    -o bin/lpc_launcher/display_manager_linux.o

echo
echo "BUILD -- cef_manager/cef_core.c"
echo

gcc -Wall -O2 -fPIC \
    -I"src" \
    -I"src/include" \
    -I"src/lpc_launcher" \
    -c src/lpc_launcher/cef_manager/cef_core.c \
    -o bin/lpc_launcher/cef_core.o

echo
echo "========== LINKER =============="
echo

# Ajuste os caminhos para libcef corretamente
 gcc bin/lpc_launcher/*.o \
     -o lpc_launcher.elf \
    -Llib/linux_64 \
    -lcef \
    -lX11 -lXcomposite -lXrandr  -lXtst -lXext \
    -lXfixes -lXrender -lXcursor  -ldl -lpthread -lrt -lgconf-2 \
    -Wl,-rpath,'$ORIGIN'

echo
echo "Done."





