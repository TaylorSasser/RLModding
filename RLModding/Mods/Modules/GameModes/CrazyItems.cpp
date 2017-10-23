#include "CrazyItems.h"
#include "../Utils/Utils.h"
#include <comdef.h> // for wchar to char conversion
#include <ctime>
#include "../Interfaces/Interfaces.h"
#include "../Lan/RumbleMods.h"

CrazyItems::CrazyItems(std::string name, int key, Category category, GameState gamestate, std::string toolTip) : ModBase(name, key, category, gamestate, toolTip) {}
CrazyItems::CrazyItems(std::string name, int key) : ModBase(name, key) {}

void CrazyItems::ExportSettings(pt::ptree) {}
void CrazyItems::ImportSettings(pt::ptree) {}

void CrazyItems::DrawMenu() {
	ImGui::Begin("Crazy Items Settings", &p_open, ImVec2(511, 92), 0.75f);
	ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 1.0f), "Individual rumble item settings can be set in the rumble mods window.");

	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled Crazy Items");
				((RumbleMods*)Interfaces::Mods().getModInstance("Rumble Mods"))->enabled = true;
				((RumbleMods*)Interfaces::Mods().getModInstance("Rumble Mods"))->setCrazyRumbleValues();
				((RumbleMods*)Interfaces::Mods().getModInstance("Rumble Mods"))->setModEnabled(true);
			}

			else {
				printf("Invalid state for Crazy Items\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled Crazy Items");
			bStarted = false;
			((RumbleMods*)Interfaces::Mods().getModInstance("Rumble Mods"))->resetRumbleValues();
		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();

}

void CrazyItems::onMenuOpen() {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
	}

}
void CrazyItems::onMenuClose() {

	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
	}
	else {
		std::cout << "No game event found...no cleanup done..." << std::endl;
	}
}

void CrazyItems::onPlayerTick(Event* e) {

}
