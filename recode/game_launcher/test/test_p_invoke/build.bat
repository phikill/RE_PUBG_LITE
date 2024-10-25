@echo off

set vsv=2019
echo.
:: configure visual studio.
echo.
echo configuring visual studio
call "C:\Program Files (x86)\Microsoft Visual Studio\%vsv%\Community\VC\Auxiliary\Build\vcvarsall.bat" x64

:: Verify that the environment has been configured correctly
if %ERRORLEVEL% neq 0 (
    echo Error configuring Visual Studio environment.
    pause
    exit /b %ERRORLEVEL%
)

:: Code Compilation
echo.
echo ====== test build ======

rem cl.exe /clr test.cpp /Fe:test.exe

cl /LD native.cpp /Fe:native.dll

csc program.cs

:: Verify that the build was successful
if %ERRORLEVEL% neq 0 (
    echo === !Error during compilation. ===
) else (
    echo === Compilation completed successfully! ==
)




:: Pause the Build
echo.
pause