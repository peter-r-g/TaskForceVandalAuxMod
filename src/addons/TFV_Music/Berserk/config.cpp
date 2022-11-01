class CfgPatches
{
    class TFV_Music_Berserk
    {
        name = "Task Force Vandal Aux - Music (Berserk)";
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
	class TFV_BerserkMusic
	{
		displayName = "Task Force Vandal - Berserk Music";
	};
};

class CfgMusic
{
    class TFV_BerserkTheme
    {
        name = "Berserk Theme";
        sound[] = { "\TFV_Music\Berserk\music\BerserkTheme.ogg",1,1 };
        theme = "Score";
        duration = "216";
        musicClass = "TFV_BerserkMusic";
    };
    class TFV_BerserkMurder
    {
        name = "Murder";
        sound[] = { "\TFV_Music\Berserk\music\Murder.ogg",1,1 };
        theme = "Score";
        duration = "978";
        musicClass = "TFV_BerserkMusic";
    };
    class TFV_BerserkMyBrother
    {
        name = "My Brother";
        sound[] = { "\TFV_Music\Berserk\music\MyBrother.ogg",1,1 };
        theme = "Score";
        duration = "393";
        musicClass = "TFV_BerserkMusic";
    };
};

class cfgMods
{
    author = "Gooman";
};