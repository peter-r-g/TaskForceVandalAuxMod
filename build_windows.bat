@ECHO OFF

rem ### Configuration Options.
rem ## The path to the addon builder executable.
set ADDONBUILDER_EXE="E:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe"





rem ### Don't edit below here.
rem ## Delete old build directories.
rmdir /S/Q build
rmdir /S/Q temp

rem ## Create build directories.
mkdir temp
mkdir build\addons
mkdir build\keys

rem ## Build PBOs.
for /D %%a in (%cd%\src\addons\*) do (
    %ADDONBUILDER_EXE% "%%a" "%cd%/build/addons/" -sign="%cd%/TaskForceVandalAuxMod.biprivatekey" -include="%%a/include.txt" -temp="%cd%/temp"
)

rem ## Copy mod.cpp and key.
copy /Y/V "%cd%\src\mod.cpp" "%cd%\build\mod.cpp"
copy /Y/V "%cd%\src\keys\TaskForceVandalAuxMod.bikey" "%cd%\build\keys\TaskForceVandalAuxMod.bikey"

rem ## Copy third party addons
xcopy /s "%cd%\thirdparty" "%cd%\build"

rem ## Pause so user can see output.
pause