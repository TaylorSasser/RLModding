#include "CarPhysics.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion


CarPhysics::CarPhysics(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CarPhysics::CarPhysics(std::string name, int key) : ModBase(name, key) {}

void CarPhysics::onMenuClose() {
	//delete[] players;
	reset();
	printf("Car Mods Disabled\n");
}

void CarPhysics::ExportSettings(pt::ptree) {

}
void CarPhysics::ImportSettings(pt::ptree) {

}

void CarPhysics::DrawMenu() {
	if (CarPhysics::isEnabled()) {
		ImGui::Begin("Car Physics Mods", &p_open, ImVec2(778, 688), 0.75f);

		ImGui::Combo("Player Car", &playerSelectedIndex, players, IM_ARRAYSIZE(players));
		ImGui::SameLine();
		if (ImGui::Button("Refresh")) {
			refreshCars = true;
		}

		ImGui::Separator();

		ImGui::InputInt("# Clones", &numClones);
		if (ImGui::Button("Clone Car")) cloneMe = true;


		ImGui::Separator();

		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "Respawn the players cars for them to see the change in size.");
		ImGui::SliderFloat("Car Scale", &carScale, 0.1f, 10.0f, "%.1f");
		ImGui::Checkbox("Respawn before scale", &respawnOnScale);
		ImGui::SameLine();
		if (ImGui::Button("Apply")) {
			setCarScale = true;
		}

		ImGui::PushItemWidth(200);
		ImGui::InputFloat("Mass", &mass, 0.5f, 1.0f, 1); ImGui::SameLine();
		ImGui::PushItemWidth(200);
		ImGui::InputFloat("Gravity Scale", &gravityScale, 0.5f, 1.0f, 1);

		ImGui::Checkbox("Turn Off Car Collision", &carCollisionOff);
		ImGui::Checkbox("Demolish On Opposing Side", &demolishOnOpposingSide); ImGui::SameLine();
		ImGui::Checkbox("Demolish On Goal Zone", &demolishOnGoalZone);

		ImGui::Checkbox("Podium Mode", &podiumMode);
		ImGui::Checkbox("Hide Car", &isHidden);
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("Makes car invisible");

		//ImGui::Checkbox("Freeze in place.", &freezeInPlace);
		ImGui::Checkbox("No Boost Blue", &noBoostBlue);
		ImGui::SameLine();
		ImGui::Checkbox("No Boost Orange", &noBoostOrange);

		ImGui::Checkbox("Unlimited Boost", &unlimitedBoost); ImGui::SameLine();
		ImGui::Checkbox("Unlimited Jumps", &bUnlimitedJumps);


		//if (ImGui::IsItemHovered())
		//	ImGui::SetTooltip("For some reason it won't turn back off once turned on...");


		//ImGui::Checkbox("Disable Jumps", &disableJumps);

		ImGui::Separator();

		/*
		ImGui::PushItemWidth(100);

		ImGui::InputFloat("Jump Force", &jumpForce, 0.5f, 1.0f, 1);
		ImGui::SameLine();
		ImGui::NextColumn();
		ImGui::PushItemWidth(100);
		ImGui::InputFloat("Jump Height", &maxJumpHeight, 0.5f, 1.0f, 1);
		*/


		ImGui::InputFloat("Jump Timeout", &jumpTimeout, 0.5f, 1.0f, 1);
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("The amount of time till you lose your second dodge");
		ImGui::InputFloat("Torque Rate", &torqueRate, 0.5f, 1.0f, 1);
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("How fast your car flips. For example doubling the default 5.5 will make your car flip ~2 times with one dodge");
		ImGui::InputFloat("Max Car Velocity", &maxCarSpeed, 1000.0f, 10000.0f, 1);
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("The max velocity of your car");
		ImGui::InputFloat("Ground Sticky Force", &groundSticky, 0.5f, 1.0f, 1);
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("The amount of sticky force applied when you're on the ground");
		ImGui::InputFloat("Wall Sticky Force", &wallSticky, 0.5f, 1.0f, 1);
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("The amount of sticky force applied when you're on the wall");
		if (ImGui::Button("Respawn Car")) {
			respawn = true;
		}
		ImGui::SameLine();
		if (ImGui::Button("Reset")) {
			reset();
			reset_values = true;
			apply = false;
		}

		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}
		ImGui::End();
	}
}

