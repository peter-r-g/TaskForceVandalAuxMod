class CfgPatches
{
    class TFV_Music_ModernWarfare2
    {
        name = "Task Force Vandal Aux - Music (Modern Warfare 2)";
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
    class TFV_ModernWarfare2Music
    {
        displayName = "Task Force Vandal - Modern Warfare 2 Music";
    };
};

class CfgMusic
{
    class TFV_ModernWarfare2ExtractionPoint
    {
        name = "Extraction Point";
        sound[] = { "\TFV_Music\ModernWarfare2\music\ExtractionPoint.ogg",1,1 };
        theme = "Score";
        duration = "215";
        musicClass = "TFV_ModernWarfare2Music";
    };
    class TFV_ModernWarfare2Seige
    {
        name = "Seige";
        sound[] = { "\TFV_Music\ModernWarfare2\music\Seige.ogg",1,1 };
        theme = "Score";
        duration = "245";
        musicClass = "TFV_ModernWarfare2Music";
    };
};

class cfgMods
{
    author = "Gooman";
};