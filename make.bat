@echo off

if not exist "build\intermediate" (
    echo making intermediate folder
    mkdir build\intermediate
) else (
    echo build folder already exists
)
if not exist "build\bin" (
    echo making bin folder
    mkdir build\bin
) else (
    echo output folder already exists
)

echo compiling object modules...
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o "build\intermediate\main.o" main.c

echo building executables...
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o "build\bin\main.gb" "build\intermediate\main.o"