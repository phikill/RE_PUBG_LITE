@echo off

rem vsv   visual studio "version" , year
set vsv=2019

rem cpuarch    cpu architeture, 86 / 64
set cpuarch=64

rem build type, debug or release
set build_type=release

echo.
:: configure visual studio.
echo.
echo visual studio set
call "C:\Program Files (x86)\Microsoft Visual Studio\%vsv%\Community\VC\Auxiliary\Build\vcvarsall.bat" x%cpuarch%

:: Verify that the environment has been configured correctly
if %ERRORLEVEL% neq 0 (
    echo Error configuring Visual Studio environment.
    pause
    exit /b %ERRORLEVEL%
)


echo echo.

echo.
echo ==== BUILD -- main.c -- )
echo.


@cl /c /O2 /MT /I "src" /I "src/include" /I "src/include/libcef" "src/lpc_launcher/main.c" /Fo"bin/lpc_launcher/"

echo.
echo ==== BUILD -- display_manager_nt.c -- )
echo.


@cl /c /O2 /MT /I "src" /I "src/include" /I "src/include/libcef" "src/lpc_launcher/display_manager/display_manager_nt.c" /Fo"bin/lpc_launcher/"

echo.
echo ==== BUILD -- display_manager_nt.c -- )
echo.


@cl /c /O2 /MT /Dcef_enable_single_process  ^
/I "src" /I "src/include" /I "src/include/libcef" "src/lpc_launcher/cef_manager/cef_core.c" /Fo"bin/lpc_launcher/"

echo.
echo  __________(RESOURCE)________________________________________
echo /____________________________________________________________\
     rc /r /fo"bin/lpc_launcher/pres.res" "src/lpc_launcher/resource/pres.rc"
echo ______________________________________________________________
echo \____________________________________________________________/
echo.
echo.

echo.
echo =========== LINKER ==============


link bin/lpc_launcher/*.obj ^
        "lib/nt_%cpuarch%/libcef.lib" ^
        "bin/lpc_launcher/pres.res" ^
        /SUBSYSTEM:CONSOLE ^
        /DYNAMICBASE:NO /NXCOMPAT:NO ^
        /OUT:lpc_launcher.exe ^
        user32.lib gdi32.lib ole32.lib shell32.lib comdlg32.lib advapi32.lib winmm.lib oleaut32.lib
























pause
