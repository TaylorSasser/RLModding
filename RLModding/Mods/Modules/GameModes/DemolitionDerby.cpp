#include "DemolitionDerby.h"
#include <comdef.h>
#include <iostream>


DemolitionDerby::DemolitionDerby(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}

DemolitionDerby::~DemolitionDerby() {}

void DemolitionDerby::onMenuOpen() {

}

void DemolitionDerby::onMenuClose() {

}

void DemolitionDerby::loadMod() {
	// Disable Goals
	if (disableGoals) {
		for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
			SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
			if (CheckObject && CheckObject->IsA(AGoalVolume_TA::StaticClass())) {
				if (!strstr(CheckObject->GetFullName().c_str(), "Default")) {
					AGoalVolume_TA* goalVolume = reinterpret_cast<SDK::AGoalVolume_TA*>(CheckObject);
					if (goalVolume) {
						goalVolume->bPawnsOnly = true;
					}
				}
			}
		}
	}
	// Remove balls
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
		//localGameEvent->SetTotalGameBalls(0);
	}



}

void DemolitionDerby::unloadMod() {

}

void DemolitionDerby::ExportSettings(pt::ptree & root) {
	//root.put("Drain_Interval", interval);
}
void DemolitionDerby::ImportSettings(pt::ptree & root) {
	//interval = root.get<float>("Drain_Interval", 0.6);
}

void DemolitionDerby::DrawMenu() {
	ImGui::Begin("Demolition Derby Settings", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::TextWrapped("Every demo gives your team a point.");

	ImGui::Checkbox("Disable Goals", &disableGoals);

	if (bStarted) {
		ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "To change settings, disable and re-enable the gamemode");

	}

	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled Infected");
				loadMod();
			}

			else {
				printf("Invalid state for Infected\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled Infected");
			bStarted = false;
			unloadMod();
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void DemolitionDerby::onPlayerTick(Event* event) {
	if (bStarted) {

	}
}

void DemolitionDerby::onCarSpawned(Event* e) {

}

void DemolitionDerby::onCarDemolished(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	FDemolishData demoData = e->getParams<SDK::ACar_TA_OnDemolished_Params>()->Data;
	if (demoData.Attacker->IsA(ACar_TA::StaticClass())) {
		ACar_TA* carThatScored = (ACar_TA*)demoData.Attacker;
		if (localGameEvent && localGameEvent->Teams.IsValidIndex(carThatScored->GetTeamNum()) && localGameEvent->Teams[carThatScored->GetTeamNum()]) {
			localGameEvent->Teams[carThatScored->GetTeamNum()]->SetScore(localGameEvent->Teams[carThatScored->GetTeamNum()]->Score + 1);
		}
	}
}

