@echo off
echo === Building Raylib Game ===

rem --- Compiler and settings ---
set COMPILER=g++
set SRC=src\*.cpp
set OUT=game.exe
set INCLUDE=-Iraylib\include -Isrc
set LIBS=-Lraylib\lib -lraylib -lopengl32 -lgdi32 -lwinmm

rem --- Build ---
%COMPILER% %SRC% %INCLUDE% %LIBS% -o %OUT%

if %errorlevel% neq 0 (
    echo.
    echo  Build failed!
    pause
    exit /b %errorlevel%
)

echo.
echo  Build successful! Output: %OUT%
pause
