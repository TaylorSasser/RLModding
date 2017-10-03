#include "MutatorMods.h"
#include <comdef.h>
#include <iostream>

MutatorMods::MutatorMods(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

MutatorMods::~MutatorMods() {}

void MutatorMods::onEnable() {
}

void MutatorMods::onDisable() {
}

void MutatorMods::ExportSettings() {}
void MutatorMods::ImportSettings() {}

void MutatorMods::DrawMenu() {
	ImGui::Begin("Mutator Settings", &p_open, ImVec2(400, 300), 0.75f);

	ImGui::InputFloat("Decay Rate", &interval, 0.01f);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("The rate at which the boost will decay");
	ImGui::Separator();
	ImGui::Text("Players will be demoed when they run out of boost...good luck!");

	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled MutatorMods");
			}

			else {
				printf("Invalid state for MutatorMods\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled MutatorMods");
			bStarted = false;
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void MutatorMods::onPlayerTick(Event* event) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (localGameEvent) {
		srand(time(NULL));
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

		if (localGameEvent) {
			TArray< class UMutator_TA* > mutators = localGameEvent->Mutators;

			for (int i = 0; i < mutators.Num(); i++) {

			}
		}

	}
}

void MutatorMods::onCarSpawned(Event* e) {

}

void MutatorMods::onCarDemolished(Event* e) {
}