void CarPhysics::onPlayerTick(Event* e) {

	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	//std::cout << "State note: " << localGameEvent->ReplicatedStateName.GetName() << std::endl;

	if (localGameEvent && localGameEvent->ReplicatedStateName.GetName().compare("ReplayPlayback") != 0 && localGameEvent->ReplicatedStateName.GetName().compare("Finished") != 0) {
		TArray< class AController* > gameEventPlayers = localGameEvent->Players;

		if (refreshCars || currPlayerCount != gameEventPlayers.Num()) {
			populatePlayerList(localGameEvent);
			refreshCars = false;
		}
		if (cloneMe && InstanceStorage::PlayerController() != NULL &&  InstanceStorage::PlayerController()->Car) {
			for (int i = 0; i < numClones; i++) {
				localGameEvent->SpawnCar(InstanceStorage::PlayerController(), InstanceStorage::PlayerController()->Car->Location, InstanceStorage::PlayerController()->Car->Rotation);
			}

		}

		for (int i = 0; i < gameEventPlayers.Num(); i++) {

			if (playerSelectedIndex == 0 || i == playerSelectedIndex - 1) {

				AController* tempController = gameEventPlayers.GetByIndex(i);
				ACar_TA* currCar = NULL;

				// Check if bot or person
				if (tempController && tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					currCar = ((AAIController_TA*)tempController)->Car;
				}
				else if (tempController && tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					currCar = ((APlayerController_TA*)tempController)->Car;

				}

				if (currCar) {

					if (carCollisionOff && InstanceStorage::PlayerController()->Car != NULL) {
						currCar->SetCollisionType(SDK::ECollisionType::COLLIDE_TouchAllButWeapons);
					}
					else if (InstanceStorage::PlayerController()->Car != NULL) {
						currCar->SetCollisionType(SDK::ECollisionType::COLLIDE_BlockAll);
					}


					if (currCar->BoostComponent) {
						
						//Using 1.0f instead of 1000 should work and it's reversible to normal state.
						//currCar->BoostComponent->SetUnlimitedBoost(unlimitedBoost);
						//currCar->BoostComponent->Activate();
						
						if (unlimitedBoost) {						
							currCar->BoostComponent->MaxBoostAmount = 1.0f;
							currCar->BoostComponent->SetBoostAmount(1.0f);
						}

						if (currCar->GetTeamIndex() == 0) {
							if (noBoostBlue) {
								currCar->BoostComponent->SetBoostAmount(0.0f);
								currCar->BoostComponent->MaxBoostAmount = 0.0f;
							}
							else {
								currCar->BoostComponent->MaxBoostAmount = 1.0f;
							}
						}
						else if (currCar->GetTeamIndex() == 1) {
							if (noBoostOrange) {
								currCar->BoostComponent->SetBoostAmount(0.0f);
								currCar->BoostComponent->MaxBoostAmount = 0.0f;
							}
							else {
								currCar->BoostComponent->MaxBoostAmount = 1.0f;
							}
						}	
					}

					if(!Utils::FloatCompare(mass,currCar->PreWeldMass))
						currCar->SetMass(mass);
					if (!Utils::FloatCompare(gravityScale, currCar->GravityScale))
						currCar->GravityScale = gravityScale;
					
					if(isHidden)
						currCar->SetHidden(1.0f);
					else 
						currCar->SetHidden(0.0f);

					
					if(podiumMode)
						currCar->bPodiumMode = 1.0f;
					else 
						currCar->bPodiumMode = 0.0f;
					/*
					if(freezeInPlace)
						currCar->SetFrozen(1.0f);
					else 
						currCar->SetFrozen(0.0f);
					*/
					/*
					if (currCar->JumpComponent) {
						if(disableJumps)
							currCar->JumpComponent->bDeactivate = 1.0f;
						else 
							currCar->JumpComponent->bDeactivate = 0.0f;
						//currCar->JumpComponent->MaxJumpHeight = maxJumpHeight;
						//currCar->JumpComponent->JumpForce = jumpForce;
						//currCar->JumpComponent->Activate();
						//currCar->JumpComponent->RemoveFromCar();
					}
					*/

					// For some reason these properties need respawn					
					bool needRefresh = false;
					if (!Utils::FloatCompare(currCar->MaxTimeForDodge, jumpTimeout)) {
						currCar->MaxTimeForDodge = jumpTimeout;
						needRefresh = true;
					}
					if (!Utils::FloatCompare(currCar->MaxAngularSpeed, torqueRate)) {
						currCar->SetMaxAngularSpeed(torqueRate);
						needRefresh = true;
					}
					if (!Utils::FloatCompare(currCar->MaxLinearSpeed, maxCarSpeed)) {
						currCar->SetMaxLinearSpeed(maxCarSpeed);
						needRefresh = true;
					}
					if (!Utils::FloatCompare(currCar->StickyForceGround, groundSticky)) {
						currCar->StickyForceGround = groundSticky;
						needRefresh = true;
					}
					if (!Utils::FloatCompare(currCar->StickyForceWall, wallSticky)) {
						currCar->StickyForceWall = wallSticky;
						needRefresh = true;
					}

					if (respawn) {
						currCar->RespawnInPlace();
						respawn = false;
					}


					// Added check to make sure car is not null
					if (setCarScale) {
						FVector carOldLoc = currCar->Location;
						FRotator carOldRot = currCar->Rotation;

						if (respawnOnScale) {
							currCar->RespawnInPlace();

							// Check if bot or person
							if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
								currCar = ((AAIController_TA*)gameEventPlayers.GetByIndex(i))->Car;
							}
							else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
								currCar = ((APlayerController_TA*)gameEventPlayers.GetByIndex(i))->Car;

							}

						}
						//InstanceStorage::PlayerController()->Car->Teleport(carOldLoc, carOldRot, false, false, false);
						if (currCar) {
							// Fix to disable demolish when scaling?
							if (demolishOnGoalZone)
								currCar->bDemolishOnGoalZone = false;
							currCar->SetCarScale(carScale);
							if (demolishOnGoalZone)
								currCar->bDemolishOnGoalZone = true;
						}
					}

					if (currCar) {
					if (demolishOnOpposingSide)
						currCar->bDemolishOnOpposingGround = 1.0f;
					else
						currCar->bDemolishOnOpposingGround = 0.0f;

					if (demolishOnGoalZone)
						currCar->bDemolishOnGoalZone = 1.0f;
					else
						currCar->bDemolishOnGoalZone = 0.0f;
					}
				}
			}

		}

		// Reset options markers
		if (cloneMe) cloneMe = false;
		if (setCarScale) setCarScale = false;

		// Populate checkboxes based on selected user
		if (playerSelectedIndex != 0 && oldPlayerSelectedIndex != playerSelectedIndex) {
			statusText = "";

			oldPlayerSelectedIndex = playerSelectedIndex;
			// Check if bot or person
			if (playerSelectedIndex < gameEventPlayers.Num() + 1) {

				AController* tempController = gameEventPlayers.GetByIndex(playerSelectedIndex - 1);
				if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					AAIController_TA* currController = (AAIController_TA*)tempController;
					if (currController->Car) {
						if (currController->Car->BoostComponent)
							unlimitedBoost = currController->Car->BoostComponent->bUnlimitedBoost;
						freezeInPlace = currController->Car->bFrozen;
						isHidden = currController->Car->bHidden;
						podiumMode = currController->Car->bPodiumMode;
						mass = currController->Car->Mass;
						gravityScale = currController->Car->GravityScale;

					}

				}
				else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					APlayerController_TA* currController = (APlayerController_TA*)tempController;
					if (currController->Car) {
						if(currController->Car->BoostComponent)
							unlimitedBoost = currController->Car->BoostComponent->bUnlimitedBoost;
						freezeInPlace = currController->Car->bFrozen;
						isHidden = currController->Car->bHidden;
						podiumMode = currController->Car->bPodiumMode;
						mass = currController->Car->Mass;
						gravityScale = currController->Car->GravityScale;

					}

				}
			}
		}
		else if (playerSelectedIndex == 0 && oldPlayerSelectedIndex != playerSelectedIndex) {
			statusText = "";

			oldPlayerSelectedIndex = playerSelectedIndex;



		}

	}

}

