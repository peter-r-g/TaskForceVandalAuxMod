class CfgPatches
{
    class TFV_Music_Other
    {
        name = "Task Force Vandal Aux - Music (Other)";
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
    class TFV_OtherMusic
    {
        displayName = "Task Force Vandal - Other Music";
    };
};

class CfgMusic
{
    class TFV_OtherDarkTideMission3BossBattle
    {
        name = "Dark Tide Mission 3 Boss Battle";
        sound[] = { "\TFV_Music\Other\music\DarkTideMission3BossBattle.ogg",1,1 };
        theme = "Score";
        duration = "344";
        musicClass = "TFV_OtherMusic";
    };
    class TFV_OtherDawnOfWarSpaceMarinesTheme
    {
        name = "Dawn of War Space Marines Theme";
        sound[] = { "\TFV_Music\Other\music\DawnOfWarSpaceMarinesTheme.ogg",1,1 };
        theme = "Score";
        duration = "214";
        musicClass = "TFV_OtherMusic";
    };
    class TFV_OtherInTheHouseInAHeartbeat
    {
        name = "In The House, In A Heartbeat";
        sound[] = { "\TFV_Music\Other\music\InTheHouseInAHeartbeat.ogg",1,1 };
        theme = "Score";
        duration = "258";
        musicClass = "TFV_OtherMusic";
    };
    class TFV_OtherLudovicoEinaudi
    {
        name = "Ludovico Einaudi";
        sound[] = { "\TFV_Music\Other\music\LudovicoEinaudi.ogg",1,1 };
        theme = "Score";
        duration = "315";
        musicClass = "TFV_OtherMusic";
    };
    class TFV_OtherPayDay2Razormind
    {
        name = "PayDay2 Razormind";
        sound[] = { "\TFV_Music\Other\music\PayDay2Razormind.ogg",1,1 };
        theme = "Score";
        duration = "159";
        musicClass = "TFV_OtherMusic";
    };
    class TFV_OtherRE2LoomingDread
    {
        name = "RE2 Looming Dread";
        sound[] = { "\TFV_Music\Other\music\RE2LoomingDread.ogg",1,1 };
        theme = "Score";
        duration = "373";
        musicClass = "TFV_OtherMusic";
    };
};

class cfgMods
{
    author = "Gooman";
};