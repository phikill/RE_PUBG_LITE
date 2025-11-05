@echo off

rem vsv   visual studio "version" , year
set vsv=2019

rem cpuarch    cpu architeture, 86 / 64
set cpuarch=64

rem build type, debug or release
set build_type=release

set "MAJOR=0"
set "MINOR=0" 
set "BUILD=0"
set "REVISION=7"
set "VERSION_STRING=\"%MAJOR%.%MINOR%.%BUILD%.%REVISION%\""


set debug_flags=/Zi /Od /DEBUG /RTC1 /W4 /WX
set release_flags=/O2 /MT

if "%build_type%"=="debug" (
    set compile_flags=%debug_flags%
) else (
    set compile_flags=%release_flags%
)

if not exist "bin\lpc_launcher" (
    mkdir "bin\lpc_launcher"
) else (
    echo.
)

if exist "bin\lpc_launcher\*.obj" (
    del /Q "bin\lpc_launcher\*.obj"
    del /Q "bin\lpc_launcher\*.res"
    echo .obj files successfully deleted!
) else (
    echo No .obj files found in bin\lpc_launcher
)



echo.
echo === CONFIGURATION: %build_type% ===
echo.

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


@cl /c %compile_flags% /I "src" /I "src/include" /I "src/include/libcef" "src/lpc_launcher/main.c" /Fo"bin/lpc_launcher/"

echo.
echo ==== BUILD -- display_manager_nt.c -- )
echo.


@cl /c %compile_flags% /I "src" /I "src/include" /I "src/include/libcef" "src/lpc_launcher/display_manager/display_manager_nt.c" /Fo"bin/lpc_launcher/"


echo.
echo ==== BUILD -- ( LauncherMain ) DIR -- )
echo.


@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/DownloadFile.c" /Fo"bin/lpc_launcher/" 

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/DownloadSpeed.c" /Fo"bin/lpc_launcher/"

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/escape_string.c" /Fo"bin/lpc_launcher/"

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/FileCommon.c" /Fo"bin/lpc_launcher/"

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/FileDownloader.c" /Fo"bin/lpc_launcher/"

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/IniParser.c" /Fo"bin/lpc_launcher/"

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/LauncherupdateInfo.c" /Fo"bin/lpc_launcher/"

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/MemoryFile.c" /Fo"bin/lpc_launcher/"

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherMain/LOG_manager.c" /Fo"bin/lpc_launcher/"

echo.

echo.
echo ==== BUILD -- ( LauncherIpcManaged ) DIR -- )
echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherIpcManaged/uuid.c" /Fo"bin/lpc_launcher/"

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherIpcManaged/shm.c" /Fo"bin/lpc_launcher/"

echo.
echo ==== BUILD -- ( LauncherApiServer ) DIR -- )
echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherApiServer/ApiServer.c" /Fo"bin/lpc_launcher/"

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherApiServer/SessionDto.c" /Fo"bin/lpc_launcher/"

echo.


echo.
echo ==== BUILD -- ( LauncherModule ) DIR -- )
echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherModule/_LauncherModule.c" /Fo"bin/lpc_launcher/"

echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherModule/LauncherApp.c" /Fo"bin/lpc_launcher/"

echo.
echo ==== BUILD -- ( LauncherView ) DIR -- )
echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherView/MainWindow.c" /Fo"bin/lpc_launcher/"


echo.
echo ==== BUILD -- display_manager_nt.c -- )
echo.


echo.
echo "BUILD -- LauncherView/__App.c"
echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/include/libcef" /I "src/lpc_launcher" "src/lpc_launcher/LauncherView/JsInterop/LauncherObject.c" /Fo"bin/lpc_launcher/"

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/include/libcef" /I "src/lpc_launcher" "src/lpc_launcher/LauncherView/__App.c" /Fo"bin/lpc_launcher/"

echo.
echo "BUILD -- LauncherIpcManaged/scoped_shm_writer.c"
echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherIpcManaged/scoped_shm_writer.c" /Fo"bin/lpc_launcher/"

echo.
echo "BUILD -- LauncherIpcManaged/mutex/ipc_locker.c"
echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/lpc_launcher" "src/lpc_launcher/LauncherIpcManaged/mutex/ipc_locker.c" /Fo"bin/lpc_launcher/"

echo.
echo "BUILD -- cef_manager/cef_core.c"
echo.

@cl /c %compile_flags%  ^
/I "src" /I "src/include" /I "src/include/libcef" "src/lpc_launcher/cef_manager/cef_core.c" /Fo"bin/lpc_launcher/"

echo.
echo "BUILD -- cef_manager/web_handler.c"
echo.

@cl /c %compile_flags% ^
/I "src" /I "src/include" /I "src/include/libcef" "src/lpc_launcher/cef_manager/web_handler.c" /Fo"bin/lpc_launcher/"

echo  __________(RESOURCE)________________________________________
echo /____________________________________________________________\
rc /r /d VER_MAJOR=%MAJOR% ^
      /d VER_MINOR=%MINOR% ^
      /d VER_BUILD=%BUILD% ^
      /d VER_REVISION=%REVISION% ^
      /d VER_STRING="%VERSION_STRING%" ^
      /fo"bin/lpc_launcher/pres.res" "src/lpc_launcher/resource/pres.rc"
echo ______________________________________________________________
echo \____________________________________________________________/
echo.

echo.
echo =========== LINKER ==============

if "%build_type%"=="debug" (
    set linker_flags=/DEBUG /PDB:"bin/lpc_launcher/lpc_launcher.pdb"
) else (
    set linker_flags=
)

link bin/lpc_launcher/*.obj ^
        "lib/nt_%cpuarch%/libcef.lib" ^
        "lib/nt_%cpuarch%/libcurl_a.lib" ^
        "bin/lpc_launcher/pres.res" ^
        /SUBSYSTEM:CONSOLE ^
        %linker_flags% ^
        /DYNAMICBASE:NO /NXCOMPAT:NO ^
        /OUT:lpc_launcher.exe ^
        user32.lib gdi32.lib ole32.lib shell32.lib comdlg32.lib advapi32.lib winmm.lib oleaut32.lib version.lib

if %ERRORLEVEL% neq 0 (
    echo Linking failed!
    pause
    exit /b %ERRORLEVEL%
)


move lpc_launcher.exe bin\nt_%cpuarch%\
echo Build completed successfully: bin\nt_%cpuarch%\lpc_launcher.exe


if exist "bin\lpc_launcher\*.obj" (
    del /Q "bin\lpc_launcher\*.obj"
    del /Q "bin\lpc_launcher\*.res"
    echo .obj files successfully deleted!
) else (
    echo No .obj files found in bin\lpc_launcher
)





















pause