void CarPhysics::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent) {
	// Populate player list
	std::fill_n(players, 11, "\0");
	players[0] = "All\0";

	if (localGameEvent) {
		TArray< class AController* > eventPlayers = localGameEvent->Players;
		for (int i = 0; i < eventPlayers.Num(); i++) {

			if (eventPlayers[i]) {
				AController* tempController = eventPlayers.GetByIndex(i);

				if (tempController && tempController->PlayerReplicationInfo && tempController->PlayerReplicationInfo->PlayerName.IsValid()) {
					std::string playerName = tempController->PlayerReplicationInfo->PlayerName.ToString();

					// Check if bot or person
					if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
						AAIController_TA* currController = (AAIController_TA*)tempController;

						playerName.append(" [BOT]");

						if (currController->Car && currController->GetTeamNum() == 0) {
							playerName.append(" (Blue Team)");
						}
						if (currController->Car && currController->GetTeamNum() == 1) {
							playerName.append(" (Orange Team)");
						}
					}
					else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
						APlayerController_TA* currController = (APlayerController_TA*)tempController;

						if (currController->Car && currController->GetTeamNum() == 0) {
							playerName.append(" (Blue Team)");
						}
						if (currController->Car && currController->GetTeamNum() == 1) {
							playerName.append(" (Orange Team)");
						}
					}

					char *cptr = Utils::stringToCharArray(playerName);
					//std::cout << "Player: " << playerName << std::endl;
					//_bstr_t b(eventPlayers.GetByIndex(i)->PlayerReplicationInfo->PlayerName.ToString().data());
					players[i + 1] = cptr;
				}
			}
		}
		currPlayerCount = eventPlayers.Num();

	}
}

