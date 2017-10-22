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
				if (gameTeams.IsValidIndex(team_idx)) {
					int player_idx = rand() % gameTeams[team_idx]->Members.Num();
					TArray<class APRI_TA*> players = gameTeams[team_idx]->Members;
					if (players.IsValidIndex(player_idx)) {
						_IT = gameTeams[team_idx]->Members[player_idx]->Car;
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
		// Not working, cant compare cars
		if (Car != nullptr && HitCar != nullptr && HitCar == _IT) {
			std::cout << "Hit!\n";
			Car->EnablePodiumMode();	
			numTagged++;
		}
		else {
			std::cout << "Nope!\n";
			if (Car->bPodiumMode)
				numTagged--;
			Car->bPodiumMode = false;
		}
		
	}
}