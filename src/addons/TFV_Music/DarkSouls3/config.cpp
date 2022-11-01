class CfgPatches
{
    class TFV_Music_DarkSouls3
    {
        name = "Task Force Vandal Aux - Music (Dark Souls 3)";
        author = "Gooman";

        addonRootClass = "TFV_Music";
        requiredVersion = 0.1;
        requiredAddons[] = {
            "TFV_Music"
        };

        units[] = {};
        weapons[] = {};
    };
};

class CfgMusicClasses
{
    class TFV_DarkSouls3Music
    {
        displayName = "Task Force Vandal - Dark Souls 3 Music";
    };
};

class CfgMusic
{
    class TFV_DarkSouls3AbyssWatchers
    {
        name = "Abyss Watchers";
        sound[] = { "\TFV_Music\DarkSouls3\music\AbyssWatchers.ogg",1,1 };
        theme = "Score";
        duration = "283";
        musicClass = "TFV_DarkSouls3Music";
    };
    class TFV_DarkSouls3Theme
    {
        name = "Dark Souls 3 Theme";
        sound[] = { "\TFV_Music\DarkSouls3\music\DS3Theme.ogg",1,1 };
        theme = "Score";
        duration = "161";
        musicClass = "TFV_DarkSouls3Music";
    };
    class TFV_DarkSouls3LordOfCinder
    {
        name = "Lord of Cinder";
        sound[] = { "\TFV_Music\DarkSouls3\music\LordOfCinder.ogg",1,1 };
        theme = "Score";
        duration = "218";
        musicClass = "TFV_DarkSouls3Music";
    };
};

class cfgMods
{
    author = "Gooman";
};