class CfgPatches
{
    class TFV_Music_Cyberpunk2077
    {
        name = "Task Force Vandal Aux - Music (Cyberpunk 2077)";
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
    class TFV_Cyberpunk2077Music
    {
        displayName = "Task Force Vandal - Cyberpunk 2077 Music";
    };
};

class CfgMusic
{
    class TFV_Cyberpunk2077IReallyWantToStayAtYourHouse
    {
        name = "I Really Want To Stay At Your House";
        sound[] = { "\TFV_Music\Cyberpunk2077\music\IReallyWantToStayAtYourHouse.ogg",1,1 };
        theme = "Score";
        duration = "246";
        musicClass = "TFV_Cyberpunk2077Music";
    };
    class TFV_Cyberpunk2077WhosReadyForTomorrow
    {
        name = "Who's Ready For Tomorrow";
        sound[] = { "\TFV_Music\Cyberpunk2077\music\WhosReadyForTomorrow.ogg",1,1 };
        theme = "Score";
        duration = "116";
        musicClass = "TFV_Cyberpunk2077Music";
    };
};

class cfgMods
{
    author = "Gooman";
};