void CarPhysics::reset() {
	printf("Reset classic mods");
	jumpTimeout = 1.5;
	torqueRate = 5.5;
	maxCarSpeed = 2300.0;
	groundSticky = 1.0;
	wallSticky = 1.0;
}

void CarPhysics::onCarSpawned(Event* e) {
	//std::cout << "Spawned a car!" << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if(localGameEvent && localGameEvent->ReplicatedStateName.Index && !localGameEvent->ReplicatedStateName.GetName().compare("None"))
		populatePlayerList(localGameEvent);
}

void CarPhysics::onGameEventRemovePlayer(Event* e) {
	//std::cout << "Removed Player: " << ((APRI_TA*)e->getCallingObject())->PlayerName.ToString() << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	//std::cout << "State: " << localGameEvent->ReplicatedStateName.GetName() << std::endl;
	if (localGameEvent && localGameEvent->ReplicatedStateName.Index && !localGameEvent->ReplicatedStateName.GetName().compare("None"))
		populatePlayerList(localGameEvent);
}

void CarPhysics::onGameEventAddPlayer(Event* e) {
	//std::cout << "Removed Player: " << ((APRI_TA*)e->getCallingObject())->PlayerName.ToString() << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	//std::cout << "State: " << localGameEvent->ReplicatedStateName.GetName() << std::endl;
	if (localGameEvent && localGameEvent->ReplicatedStateName.Index && !localGameEvent->ReplicatedStateName.GetName().compare("None"))
		populatePlayerList(localGameEvent);
}


