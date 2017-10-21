#pragma once
#include "../Mods/ModBase.h"
#include "../Interfaces/Interfaces.h"
#include <time.h>
class MutatorMods : public ModBase
{
public:
	MutatorMods(std::string name, int key, Category cat, GameState gamestate);
	~MutatorMods();

	void onMenuOpen() override;
	void onMenuClose() override;
	void DrawMenu() override;
	void onPlayerTick(Event*) override;
	void onCarSpawned(Event* e) override;
	void onCarDemolished(Event * e);

	void ExportSettings();
	void ImportSettings();

private:
	bool bStarted = false;
	bool checkTime = true;

	int mutatorCount = 0;

	int GameSpeed = 0;

	char* mutatorList[11] = { "Ball Mutator", "Boost Mutator", "Car Mutator", "Demolish Mutator", "Game Speed Mutator", "Gravity Mutator", "Handicap Mutator", "Items Mutator", "Match Mutator", "Preset Mutator", "Respawn Time Mutator" };


	bool itemsMutatorsPresent = false;
	bool respawnTimeMutatorsPresent = false;
	bool matchMutatorsPresent = false;
	bool handicapMutatorsPresent = false;
	bool gravityMutatorsPresent = false;
	bool gameSpeedMutatorsPresent = false;
	bool ballMutatorsPresent = false;
	bool demolishMutatorsPresent = false;
	bool carMutatorsPresent = false;
	bool boostMutatorsPresent = false;
	bool presetMutatorsPresent = false;

	// Gravity Mutators
	float mainGravity = 0.0f;

	// Ball Mutators
	float ballScale = 0.0f;
	float ballBounciness = 0.0f;
	float ballCarBounciness = 0.0f;
	int totalGameBalls = 0;
	//class ABall_TA* BallArchetype;
	float ballGravityScale = 0.0f;
	float ballSloMoDuration = 0.0f;
	float ballSloMoDilation = 0.0f;
	float ballSloMoCooldown = 0.0f;
	float ballSloMoRadius = 0.0f;
	float ballSloMoDiffSpeed = 0.0f;
	float ballMaxLinearSpeedScale = 0.0f;
	
	bool applyBallSettings = false;

	// Car Mutators
	float carScale = 0.0f;
	float carControlScale = 0.0f;
	float carJumpScale = 0.0f;
	bool carDemolishOnOpposingGround = false;
	bool carDemolishOnGoalZone = false;

	// Respawn mutators
	int respawnTime = 0;
	bool disableGoalDelay = false;

	// Match Mutators
	int matchGames = 0;
	int gameTime = 0;
	int gameScore = 0;
	bool unlimitedTime = false;

	// Game Speed Mutators
	float gameSpeed = 0.0f;

	// Boost Mutators
	bool noBooster = false;
	bool unlimitedBoost = false;
	bool overrideStartBoost = false;
	bool onlyApplyRechargeToMyHalf = false;
	bool onlyApplyRechargeToOpposingHalf = false;
	bool demolishOnEmptyMyHalf = false;
	bool demolishOnEmptyOpposingHalf = false;
	float boostStrength = 0.0f;
	float boostRechargeRate = 0.0f;
	float boostRechargeDelay = 0.0f;
	float boostStartAmount = 0.0f;

	// Demolish Mutators
	bool ballDemolish = false;
	int demolishTarget = 0;
	int demolishSpeed = 0;

	char* demolishTargets[3] = { "Other Team", "Everyone", "None" };
	char* demolishSpeeds[2] = { "SuperSonic", "None" };

	int selectedMutatorIndex = -1;
	int oldSelectedMutatorIndex = -1;

	bool applyChanges = false;
	bool testSetMutator = false;

	float interval = .06;
	time_t start, end;
	bool p_open = true;
};