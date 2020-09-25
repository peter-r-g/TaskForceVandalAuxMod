@ECHO OFF

set ADDONBUILDER_EXE=E:\Steam Games\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe
set WORKING_DIR=E:\GitHub\TaskForceVandalAuxMod

mkdir build\addons
mkdir build\key
"%ADDONBUILDER_EXE%" "%WORKING_DIR%/src/addons/TFVMain" "%WORKING_DIR%/build/addons/" -sign="%WORKING_DIR%/TaskForceVandalAuxMod.biprivatekey"
"%ADDONBUILDER_EXE%" "%WORKING_DIR%/src/addons/TFVEquipment" "%WORKING_DIR%/build/addons/" -sign="%WORKING_DIR%/TaskForceVandalAuxMod.biprivatekey"
"%ADDONBUILDER_EXE%" "%WORKING_DIR%/src/addons/TFVResupply" "%WORKING_DIR%/build/addons/" -sign="%WORKING_DIR%/TaskForceVandalAuxMod.biprivatekey"
copy /Y "%WORKING_DIR%\src\mod.cpp" "%WORKING_DIR%\build\mod.cpp"
copy /Y "%WORKING_DIR%\src\key\TaskForceVandalAuxMod.bikey" "%WORKING_DIR%\build\key\TaskForceVandalAuxMod.bikey"
pause