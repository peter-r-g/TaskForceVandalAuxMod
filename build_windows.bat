@ECHO OFF

rem ### Configuration Options.
rem ## The directory that this batch file is running in.
set WORKING_DIR=D:\GitHub\Arma\TaskForceVandalAuxMod
rem ## The path to the addon builder executable.
set ADDONBUILDER_EXE=E:\Steam Games\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe

rem ## Uncomment next two lines if you want to see the help menu.
rem "%ADDONBUILDER_EXE%" -help
rem pause
rem ##

rem ### Don't edit below here.
rem ## Delete old build folder.
rmdir /S/Q build
rem ## Create build directories.
mkdir build\addons
mkdir build\keys
rem ## Build PBOs.
rem # TFV_Main
"%ADDONBUILDER_EXE%" "%WORKING_DIR%/src/addons/TFV_Main" "%WORKING_DIR%/build/addons/" -sign="%WORKING_DIR%/TaskForceVandalAuxMod.biprivatekey" -include="%WORKING_DIR%/src/addons/TFV_Main/include.txt"
rem # TFV_Armor
"%ADDONBUILDER_EXE%" "%WORKING_DIR%/src/addons/TFV_Armor" "%WORKING_DIR%/build/addons/" -sign="%WORKING_DIR%/TaskForceVandalAuxMod.biprivatekey" -include="%WORKING_DIR%/src/addons/TFV_Armor/include.txt"
rem # TFV_Equipment
"%ADDONBUILDER_EXE%" "%WORKING_DIR%/src/addons/TFV_Equipment" "%WORKING_DIR%/build/addons/" -sign="%WORKING_DIR%/TaskForceVandalAuxMod.biprivatekey" -include="%WORKING_DIR%/src/addons/TFV_Equipment/include.txt"
rem # TFV_Music
"%ADDONBUILDER_EXE%" "%WORKING_DIR%/src/addons/TFV_Music" "%WORKING_DIR%/build/addons/" -sign="%WORKING_DIR%/TaskForceVandalAuxMod.biprivatekey" -include="%WORKING_DIR%/src/addons/TFV_Music/include.txt"
rem ## Copy mod.cpp and key.
copy /Y "%WORKING_DIR%\src\mod.cpp" "%WORKING_DIR%\build\mod.cpp"
copy /Y "%WORKING_DIR%\src\keys\TaskForceVandalAuxMod.bikey" "%WORKING_DIR%\build\keys\TaskForceVandalAuxMod.bikey"
rem ## Pause so user can see output.
pause