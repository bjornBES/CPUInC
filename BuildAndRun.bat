cl /W3 /O1 /TP /o Build\Program.exe /EHsc Program.cpp CPU.cpp
pushd Build
./program.exe
popd