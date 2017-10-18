#include "Infected.h"
#include <comdef.h>
#include <iostream>


Infected::Infected(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}

Infected::~Infected() {}

void Infected::onMenuOpen() {

}

void Infected::onMenuClose() {

}

void Infected::ExportSettings(pt::ptree & root) {
	//root.put("Drain_Interval", interval);
}
void Infected::ImportSettings(pt::ptree & root) {
	//interval = root.get<float>("Drain_Interval", 0.6);
}

void Infected::DrawMenu() {
	ImGui::Begin("Freeze Tag Settings", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::TextWrapped("By default blue team is attacking.");


	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled FreezeTag");
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

void Infected::onPlayerTick(Event* event) {
	if (bStarted) {

	}
}

void Infected::onCarSpawned(Event* e) {

}

void Infected::onCarDemolished(Event* e) {
}