void CarPhysics::onCarTick(Event* event) {
	//((ACar_TA*)event->getCallingObject())->MaxTimeForDodge = jumpTimeout;
	//((ACar_TA*)event->getCallingObject())->MaxAngularSpeed = torqueRate;
	//((ACar_TA*)event->getCallingObject())->MaxLinearSpeed = maxCarSpeed;
	//((ACar_TA*)event->getCallingObject())->StickyForceGround = groundSticky;
	//((ACar_TA*)event->getCallingObject())->StickyForceWall = wallSticky;
	/*
	if (apply) {
		if (InstanceStorage::CurrentCar()) {
			if (ModBase::STATIC_getCurrentGameState() & GameState::TRAINING) {
				ACar_Freeplay_TA* freeplayCar = reinterpret_cast<SDK::ACar_Freeplay_TA*>(InstanceStorage::CurrentCar());
				freeplayCar->MaxTimeForDodge = jumpTimeout;
				freeplayCar->MaxAngularSpeed = torqueRate;
				freeplayCar->MaxLinearSpeed = maxCarSpeed;
				freeplayCar->StickyForceGround = groundSticky;
				freeplayCar->StickyForceWall = wallSticky;
			}
			else {
				InstanceStorage::CurrentCar()->MaxTimeForDodge = jumpTimeout;
				InstanceStorage::CurrentCar()->MaxAngularSpeed = torqueRate;
				InstanceStorage::CurrentCar()->MaxLinearSpeed = maxCarSpeed;
				InstanceStorage::CurrentCar()->StickyForceGround = groundSticky;
				InstanceStorage::CurrentCar()->StickyForceWall = wallSticky;
			}
		}

	}

	else if (reset_values) {
		ACar_TA* car = InstanceStorage::PlayerController()->Car;
		if (car) {
			reset();
			if (ModBase::STATIC_getCurrentGameState() & GameState::TRAINING) {
				ACar_Freeplay_TA* freeplayCar = reinterpret_cast<SDK::ACar_Freeplay_TA*>(car);
				freeplayCar->MaxTimeForDodge = jumpTimeout;
				freeplayCar->MaxAngularSpeed = torqueRate;
				freeplayCar->MaxLinearSpeed = maxCarSpeed;
				freeplayCar->StickyForceGround = groundSticky;
				freeplayCar->StickyForceWall = wallSticky;
			}
			else {
				car->MaxTimeForDodge = jumpTimeout;
				car->MaxAngularSpeed = torqueRate;
				car->MaxLinearSpeed = maxCarSpeed;
				car->StickyForceGround = groundSticky;
				car->StickyForceWall = wallSticky;
			}
			apply = false;
			reset_values = false;
		}
	}
	*/
}

void CarPhysics::onActorJump(Event* e) {
	if (bUnlimitedJumps) {
		if (e->getCallingObject() != nullptr) {
			((SDK::ACar_TA*)e->getCallingObject())->bDoubleJumped = 0;
			((SDK::ACar_TA*)e->getCallingObject())->bJumped = 0;
		}
	}

}

/*

gameTeams.Data[j]->SetCustomTeamName(FString(L"DUMB NAME"));
ServerSay(to_string(gameTeams.Data[j]->GetTeamName().Data));
gameTeams.Data[j]->SetScore(6);

if (inGamePlayerController->Car != NULL && inGamePlayerController->Car->IsA(SDK::ACar_Freeplay_TA::StaticClass())) {
SDK::ACar_Freeplay_TA* freePlayCar = (SDK::ACar_Freeplay_TA*)inGamePlayerController->Car;
SDK::TArray<struct SDK::FLinearColor> freePlayCarColors = freePlayCar->CarColors;
if (setFreePlayColors) {
setFreePlayColors = false;
printf("Found the freeplay car...");
for (int i = 0; i < freePlayCarColors.Num(); i++) {
freePlayCarColors.GetByIndex(i).R = 0;
freePlayCarColors.GetByIndex(i).G = 0;
freePlayCarColors.GetByIndex(i).B = 0;
}
}
SDK::ACar_TA* myCar = inGamePlayerController->Car;

SDK::FLinearColor tempCustomColor = myCar->CarMesh->GetTeamColor();
tempCustomColor.R = 0;
tempCustomColor.G = 0;
tempCustomColor.B = 0;
myCar->CarMesh->SetTeamColorOverride(tempCustomColor);
myCar->CarMesh->SetCustomColorOverride(tempCustomColor);

SDK::ACar_TA* myCar = inGamePlayerController->Car;
SDK::FLinearColor tempCustomColor = myCar->CarMesh->GetCustomColor();
SDK::FLinearColor tempTeamColor = myCar->CarMesh->GetTeamColor();

tempTeamColor.R = 0;
tempTeamColor.G = 0;
tempTeamColor.B = 0;
std:cout << tempTeamColor.A
myCar->CarMesh->SetTeamColorOverride(tempTeamColor);


if (InstanceStorage::PlayerController()->Car != NULL && !Utils::FloatCompare(carMaxSpinRate, InstanceStorage::PlayerController()->Car->MaxAngularSpeed)) {
InstanceStorage::PlayerController()->Car->SetMaxAngularSpeed(carMaxSpinRate);
}
*/