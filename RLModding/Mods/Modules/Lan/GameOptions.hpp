#include <string>
#include <vector>
#include <map>
/*
MutatorSetting : 3Rounds
MutatorSetting : 5Rounds
MutatorSetting : 7Rounds
MutatorSetting : Max1
MutatorSetting : Max3
MutatorSetting : Max5
MutatorSetting : NoBooster
MutatorSetting : UnlimitedBooster
MutatorSetting : SlowRecharge
MutatorSetting : RapidRecharge
MutatorSetting : BoosterSap
MutatorSetting : ExplodeOnTouch
MutatorSetting : ExplodeIfFull
MutatorSetting : ExplodeIfEmpty
MutatorSetting : ExplodeDrain
MutatorSetting : ExplodeOpposing
MutatorSetting : ExplodeWinning
MutatorSetting : Launchpad
MutatorSetting : Teleporter
MutatorSetting : BoostMultiplier1_5x
MutatorSetting : BoostMultiplier2x
MutatorSetting : BoostMultiplier10x
MutatorSetting : 10Minutes
MutatorSetting : 20Minutes
MutatorSetting : UnlimitedTime
MutatorSetting : NoDemolish
MutatorSetting : DemolishAll
MutatorSetting : AlwaysDemolish
MutatorSetting : AlwaysDemolishOpposing
MutatorSetting : SuperBounciness
MutatorSetting : HighBounciness
MutatorSetting : LowBounciness
MutatorSetting : SmallBall
MutatorSetting : BigBall
MutatorSetting : GiantBall
MutatorSetting : TwoBalls
MutatorSetting : FourBalls
MutatorSetting : SixBalls
MutatorSetting : Ball_CubeBall
MutatorSetting : Ball_ClassicStadium_Tech
MutatorSetting : Ball_RubberBouncyBall
MutatorSetting : Ball_Puck
MutatorSetting : Ball_Basketball
MutatorSetting : SloMoGameSpeed
MutatorSetting : SlomoDistanceBall
MutatorSetting : SlomoSpeedBall
MutatorSetting : Hardcore
MutatorSetting : TwoSecondsRespawn
MutatorSetting : OneSecondsRespawn
MutatorSetting : DoubleJump2x
MutatorSetting : DodgeImpulse2x
MutatorSetting : InverseGravity
MutatorSetting : AlmostZeroGravity
MutatorSetting : LowGravity
MutatorSetting : HighGravity
MutatorSetting : SuperGravity
MutatorSetting : BeginnerMode
MutatorSetting : IceConditions
MutatorSetting : RainConditions
MutatorSetting : LightBall
MutatorSetting : HeavyBall
MutatorSetting : SuperLightBall
MutatorSetting : SlowBall
MutatorSetting : FastBall
MutatorSetting : SuperFastBall
MutatorSetting : LowGravityBall
MutatorSetting : HighGravityBall
MutatorSetting : BallDemolish
MutatorSetting : OnlyBallDemolish
MutatorSetting : DodgeImpulse4x
MutatorSetting : SloMoDistanceBallLowCD
MutatorSetting : AutoBalance
MutatorSetting : MonsterTruck
MutatorSetting : MicroMachine
MutatorSetting : SacredGround
MutatorSetting : GoalTending
MutatorSetting : TurnBased
MutatorSetting : RedGreenBall
MutatorSetting : PitchBasketball
MutatorSetting : Mode500
MutatorSetting : SentryCannon
MutatorSetting : Tron
MutatorSetting : TronTeam
MutatorSetting : TronTeamBoost
MutatorSetting : TreasureHunt
MutatorSetting : FootballMatch
MutatorSetting : ItemsMode
MutatorSetting : ItemsModeQuick
MutatorSetting : ItemsModeSlow
MutatorSetting : ItemsModeBallManipulators
MutatorSetting : ItemsModeCarManipulators
MutatorSetting : ItemsModeSprings
MutatorSetting : ItemsModeSpikes
*/

