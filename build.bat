:start
g++ test.cpp -o test.exe -fexec-charset=gbk
@echo off
if errorlevel 1 (
    echo Compile unsuccessfully
    goto start
)
echo Compile successfully
test.exe
del test.exe