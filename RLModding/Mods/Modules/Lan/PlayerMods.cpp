#include "PlayerMods.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion


PlayerMods::PlayerMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
PlayerMods::PlayerMods(std::string name, int key) : ModBase(name, key) {}

void PlayerMods::onMenuClose() {
	//delete[] players;
}

void PlayerMods::ExportSettings(pt::ptree) {}
void PlayerMods::ImportSettings(pt::ptree) {}

void PlayerMods::DrawMenu() {
	if (PlayerMods::isEnabled()) {
		ImGui::Begin("Player Mods", &p_open, ImVec2(700, 242), 0.75f);

		ImGui::Combo("Players", &playerSelectedIndex, players, IM_ARRAYSIZE(players));
		ImGui::SameLine();
		if (ImGui::Button("Refresh")) {
			refreshPlayers = true;
		}


		// Hide options that bots don't support when selected.
		if (!isBotSelected) {
			ImGui::Checkbox("Match Admin", &isAdmin);
			ImGui::SameLine();
			ImGui::Checkbox("Developer", &isDeveloper);
		}

		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "NOTE: Not sure what some of these do...");

		ImGui::Checkbox("GodMode", &godMode);

		if (ImGui::Button("Update Player")) {
			updatePlayer = true;
		}

		if (isBotSelected) {

			if (ImGui::Button("Disable Bot")) {
				doNothing = true;
			}
			ImGui::SameLine();

		}
		ImGui::SameLine();
		if (ImGui::Button("Demolish")) {
			demolishPlayer = true;
		}
		ImGui::SameLine();
		if (ImGui::Button("Trigger Explosion")) {
			triggerGoalExplosion = true;
		}
		ImGui::SameLine();
		if (ImGui::Button("Kick")) {
			kickPlayer = true;
		}
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("Sets off a goal explosion underneath the player.");

		ImGui::Separator();

		ImGui::Columns(6, "mycolumns"); // 4-ways, with border
		ImGui::InputInt("Score", &playerScore, 1, 5); ImGui::NextColumn();
		ImGui::InputInt("Goals", &playerGoals, 1, 5); ImGui::NextColumn();
		ImGui::InputInt("Assists", &playerAssists, 1, 5); ImGui::NextColumn();
		ImGui::InputInt("Saves", &playerSaves, 1, 5); ImGui::NextColumn();
		ImGui::InputInt("Shots", &playerShots, 1, 5); ImGui::NextColumn();
		ImGui::InputInt("Ping", &playerPing, 1, 5); ImGui::NextColumn();
		ImGui::Columns(1);


		ImGui::Separator();
		
		ImGui::Text(statusText.c_str());

		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}
		ImGui::End();
	}
}

