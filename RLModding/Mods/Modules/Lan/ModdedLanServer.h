#pragma once
#include "../Mods/ModBase.h"
#include "../Utils/Utils.h"
#include "../Interfaces/GlobalVariables.h"
#include "../Interfaces/Interfaces.h"
#include <vector>
class ModdedLanServer : public ModBase {
public:
	ModdedLanServer(std::string name,int key,Category cat,GameState gamestate);
	~ModdedLanServer();
	void onEnable() override;
	void onDisable() override;
	void DrawMenu() override;
	void onMainMenuTick(Event*) override;

private:
	void travel();
	UOnlineGameDedicatedServer_X* LAN_Server = nullptr;
	//Map Selection
	bool bTravel;
	int selectedMap;
	std::string mapName;
	struct MapInfo {
		std::string filename, hash;
		MapInfo(std::string filename, std::string hash) {
			this->filename = filename;
			this->hash = hash;
		}
	};
	const char* friendlyMapNames[31] = {
		"Advanced Tutorial"			,
		"Aquadome"						,
		"Basic Tutorial"				,
		"Beckwith Park (Midnight)"		,
		"Beckwith Park (Stormy)"		,
		"Beckwith Park"				,
		"Champions Field",
		"Cosmic (Rocket Labs)"			,
		"DFH Stadium (Snowy)"			,
		"DFH Stadium (Stormy)"			,
		"DFH Stadium"					,
		"Double Goal (Rocket Labs)"	,
		"Dunk House"					,
		"Mannfield (Night)"			,
		"Mannfield (Stormy)"			,
		"Mannfield"					,
		"Neo Tokyo"					,
		"Neo Tokyo Standard"	,
		"Pillars (Rocket Labs)"		,
		"Starbase ARC"					,
		"Underpass (Rocket Labs)"		,
		"Underpass V0 (Rocket Labs)"	,
		"Urban Central (Dawn)"			,
		"Urban Central (Night)"		,
		"Urban Central"				,
		"Utopia Coliseum (Dusk)"		,
		"Utopia Coliseum (Snowy)"		,
		"Utopia Coliseum"				,
		"Utopia Retro (Rocket Labs)"	,
		"Wasteland (Night)"			,
		"Wasteland"					,
	};
	std::vector<MapInfo> maps = {
		MapInfo("TutorialAdvanced", "8223b670168244c5e7e6eb7e5e3e5acf"),
		MapInfo("Underwater_P", "B6B0BAB0570D2866E281830FCC27F12D"),
		MapInfo("TutorialTest", "8f05dc2abd1ccc5a350ed682cf89ad74"),
		MapInfo("Park_Night_P", "36e05bf3ecc9da3b00e78b07978782be"),
		MapInfo("Park_Rainy_P", "12aceb944720f544ca2b03ad2204da49"),
		MapInfo("Park_P", "454386a16551d111da72d7654b87a325"),
		MapInfo("CS_P", "5A1ADF7F1B37DD379B1227023406C4ED"),
		MapInfo("Labs_Cosmic_P", "014e1185bccb933aaab0ac43879e42ba"),
		MapInfo("Stadium_Winter_P", "30dee6b28fb79a4f71478bbaf8cb8007"),
		MapInfo("Stadium_Foggy_P", "7092D0BD81BFF56939BD1C0550C72650"),
		MapInfo("Stadium_P", "0831c9ccd06df87262c78d39f624afa2"),
		MapInfo("Labs_DoubleGoal_P", "cb573372da30131c8228f059f7568bdd"),
		MapInfo("HoopsStadium_P", "86e7aa937bd1b695c9fb4059f3781676"),
		MapInfo("EuroStadium_Night_P", "DA00F359AA4515CDAFC1EBCFC8ADFC45"),
		MapInfo("EuroStadium_Rainy_P", "e1d9dc5ff839a44725d4b8c2e1a1df88"),
		MapInfo("EuroStadium_P", "0527a5acd7661778fa7ff3e8a11c57ea"),
		MapInfo("NeoTokyo_P", "36391631356c52be0fb0012429b1a6be"),
		MapInfo("NeoTokyo_Standard_P", "8C9FF877753C33713AB9E8E797DB0FE2"),
		MapInfo("Labs_CirclePillars_P", "7542983ff992c8c4e10bbf92d60a5184"),
		MapInfo("ARC_P", "1F9FCCD874313E8C27E92F0FC9F959DA"),
		MapInfo("Labs_Underpass_P", "812dbd0ebbc6ef05801768daa9a011f1"),
		MapInfo("Labs_Underpass_v0_p", "ae429dc339c00c5c0b304123aad0cd73"),
		MapInfo("TrainStation_Dawn_P", "703020DE94DB2CA4B316F9895498569E"),
		MapInfo("TrainStation_Night_P", "a84cc33435e278e2b914d0ea4c78ae1b"),
		MapInfo("TrainStation_P", "44e9def6f85cef21bc8e33f9e9fd2698"),
		MapInfo("UtopiaStadium_Dusk_P", "eb8fec01ced0f1a9b11e57396fb63dd7"),
		MapInfo("UtopiaStadium_Snow_P", "55D5D682D18CCA0770CAEEF9AC975FFA"),
		MapInfo("UtopiaStadium_P", "7adf493dae2ad105c549774a1632c4c1"),
		MapInfo("Labs_Utopia_P", "2ee88af78786fee2091699e5bed979ac"),	
		MapInfo("Wasteland_Night_P", "E0DF021A4F28A031D6DAE462358DDAF4"),
		MapInfo("Wasteland_P", "9746df3e600b53f5a92f74546f134f52"),
	};
};

