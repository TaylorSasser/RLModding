#include "FreezeTag.h"
#include <comdef.h>
#include <iostream>

FreezeTag::FreezeTag(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}

FreezeTag::~FreezeTag() {}

void FreezeTag::onMenuOpen() {

}

void FreezeTag::onMenuClose() {

}

void FreezeTag::ExportSettings(pt::ptree & root) {
	//root.put("Drain_Interval", interval);
}
void FreezeTag::ImportSettings(pt::ptree & root) {
	//interval = root.get<float>("Drain_Interval", 0.6);
}

void FreezeTag::DrawMenu() {
	ImGui::Begin("Freeze Tag Settings", &p_open, ImVec2(400, 300), 0.75f);

	ImGui::Checkbox("Respawn once tagged.", &respawnWhenTagged);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("If disabled the players will not respawn once tagged.");
	ImGui::Checkbox("Freeze cars once tagged.", &respawnWhenTagged);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("If enabled cars will be frozen instead of demolished when tagged.");



	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled FreezeTag");
				srand(time(NULL));
			}

			else {
				printf("Invalid state for FreezeTag\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled FreezeTag");
			bStarted = false;
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void FreezeTag::OnRoundStart(Event* e) {
	if (bStarted && !bSetWhosIt) {
		AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(InstanceStorage::GameEvent());
		if (localGameEvent) {
			TArray< class ATeam_TA* > gameTeams = localGameEvent->Teams;
			if (localGameEvent->Teams.IsValidIndex(0)) {
				int team_idx = rand() % gameTeams.Num();
				std::cout << gameTeams.Num() << std::endl;
				if (gameTeams.IsValidIndex(team_idx)) {
					int player_idx = rand() % gameTeams[team_idx]->Members.Num();
					TArray<class APRI_TA*> players = gameTeams[team_idx]->Members;
					if (players.IsValidIndex(player_idx)) {
						_IT = gameTeams[team_idx]->Members[player_idx]->Car;
						_IT->SetMaxLinearSpeed(_IT->MaxLinearSpeed * 2); // Can go twice as fast
						Utils::BroadcastMessage(localGameEvent, _IT->PlayerReplicationInfo->PlayerName.ToString() + " is IT!");
						bSetWhosIt = true;
					}
				}
			}
		}
	}
}

void FreezeTag::onPlayerTick(Event* event) {
	if (bStarted) {
	}
}

void FreezeTag::onCarSpawned(Event* e) {

}

void FreezeTag::onCarDemolished(Event* e) {
	if (bStarted) {

	}
}

void FreezeTag::OnCarBumped(Event* e) {
	if (bStarted) {
		ACar_TA *Car = reinterpret_cast<SDK::ACar_TA*>(e->getParams<ACar_TA_EventBumpedCar_Params>()->Car);
		ACar_TA *HitCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<ACar_TA_EventBumpedCar_Params>()->HitCar);
		printf("HitCar: 0x%x\n", HitCar);
		printf("_IT: 0x%x\n", _IT);
		printf("_IT - HitCar: 0x%x\n", _IT - HitCar);
		// cant compare cars, _IT == HitCar doesnt work
		if (Car != nullptr && HitCar != nullptr && HitCar == _IT) {
			std::cout << "Hit!\n";
			Car->bPodiumMode = !Car->bPodiumMode;
			Car->bPodiumMode ? numTagged++ : numTagged--;
		}
		AGameEvent_Soccar_TA* localGameEvent = reinterpret_cast<AGameEvent_Soccar_TA*>(InstanceStorage::GameEvent());
		if (localGameEvent) {
			int total = 0;
			if (localGameEvent->Teams.IsValidIndex(0)) {
				total += localGameEvent->Teams[0]->Members.Num() - 1;
			}
			if (localGameEvent->Teams.IsValidIndex(1)) {
				total += localGameEvent->Teams[1]->Members.Num() - 1;
			}
			if (numTagged == total - 1) {
				//Win!
				Utils::BroadcastMessage(localGameEvent, _IT->PlayerReplicationInfo->PlayerName.ToString() + " Wins!");
				localGameEvent->StartNewRound();
				bSetWhosIt = false;

			}
		}
		
		
	}
}