void PlayerMods::onPlayerTick(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (localGameEvent && localGameEvent->ReplicatedStateName.GetName().compare("ReplayPlayback") != 0 && localGameEvent->ReplicatedStateName.GetName().compare("Finished") != 0) {
		TArray< class AController* > gameEventPlayers = localGameEvent->Players;


		if (refreshPlayers || currPlayerCount != gameEventPlayers.Num()) {
			populatePlayerList(localGameEvent);
			refreshPlayers = false;
		}
		for (int i = 0; i < gameEventPlayers.Num(); i++) {

			if (playerSelectedIndex == 0 || i == playerSelectedIndex - 1) {

				AController* tempController = gameEventPlayers.GetByIndex(i);

				if (updatePlayer && tempController) {

					// Check if bot or person
					if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
						AAIController_TA* currController = (AAIController_TA*)tempController;
						currController->bGodMode = godMode;
						if (currController->Car) {
							currController->Car->PRI->SetMatchAdmin(isAdmin);
							currController->Car->PRI->bDeveloper = isDeveloper;
							currController->bGodMode = godMode;
							currController->Car->PRI->MatchScore = playerScore;
							currController->Car->PRI->MatchShots = playerShots;
							currController->Car->PRI->MatchAssists = playerAssists;
							currController->Car->PRI->MatchGoals = playerGoals;
							currController->Car->PRI->MatchSaves = playerSaves;
							currController->Car->PRI->Ping = playerPing;
						}


					}
					else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
						APlayerController_TA* currController = (APlayerController_TA*)tempController;

						currController->PRI->SetMatchAdmin(isAdmin);
						currController->PRI->bDeveloper = isDeveloper;
						currController->bGodMode = godMode;
						currController->PRI->MatchScore = playerScore;
						currController->PRI->MatchShots = playerShots;
						currController->PRI->MatchAssists = playerAssists;
						currController->PRI->MatchGoals = playerGoals;
						currController->PRI->MatchSaves = playerSaves;
						currController->PRI->Ping = playerPing;
						//currController->PRI->MatchGoals = -100;
					}

				}
				else if (tempController) {
					// Check if bot or person
					if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
						AAIController_TA* currController = (AAIController_TA*)tempController;
						
						if (demolishPlayer && currController->Car != NULL) {
							currController->Car->Demolish(currController->Car);
						}
						if (doNothing) {
							currController->DoNothing();
						}


						// For bots use host as demoer
						if (triggerGoalExplosion && currController->Car != NULL) {
							localGameEvent->GameBalls.GetByIndex(0)->Explode(localGameEvent->Pylon->Goals.GetByIndex(0), currController->Car->Location, InstanceStorage::PlayerController()->PRI);
						}
					}
					else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
						APlayerController_TA* currController = (APlayerController_TA*)tempController;

						if (demolishPlayer && currController->Car != NULL) {
							currController->Car->Demolish(currController->Car);
						}
						if (triggerGoalExplosion && currController->Car != NULL) {
							localGameEvent->GameBalls.GetByIndex(0)->Explode(localGameEvent->Pylon->Goals.GetByIndex(0), currController->Car->Location, currController->PRI);
						}
						if (kickPlayer) {
							if (InstanceStorage::GameInfo()) {

								//InstanceStorage::GameInfo()->InitGame(FString(L"InverseGravity"), &error);
								InstanceStorage::GameInfo()->ForceKickPlayer(currController, FString(L"I don't like you"));

							}
						}
						
					}
				}
			}

		}
		

		// Reset options markers if valid player selected
		if (updatePlayer && playerSelectedIndex < gameEventPlayers.Num() + 1) {
			statusText = "Settings Updated.";
			updatePlayer = false;
		}
		if (demolishPlayer && playerSelectedIndex < gameEventPlayers.Num() + 1) {
			statusText = players[playerSelectedIndex];
			statusText.append(" Demolished.");
			demolishPlayer = false;
		}
		if (doNothing && playerSelectedIndex < gameEventPlayers.Num() + 1) {
			statusText = players[playerSelectedIndex];
			statusText.append(" Disabled.");
			doNothing = false;
		}
		if (triggerGoalExplosion && playerSelectedIndex < gameEventPlayers.Num() + 1) {
			statusText = players[playerSelectedIndex];
			statusText.append(" got the boomed.");
			triggerGoalExplosion = false;
		}
		if (kickPlayer && playerSelectedIndex < gameEventPlayers.Num() + 1) {
			statusText = players[playerSelectedIndex];
			statusText.append(" was kicked.");
			kickPlayer = false;
		}
		
		// Populate checkboxes based on selected user
		if (playerSelectedIndex != 0 && oldPlayerSelectedIndex != playerSelectedIndex) {
			statusText = "";

			oldPlayerSelectedIndex = playerSelectedIndex;
			// Check if bot or person
			if (playerSelectedIndex < gameEventPlayers.Num()+1) {

				AController* tempController = gameEventPlayers.GetByIndex(playerSelectedIndex-1);
				if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
					AAIController_TA* currController = (AAIController_TA*)tempController;
					if (currController->Car) {
						isBotSelected = true;
						isAdmin = currController->Car->PRI->bMatchAdmin;
						isDeveloper = currController->Car->PRI->bDeveloper;
						godMode = currController->bGodMode;
						playerScore = currController->Car->PRI->MatchScore;
						playerShots = currController->Car->PRI->MatchShots;
						playerAssists = currController->Car->PRI->MatchAssists;
						playerGoals = currController->Car->PRI->MatchGoals;
						playerSaves = currController->Car->PRI->MatchSaves;
						playerPing = currController->Car->PRI->Ping;
					}


				}
				else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
					isBotSelected = false;
					APlayerController_TA* currController = (APlayerController_TA*)tempController;
					isAdmin = currController->PRI->bMatchAdmin;
					isDeveloper = currController->PRI->bDeveloper;
					godMode = currController->bGodMode;

					playerScore = currController->PRI->MatchScore;
					playerShots = currController->PRI->MatchShots;
					playerAssists = currController->PRI->MatchAssists;
					playerGoals = currController->PRI->MatchGoals;
					playerSaves = currController->PRI->MatchSaves;
					playerPing = currController->PRI->Ping;




				}
			}
		}
		else if (playerSelectedIndex == 0 && oldPlayerSelectedIndex != playerSelectedIndex) {
			statusText = "";

			oldPlayerSelectedIndex = playerSelectedIndex;
			isBotSelected = false;

			isAdmin = false;


		}

	}

}

void PlayerMods::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent) {
	// Populate player list
	std::fill_n(players, 11, "\0");
	players[0] = "All\0";

	if (localGameEvent) {
		TArray< class AController* > eventPlayers = localGameEvent->Players;
		for (int i = 0; i < eventPlayers.Num(); i++) {
			std::string playerName = eventPlayers.GetByIndex(i)->PlayerReplicationInfo->PlayerName.ToString();

			AController* tempController = eventPlayers.GetByIndex(i);
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
			std::cout << "Player: " << playerName << std::endl;
			//_bstr_t b(eventPlayers.GetByIndex(i)->PlayerReplicationInfo->PlayerName.ToString().data());
			players[i + 1] = cptr;
		}
		currPlayerCount = eventPlayers.Num();
	}
}

void PlayerMods::onCarSpawned(Event* e) {
	//std::cout << "Spawned a car!" << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
}

void PlayerMods::onGameEventRemovePlayer(Event* e) {
	//std::cout << "Removed Player: " << ((APRI_TA*)e->getCallingObject())->PlayerName.ToString() << std::endl;
	// If player is not null
	APRI_TA* leavingPRI = (APRI_TA*)e->getCallingObject();
	if (leavingPRI) {
		leavingPRI->bAdmin = false;
	}
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
}

void PlayerMods::onGameEventAddPlayer(Event* e) {
	//std::cout << "Removed Player: " << ((APRI_TA*)e->getCallingObject())->PlayerName.ToString() << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
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