struct MapInfo {
	std::string filename, hash;
	MapInfo(std::string filename, std::string hash) {
		this->filename = filename;
		this->hash = hash;
	}
};

/* Start Maps */
static int selectedMap = 5;
//For ComboBox
static const char* friendlyMapNames[] = {
	"Advanced Tutorial",
	"Aquadome",
	"Basic Tutorial",
	"Beckwith Park (Midnight)",
	"Beckwith Park (Stormy)",
	"Beckwith Park",
	"Champions Field",
	"Cosmic (Rocket Labs)",
	"DFH Stadium (Snowy)",
	"DFH Stadium (Stormy)",
	"DFH Stadium",
	"Double Goal (Rocket Labs)",
	"Dunk House",
	"Mannfield (Night)",
	"Mannfield (Stormy)",
	"Mannfield",
	"Neo Tokyo",
	"Neo Tokyo Standard",
	"Pillars (Rocket Labs)",
	"Starbase ARC",
	"Underpass (Rocket Labs)",
	"Underpass V0 (Rocket Labs)",
	"Urban Central (Dawn)",
	"Urban Central (Night)",
	"Urban Central",
	"Utopia Coliseum (Dusk)",
	"Utopia Coliseum (Snowy)",
	"Utopia Coliseum",
	"Utopia Retro (Rocket Labs)",
	"Wasteland (Night)",
	"Wasteland",
};
//Map Info
static std::vector<MapInfo> maps = {
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

/* Start Mutator Settings */

static int defaultGameMode = 0;
static const char* gameModesCombo[] = {
	"Soccar",
	"Hoops",
	"Snow Day",
	"FreePlay",
	"Replay",
	"Training Editor"
};

static int defaultTeamSize = 0;
static const char* teamSizeCombo[] = {
	"",
	"1v1",
	"2v2",
	"3v3",
	"4v4"
};

static int defaultBotDifficulty = 0;
static const char* botDifficultyCombo[] = {
	"No Bots",
	"Rookie",
	"Pro",
	"All Star",
	"Unfair"
};

static int defaultTime = 0;
static const char* timeCombo[] = {
	"5 Minutes",
	"10 Minutes",
	"20 Minutes", 
	"Unlimited"
};

static int defaultScore = 0;
static const char* scoreCombo[] = {
	"Unlimited",
	"1 Goal",
	"3 Goals",
	"5 Goals"
};

static int defaultGameSpeed = 0;
static const char* gameSpeedCombo[] = {
	"Default",
	"Slo-Mo",
	"Time Warp"
};

static int defaultBallSpeed = 0;
static const char* ballSpeedCombo[] = {
	"Default",
	"Slow",
	"Fast",
	"Super Fast"
};

static int defaultBallType = 0;
static const char* ballTypeCombo[] = {
	"Default",
	"Cube",
	"Puck",
	"Basketball"
};

static int defaultBallWeight = 0;
static const char* ballWeightCombo[] = {
	"Default",
	"Light",
	"Heavy",
	"Super Light"
};

static int defaultBallSize = 0;
static const char* ballSizeCombo[] = {
	"Default",
	"Small",
	"Large",
	"Gigantic"
};

static int defaultBallBounce = 0;
static const char* ballBouncinessCombo[] = {
	"Default",
	"Low",
	"High",
	"Super High"
};

static int defaultBallCount = 0;
static const char* ballCountCombo[] = {
	"Default",
	"2",
	"4",
	"6"
};

static int defaultBoostAmount = 0;
static const char* boostAmountCombo[] = {
	"Default",
	"No Boost",
	"Unlimited",
	"Recharge (Fast)",
	"Recharge (Slow)"
};

static int defaultRumble = 0;
static const char* rumbleCombo[] = {
	"None",
	"Default Rumble",
	"Civlized",
	"Slow",
	"Destruction Derby",
	"Spring Loaded",
	"Spikes Only"
};

static int defaultBoostStrength = 0;
static const char* boostStrengthCombo[] = {
	"1x",
	"1.5x",
	"2x",
	"10x"
};

static int defaultGravity = 0;
static const char* gravityCombo[] = {
	"Default",
	"Almost Zero",
	"Low",
	"High",
	"Super High",
	"Inverse"
};

static int defaultDemoSettings = 0;
static const char* demoSettingsCombo[] = {
	"Default",
	"Disabled",
	"Friendly Fire",
	"On Contact",
	"On Contact (FF)"
};

static int defaultRespawnTime = 0;
static const char* respawnTimeCombo[] = {
	"3 Seconds",
	"2 Seconds",
	"1 Second",
	"Disabled Goal Reset"
};

static int defaultTesting = 0;
static const char* testingCombo[] = {
	"3Rounds",
	"5Rounds",
	"7Rounds",
	"Max1",
	"Max3",
	"Max5",
	"NoBooster",
	"UnlimitedBooster",
	"SlowRecharge",
	"RapidRecharge",
	"BoosterSap",
	"ExplodeOnTouch",
	"ExplodeIfFull",
	"ExplodeIfEmpty",
	"ExplodeDrain",
	"ExplodeOpposing",
	"ExplodeWinning",
	"Launchpad",
	"Teleporter",
	"BoostMultiplier1_5x",
	"BoostMultiplier2x",
	"BoostMultiplier10x",
	"10Minutes",
	"20Minutes",
	"UnlimitedTime",
	"NoDemolish",
	"DemolishAll",
	"AlwaysDemolish",
	"AlwaysDemolishOpposing",
	"SuperBounciness",
	"HighBounciness",
	"LowBounciness",
	"SmallBall",
	"BigBall",
	"GiantBall",
	"TwoBalls",
	"FourBalls",
	"SixBalls",
	"Ball_CubeBall",
	"Ball_ClassicStadium_Tech",
	"Ball_RubberBouncyBall",
	"Ball_Puck",
	"Ball_Basketball",
	"SloMoGameSpeed",
	"SlomoDistanceBall",
	"SlomoSpeedBall",
	"Hardcore",
	"TwoSecondsRespawn",
	"OneSecondsRespawn",
	"DoubleJump2x",
	"DodgeImpulse2x",
	"InverseGravity",
	"AlmostZeroGravity",
	"LowGravity",
	"HighGravity",
	"SuperGravity",
	"BeginnerMode",
	"IceConditions",
	"RainConditions",
	"LightBall",
	"HeavyBall",
	"SuperLightBall",
	"SlowBall",
	"FastBall",
	"SuperFastBall",
	"LowGravityBall",
	"HighGravityBall",
	"BallDemolish",
	"OnlyBallDemolish",
	"DodgeImpulse4x",
	"SloMoDistanceBallLowCD",
	"AutoBalance",
	"MonsterTruck",
	"MicroMachine",
	"SacredGround",
	"GoalTending",
	"TurnBased",
	"RedGreenBall",
	"PitchBasketball",
	"Mode500",
	"SentryCannon",
	"Tron",
	"TronTeam",
	"TronTeamBoost",
	"TreasureHunt",
	"FootballMatch",
	"ItemsMode",
	"ItemsModeQuick",
	"ItemsModeSlow",
	"ItemsModeBallManipulators",
	"ItemsModeCarManipulators",
	"ItemsModeSprings",
	"ItemsModeSpikes"
};

static std::map<std::string, std::string> mutators = {
	{ "Default", "" },
	//Team Size
	{ "1v1", "PlayerCount2," },
	{ "2v2", "PlayerCount4," },
	{ "3v3", "PlayerCount6," },
	{ "4v4", "PlayerCount8," },
	//Bot Difficulty
	{ "Rookie", "BotsEasy," },
	{ "Pro", "BotsMedium," },
	{ "All Star", "BotsHard," },
	{ "Unfair", "BotsUnfair," },
	//Game Modes
	{ "Soccar", "TAGame.GameInfo_Soccar_TA?" },
	{ "Hoops", "TAGame.GameInfo_Basketball_TA?" },
	{ "Snow Day", "TAGame.GameInfo_Hockey_TA?" },
	{ "FreePlay", "TAGame.GameInfo_Tutorial_TA?" },
	{ "Replay", "TAGame.GameInfo_Replay_TA?" },
	{ "Training Editor", "TAGame.GameInfo_TrainingEditor_TA?" },
	//Time
	{ "5 Minutes", "" },
	{ "10 Minutes", "10Minutes," },
	{ "20 Minutes", "20Minutes," },
	{ "UnlimitedTime", "UnlimitedTime," },
	//Score
	{ "1 GoalScore", "Max1," },
	{ "3 GoalsScore", "Max3," },
	{ "5 GoalsScore", "Max5," },
	{ "UnlimitedScore", "" },
	//Game Speed
	{ "Slo-Mo", "SloMoGameSpeed," },
	{ "Time Warp", "SloMoDistanceBallLowCD" },
	//Ball Speed
	{ "SlowBall", "SlowBall," },
	{ "FastBall", "FastBall," },
	{ "Super FastBall", "SuperFastBall," },
	//Ball Type
	{ "Cube", "Ball_CubeBall," },
	{ "Puck", "Ball_Puck," },
	{ "Basketball", "Ball_Basketball," },
	//Ball Weight
	{ "Light", "LightBall," },
	{ "Heavy", "HeavyBall," },
	{ "Super Light", "SuperLightBall," },
	//Ball Size
	{ "Small", "SmallBall," },
	{ "Large", "BigBall," },
	{ "Gigantic", "GiantBall," },
	//Ball Bounciness
	{ "LowBounce", "LowBounciness," },
	{ "HighBounce", "HighBounciness," },
	{ "Super HighBounce", "SuperBounciness," },
	//Ball Count
	{ "2Balls", "TwoBalls," },
	{ "4Balls", "FourBalls," },
	{ "6Balls", "SixBalls," },
	//Boost Amount
	{ "No BoostBoost", "NoBooster," },
	{ "UnlimitedBoost", "UnlimitedBooster," },
	{ "Recharge (Slow)Boost", "SlowRecharge," },
	{ "Recharge (Fast)Boost", "RapidRecharge," },
	//Rumble
	{ "Default Rumble", "ItemsMode,"},
	{ "Slow", "ItemsModeSlow," },
	{ "Civilized", "ItemsModeQuick," },
	{ "Destruction Derby", "ItemsModeCarManipulators," },
	{ "Spring Loaded", "ItemsModeSprings," },
	{ "Spikes Only", "ItemsModeSpikes"},
	{ "None", "" },
	//Boost Strength
	{ "1x", "" },
	{ "1.5x", "BoostMultiplier1_5x," },
	{ "2x", "BoostMultiplier2x," },
	{ "10x", "BoostMultiplier10x," },
	//Gravity
	{ "Almost Zero", "AlmostZeroGravity," },
	{ "Low", "LowGravity," },
	{ "High", "HighGravity," },
	{ "Super High", "SuperGravity," },
	{ "Inverse", "InverseGravity," },
	//Demolish
	{ "Disabled", "NoDemolish," },
	{ "Friendly Fire", "AlwaysDemolish," },
	{ "On Contact", "ExplodeOpposing," },
	{ "On Contact (FF)", "ExplodeOnTouch," },
	//Respawn Time
	{ "3 Seconds", "" },
	{ "2 Seconds", "TwoSecondsRespawn," },
	{ "1 Second", "OneSecondsRespawn," },
	{ "Disable Goal Reset", "DisableGoalDelay," },
};