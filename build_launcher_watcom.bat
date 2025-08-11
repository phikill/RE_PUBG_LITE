@echo off


rem This script with watcom will still exist to maintain compatibility with older Windows systems

echo echo.

echo.
echo BUILD -- simple_app.cc -- )
echo.

@wcc386 -ecc /6r -fp6 -ms -ot -zkl -ol -i="src/include" -i="src/include/libcef" -e999 "src/lpc_launcher/main.c" -fo="bin/lpc_launcher/" ^
     2>&1 | findstr /V /C:"Open Watcom" /C:"Portions" /C:"See"


echo.
echo.
@wcc386 -ecc /6r -fp6 -ms -ot -zkl -ol -i="src" -i="src/lpc_launcher" "src/lpc_launcher/display_manager/display_manager_nt.c" -fo="bin/lpc_launcher/" ^
     2>&1 | findstr /V /C:"Open Watcom" /C:"Portions" /C:"See"


echo.
echo "BUILD -- cef_manager/cef_core.c"
echo.

@wcc386 -ecc /6r -fp6 -ms -ot -zkl -ol  -Dcef_enable_single_process ^
          -i="src" -i="src/include" -i="src/lpc_launcher" "src/lpc_launcher/cef_manager/cef_core.c" -fo="bin/lpc_launcher/" ^
     2>&1 | findstr /V /C:"Open Watcom" /C:"Portions" /C:"See"

echo.
echo  __________(RESOURCE)________________________________________
echo /____________________________________________________________\
     @wrc -d__WATCOMC__ src/lpc_launcher/resource/pres.rc -r -fo="bin/lpc_launcher/pres.res"   ^
     2>&1 | findstr /V /C:"Open Watcom" /C:"Portions" /C:"See"
echo ______________________________________________________________
echo \____________________________________________________________/
echo.
echo.

echo.
echo =========== LINKER ==============

@wlink option resource 'bin/lpc_launcher/pres.res' ^
          name lpc_launcher.exe ^
          file bin/lpc_launcher/*.obj Library ^
                                        user32.lib, ^
                                        ws2_32.lib, ^
                                        wldap32.lib, ^
                                        lib/nt_86/libcef.lib, ^
                                        lib/nt_86/libcurl.lib, ^
                                        lib/nt_86/libcurl_imp.lib

echo.
echo.

move lpc_launcher.exe bin\nt_86\























pause
