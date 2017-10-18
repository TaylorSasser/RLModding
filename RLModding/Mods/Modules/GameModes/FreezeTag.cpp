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

void FreezeTag::onPlayerTick(Event* event) {
	if (bStarted) {

	}
}

void FreezeTag::onCarSpawned(Event* e) {
	if (bStarted) {

	}
}

void FreezeTag::onCarDemolished(Event* e) {
	if (bStarted) {

	}
}