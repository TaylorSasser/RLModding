#include "MutatorMods.h"
#include <comdef.h>
#include <iostream>

MutatorMods::MutatorMods(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

MutatorMods::~MutatorMods() {}

void MutatorMods::onMenuOpen() {
}

void MutatorMods::onMenuClose() {
}

void MutatorMods::ExportSettings() {}
void MutatorMods::ImportSettings() {}

void MutatorMods::DrawMenu() {
	ImGui::Begin("Mutator Settings", &p_open, ImVec2(400, 300), 0.75f);

	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (localGameEvent && localGameEvent->Mutators.Num() > 0) {

		ImGui::TextWrapped("Unlike the car and ball mods, these mods always apply for everyone in game.");

		ImGui::Combo("Mutator", &selectedMutatorIndex, mutatorList, IM_ARRAYSIZE(mutatorList));
		ImGui::Separator();
		if (selectedMutatorIndex >= 0) {
			if (itemsMutatorsPresent && strcmp("Items Mutator",mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Items Mutator Settings");

				ImGui::Separator();

			}
			else if (strcmp("Items Mutator", mutatorList[selectedMutatorIndex]) == 0){
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (respawnTimeMutatorsPresent && strcmp("Respawn Time Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Respawn Time Mutator Settings");
				ImGui::InputInt("Respawn Time", &respawnTime, 1, 5);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Time it takes for a player to respawn when demolished");

				ImGui::Checkbox("Disable Goal Delay", &disableGoalDelay);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("If enabled replays are skipped.");

				ImGui::Separator();

			}
			else if (strcmp("Respawn Time Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (matchMutatorsPresent && strcmp("Match Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Match Mutator Settings");
				ImGui::SliderInt("Match Games", &matchGames, 1, 5, "%.1f");
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("How many games in the series.");
				ImGui::SliderInt("Game Time", &gameTime, 1, 5, "%.1f");
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("How long the game should last in seconds");
				ImGui::SliderInt("Game Score", &gameScore, 1, 5, "%.1f");
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Score to win.");
				ImGui::Checkbox("Unlimited Time", &unlimitedTime);

				ImGui::Separator();

			}
			else if (strcmp("Match Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (handicapMutatorsPresent && strcmp("Handicap Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Handicap Mutator Settings");

				ImGui::Separator();

			}
			else if (strcmp("Handicap Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (gravityMutatorsPresent && strcmp("Gravity Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Gravity Mutator Settings");

				ImGui::InputFloat("Gravity", &mainGravity, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Careful, setting this to the extremes breaks everything...");

				ImGui::Separator();

			}
			else if (strcmp("Gravity Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (gameSpeedMutatorsPresent && strcmp("Game Speed Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Game Speed Mutator Settings");
				ImGui::SliderFloat("Speed", &gameSpeed, 0.1f, 10.0f, "%.1f");
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Sets the speed of the game, duh.");

				ImGui::Separator();

			}
			else if (strcmp("Game Speed Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (ballMutatorsPresent && strcmp("Ball Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Ball Mutator Settings");


				ImGui::SliderFloat("Scale", &ballScale, 0.1f, 10.0f, "%.1f");
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Sets the scale of all balls");
				ImGui::InputFloat("Bounciness", &ballBounciness, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("BOING.");
				ImGui::InputFloat("Car Bounciness", &ballCarBounciness, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("How bouncy the ball is on the car.");
				ImGui::InputFloat("Max Linear Speed Scale", &ballMaxLinearSpeedScale, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Max linear speed the ball can travel.");
				ImGui::InputFloat("Gravity", &ballGravityScale, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Ball Gravity");
				ImGui::InputInt("Total Balls", &totalGameBalls, 1, 5);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Total Number of Balls");

				ImGui::InputFloat("SloMo Duration", &ballSloMoDuration, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("How long TimeWarp lasts.");
				ImGui::InputFloat("SloMo Dilation", &ballSloMoDilation, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("How much TimeWarp modifies the time.");
				ImGui::InputFloat("SloMo Cooldown", &ballSloMoCooldown, 1, 5);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("How long before TimeWarp can be activated again.");
				ImGui::InputFloat("SloMo Radius", &ballSloMoRadius, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("How far the player has to be from the ball for TimeWarp to activate.");
				ImGui::InputFloat("SloMo Diff Speed", &ballSloMoDiffSpeed, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("SloMo Speed");


				if (ImGui::Button("Apply Ball Settings")) {
					applyBallSettings = true;
				}

				ImGui::Separator();

			}
			else if (strcmp("Ball Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (demolishMutatorsPresent && strcmp("Demolish Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Demolish Mutator Settings");

				ImGui::Combo("Demolish Targets", &demolishTarget, demolishTargets, IM_ARRAYSIZE(demolishTargets));
				ImGui::Combo("Demolish Speeds", &demolishSpeed, demolishSpeeds, IM_ARRAYSIZE(demolishSpeeds));


				ImGui::Separator();

			}
			else if (strcmp("Demolish Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (carMutatorsPresent && strcmp("Car Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Car Mutator Settings");

				ImGui::SliderFloat("Car Scale", &carScale, 0.1f, 10.0f, "%.1f");
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Sets the scale of all cars");
				ImGui::SliderFloat("Jump Scale", &carJumpScale, 0.1f, 10.0f, "%.1f");
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("The scale of each cars jump.");
				ImGui::SliderFloat("Control Scale", &carJumpScale, 0.1f, 10.0f, "%.1f");
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("The scale of the controls? not sure...");

				ImGui::Checkbox("Demolish on goal zone.", &carDemolishOnGoalZone);
				ImGui::Checkbox("Demolish on opposing side.", &carDemolishOnGoalZone);

				ImGui::Separator();

			}
			else if (strcmp("Car Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (boostMutatorsPresent && strcmp("Boost Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Boost Mutator Settings");

				ImGui::Checkbox("No Boost", &noBooster);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Disable boost.");
				ImGui::Checkbox("Unlimited Boost", &unlimitedBoost);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("100% Boost always/");
				ImGui::Checkbox("Override Start Boost", &overrideStartBoost);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Enable updated start boost amount set below.");
				ImGui::Checkbox("Only recharge boost on teams half", &onlyApplyRechargeToMyHalf);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Boost only recharges on teams side of field.");
				ImGui::Checkbox("Only recharge boost on opponents half", &onlyApplyRechargeToOpposingHalf);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Boost only recharges on opponents side of field.");
				ImGui::Checkbox("Demolish on teams half if out of boost", &demolishOnEmptyMyHalf);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Sets the scale of all cars");
				ImGui::Checkbox("Demolish on opponents half if out of boost.", &demolishOnEmptyOpposingHalf);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Demolish on opponents half if out of boost");

				ImGui::InputFloat("Strength", &boostStrength, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Boost strength multiplier.");
				ImGui::InputFloat("Recharge Rate", &boostRechargeRate, 0.1f, 0.2f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Rate at which boost recharges.");
				ImGui::InputFloat("Recharge Delay", &boostRechargeDelay, 1, 5);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Amount of time to delay before recharging boost.");
				ImGui::InputFloat("Start Amount", &boostStartAmount, 1.0f, 5.0f);
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("How much boost to start with.");

				ImGui::Separator();

			}
			else if (strcmp("Boost Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
			if (presetMutatorsPresent && strcmp("Preset Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Preset Mutator Settings");

				ImGui::Separator();

			}
			else if (strcmp("Preset Mutator", mutatorList[selectedMutatorIndex]) == 0) {
				ImGui::TextWrapped("Mutator was not found in game.");
			}
		}
		else {
			ImGui::TextWrapped("Select a mutator to edit it.");
		}
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "*Most changes to the mutators will require a respawn or match restart.");

	}
	else {
		ImGui::TextWrapped("No mutators set, to mod them please enable them in the game settings.");
	}

	/*
	if (ImGui::Button("Set gravity mutator!")) {
		testSetMutator = true;
				
		
		UOnlineGameLanServer_X* lanServer = reinterpret_cast<SDK::UOnlineGameLanServer_X*>(Utils::GetInstanceOf(UOnlineGameLanServer_X::StaticClass()));

		if (lanServer) {

			lanServer->UpdateGameSettings(lanServer->GameSettings,FString(L"SuperGravity"));

			//localGameEvent->StartNewGame();
		}
		else {
			std::cout << "Can't find LAN" << std::endl;
		}
		
	}
	*/

	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void MutatorMods::onPlayerTick(Event* event) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (testSetMutator) {
		
		testSetMutator = false;
		
	}

	if (localGameEvent) {
		srand(time(NULL));
		if(selectedMutatorIndex != -1) {
			TArray< class UMutator_TA* > mutators = localGameEvent->Mutators;
			for (int i = 0; i < mutators.Num(); i++) {
				UMutator_TA* tempMutator = mutators.GetByIndex(i);
				if (tempMutator) {
					if (tempMutator->IsA(SDK::UMutator_ItemsMode_TA::StaticClass())) {
						std::cout << "Items Mutator | " << mutators.Num() << std::endl;
						// Not in game yet, so not implimented.
						itemsMutatorsPresent = true;
					}
					else if (tempMutator->IsA(SDK::UMutator_RespawnTime_TA::StaticClass())) {
						UMutator_RespawnTime_TA* respawnMutator = (UMutator_RespawnTime_TA*)tempMutator;
						respawnMutator->RespawnTime = respawnTime;
						respawnMutator->bDisableGoalDelay = disableGoalDelay;

						respawnMutator->Init(localGameEvent);
						//std::cout << "Respawn Time Mutator | " << respawnMutator->RespawnTime << std::endl;

						respawnTimeMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_Match_TA::StaticClass())) {
						UMutator_Match_TA* matchMutator = (UMutator_Match_TA*)tempMutator;
						matchMutator->MatchGames = matchGames;
						matchMutator->GameTime = gameTime;
						matchMutator->GameScore = gameScore;
						matchMutator->bUnlimitedTime = unlimitedTime;

						matchMutator->Init(localGameEvent);

						//std::cout << "Match Mutator | " << mutators.Num() << std::endl;
						matchMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_Handicap_TA::StaticClass())) {
						std::cout << "Handicap Mutator | " << mutators.Num() << std::endl;
						// Not in game yet, so not implimented.

						handicapMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_Gravity_TA::StaticClass())) {
						UMutator_Gravity_TA* gravityMutator = (UMutator_Gravity_TA*)tempMutator;
						gravityMutator->Gravity = mainGravity;
						gravityMutator->Init(localGameEvent);

						//std::cout << "Gravity Mutator | " << gravityMutator->Gravity << std::endl;
						gravityMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_GameSpeed_TA::StaticClass())) {
						UMutator_GameSpeed_TA* gameSpeedMutator = (UMutator_GameSpeed_TA*)tempMutator;
						gameSpeedMutator->GameSpeed = gameSpeed;
						gameSpeedMutator->Init(localGameEvent);
						//std::cout << "Game Speed Mutator | " << gameSpeedMutator->GameSpeed << std::endl;
						gameSpeedMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_Demolish_TA::StaticClass())) {
						UMutator_Demolish_TA* demolishMutator = (UMutator_Demolish_TA*)tempMutator;

						demolishMutator->DemolishTarget = (EDemolishTarget)demolishTarget;
						demolishMutator->DemolishSpeed = (EDemolishSpeed)demolishSpeed;
						demolishMutator->bBallDemolish = 1.0f;
						demolishMutator->Init(localGameEvent);

						//std::cout << "Demolish Mutator | " << mutators.Num() << std::endl;
						demolishMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_Car_TA::StaticClass())) {
						std::cout << "Car Mutator | " << mutators.Num() << std::endl;
						UMutator_Car_TA* carMutator = (UMutator_Car_TA*)tempMutator;
						carMutator->CarScale = carScale;
						carMutator->ControlScale = carControlScale;
						carMutator->JumpScale = carJumpScale;
						carMutator->bDemolishOnGoalZone = carDemolishOnGoalZone;
						carMutator->bDemolishOnOpposingGround = carDemolishOnOpposingGround;

						carMutator->Init(localGameEvent);

						carMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_Booster_TA::StaticClass())) {
						//std::cout << "Boost Mutator | " << mutators.Num() << std::endl;
						UMutator_Booster_TA* boostMutator = (UMutator_Booster_TA*)tempMutator;

						boostMutator->bNoBooster = noBooster;
						boostMutator->bUnlimitedBoost = unlimitedBoost;
						boostMutator->bDemolishOnEmptyMyHalf = demolishOnEmptyMyHalf;
						boostMutator->bOverrideStartBoost = overrideStartBoost;
						boostMutator->bDemolishOnEmptyOpposingHalf = demolishOnEmptyOpposingHalf;
						boostMutator->bOnlyApplyRechargeToMyHalf = onlyApplyRechargeToMyHalf;
						boostMutator->bOnlyApplyRechargeToOpposingHalf = onlyApplyRechargeToOpposingHalf;
						boostMutator->BoostStrength = boostStrength;
						boostMutator->BoostRechargeRate = boostRechargeRate;
						boostMutator->BoostRechargeDelay = boostRechargeDelay;
						boostMutator->BoostStartAmount = boostStartAmount;

						boostMutator->Init(localGameEvent);
						boostMutatorsPresent = true;
					}
					else if (tempMutator->IsA(SDK::UMutator_Ball_TA::StaticClass())) {
						UMutator_Ball_TA* ballMutator = (UMutator_Ball_TA*)tempMutator;
						//ABall_Breakout_TA* ballArch = reinterpret_cast<SDK::ABall_Breakout_TA*>(Utils::GetInstanceOf(ABall_Breakout_TA::StaticClass()));
						//ballMutator->MutateObject(ballArch);
						//ballMutator->BallArchetype = ballArch;

						/*
						std::cout << "Ball ballScale | " << ballMutator->BallScale << std::endl;
						std::cout << "Ball BallBounciness | " << ballMutator->BallBounciness << std::endl;
						std::cout << "Ball ballCarBounciness | " << ballMutator->BallCarBounciness << std::endl;
						std::cout << "Ball totalGameBalls | " << ballMutator->TotalGameBalls << std::endl;
						std::cout << "Ball ballGravityScale | " << ballMutator->BallGravityScale << std::endl;
						std::cout << "Ball ballSloMoDuration | " << ballMutator->BallSloMoDuration << std::endl;
						std::cout << "Ball ballSloMoDilation | " << ballMutator->BallSloMoDilation << std::endl;
						std::cout << "Ball ballSloMoCooldown | " << ballMutator->BallSloMoCooldown << std::endl;
						std::cout << "Ball ballSloMoRadius | " << ballMutator->BallSloMoRadius << std::endl;
						std::cout << "Ball ballSloMoDiffSpeed | " << ballMutator->BallSloMoDiffSpeed << std::endl;
						std::cout << "Ball ballMaxLinearSpeedScale | " << ballMutator->BallMaxLinearSpeedScale << std::endl;
						*/

						ballMutator->BallScale = ballScale;
						ballMutator->BallBounciness = ballBounciness;
						ballMutator->BallCarBounciness = ballCarBounciness;
						ballMutator->TotalGameBalls = totalGameBalls;
						ballMutator->BallGravityScale = ballGravityScale;
						ballMutator->BallSloMoDuration = ballSloMoDuration;
						ballMutator->BallSloMoDilation = ballSloMoDilation;
						ballMutator->BallSloMoCooldown = ballSloMoCooldown;
						ballMutator->BallSloMoRadius = ballSloMoRadius;
						ballMutator->BallSloMoDiffSpeed = ballSloMoDiffSpeed;
						ballMutator->BallMaxLinearSpeedScale = ballMaxLinearSpeedScale;

						ballMutator->Init(localGameEvent);
						//std::cout << "Ball Mutator | " << mutators.Num() << std::endl;
						ballMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_Preset_TA::StaticClass())) {
						// Not in game yet, so not implimented.
						std::cout << "Preset Mutator | " << mutators.Num() << std::endl;
						presetMutatorsPresent = true;
					}
					else {
						std::cout << "Generic Mutator | " << mutators.Num() << std::endl;

					}
				}
			}

			mutatorCount = mutators.Num();

			if (applyBallSettings) {
				localGameEvent->ResetBalls();
				applyBallSettings = false;
			}
		
			/*
			}
			if (applyChanges) {
				localGameEvent->InitMutators();
				applyChanges = false;
			}
			*/
		}
		// Update Settings
		else if (selectedMutatorIndex == -1 || selectedMutatorIndex != oldSelectedMutatorIndex) {
			oldSelectedMutatorIndex = selectedMutatorIndex;
			TArray< class UMutator_TA* > mutators = localGameEvent->Mutators;
			for (int i = 0; i < mutators.Num(); i++) {
				UMutator_TA* tempMutator = mutators.GetByIndex(i);
				if (tempMutator) {
					if (tempMutator->IsA(SDK::UMutator_ItemsMode_TA::StaticClass())) {
						// Not in game yet, so not implimented.
					}
					else if (tempMutator->IsA(SDK::UMutator_RespawnTime_TA::StaticClass())) {
						UMutator_RespawnTime_TA* respawnMutator = (UMutator_RespawnTime_TA*)tempMutator;
						respawnTime = respawnMutator->RespawnTime;
						disableGoalDelay = respawnMutator->bDisableGoalDelay;
					}
					else if (tempMutator->IsA(SDK::UMutator_Match_TA::StaticClass())) {
						UMutator_Match_TA* matchMutator = (UMutator_Match_TA*)tempMutator;
						matchGames = matchMutator->MatchGames;
						gameTime = matchMutator->GameTime;
						gameScore = matchMutator->GameScore;
						unlimitedTime = matchMutator->bUnlimitedTime;
					}
					else if (tempMutator->IsA(SDK::UMutator_Handicap_TA::StaticClass())) {
						// Not in game yet, so not implimented.
					}
					else if (tempMutator->IsA(SDK::UMutator_Gravity_TA::StaticClass())) {
						UMutator_Gravity_TA* gravityMutator = (UMutator_Gravity_TA*)tempMutator;
						mainGravity = gravityMutator->Gravity;
					}
					else if (tempMutator->IsA(SDK::UMutator_GameSpeed_TA::StaticClass())) {
						UMutator_GameSpeed_TA* gameSpeedMutator = (UMutator_GameSpeed_TA*)tempMutator;
						gameSpeed = gameSpeedMutator->GameSpeed;
					}
					else if (tempMutator->IsA(SDK::UMutator_Demolish_TA::StaticClass())) {
						UMutator_Demolish_TA* demolishMutator = (UMutator_Demolish_TA*)tempMutator;

						demolishTarget = (int)demolishMutator->DemolishTarget.GetValue();
						demolishSpeed = (int)demolishMutator->DemolishSpeed.GetValue();
						ballDemolish = demolishMutator->bBallDemolish;
						
					}
					else if (tempMutator->IsA(SDK::UMutator_Car_TA::StaticClass())) {
						std::cout << "Car Mutator | " << mutators.Num() << std::endl;
						UMutator_Car_TA* carMutator = (UMutator_Car_TA*)tempMutator;
						carMutator->CarScale = carScale;
						carMutator->ControlScale = carControlScale;
						carMutator->JumpScale = carJumpScale;
						carMutator->bDemolishOnGoalZone = carDemolishOnGoalZone;
						carMutator->bDemolishOnOpposingGround = carDemolishOnOpposingGround;

						carMutator->Init(localGameEvent);

						carMutatorsPresent = true;

					}
					else if (tempMutator->IsA(SDK::UMutator_Booster_TA::StaticClass())) {
						UMutator_Booster_TA* boostMutator = (UMutator_Booster_TA*)tempMutator;

						noBooster = boostMutator->bNoBooster;
						unlimitedBoost = boostMutator->bUnlimitedBoost;
						demolishOnEmptyMyHalf = boostMutator->bDemolishOnEmptyMyHalf;
						overrideStartBoost = boostMutator->bOverrideStartBoost;
						demolishOnEmptyOpposingHalf = boostMutator->bDemolishOnEmptyOpposingHalf;
						onlyApplyRechargeToMyHalf = boostMutator->bOnlyApplyRechargeToMyHalf;
						onlyApplyRechargeToOpposingHalf = boostMutator->bOnlyApplyRechargeToOpposingHalf;
						boostStrength = boostMutator->BoostStrength;
						boostRechargeRate = boostMutator->BoostRechargeRate;
						boostRechargeDelay = boostMutator->BoostRechargeDelay;
						boostStartAmount = boostMutator->BoostStartAmount;
					}
					else if (tempMutator->IsA(SDK::UMutator_Ball_TA::StaticClass())) {
						UMutator_Ball_TA* ballMutator = (UMutator_Ball_TA*)tempMutator;
						ballScale = ballMutator->BallScale;
						ballBounciness = ballMutator->BallBounciness;
						ballCarBounciness = ballMutator->BallCarBounciness;
						totalGameBalls = ballMutator->TotalGameBalls;
						ballGravityScale = ballMutator->BallGravityScale;
						ballSloMoDuration = ballMutator->BallSloMoDuration;
						ballSloMoDilation = ballMutator->BallSloMoDilation;
						ballSloMoCooldown = ballMutator->BallSloMoCooldown;
						ballSloMoRadius = ballMutator->BallSloMoRadius;
						ballSloMoDiffSpeed = ballMutator->BallSloMoDiffSpeed;
						ballMaxLinearSpeedScale = ballMutator->BallMaxLinearSpeedScale;
					}
					else if (tempMutator->IsA(SDK::UMutator_Preset_TA::StaticClass())) {
						// Not in game yet, so not implimented.
					}
				}
			}
		}
	}
}

void MutatorMods::onCarSpawned(Event* e) {

}

void MutatorMods::onCarDemolished(Event* e) {
}