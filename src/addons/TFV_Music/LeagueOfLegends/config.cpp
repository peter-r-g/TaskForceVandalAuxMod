class CfgPatches
{
    class TFV_Music_LeagueOfLegends
    {
        name = "Task Force Vandal Aux - Music (League of Legends)";
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
    class TFV_LeagueOfLegendsMusic
    {
        displayName = "Task Force Vandal - League of Legends Music";
    };
};

class CfgMusic
{
    class TFV_LeagueOfLegendsGoodbye
    {
        name = "Goodbye";
        sound[] = { "\TFV_Music\LeagueOfLegends\music\Goodbye.ogg",1,1 };
        theme = "Score";
        duration = "231";
        musicClass = "TFV_LeagueOfLegendsMusic";
    };
    class TFV_LeagueOfLegendsRevenge
    {
        name = "Revenge";
        sound[] = { "\TFV_Music\LeagueOfLegends\music\Revenge.ogg",1,1 };
        theme = "Score";
        duration = "191";
        musicClass = "TFV_LeagueOfLegendsMusic";
    };
    class TFV_LeagueOfLegendsTheVirtuoso
    {
        name = "The Virtuoso";
        sound[] = { "\TFV_Music\LeagueOfLegends\music\TheVirtuoso.ogg",1,1 };
        theme = "Score";
        duration = "260";
        musicClass = "TFV_LeagueOfLegendsMusic";
    };
};

class cfgMods
{
    author = "Gooman";
};