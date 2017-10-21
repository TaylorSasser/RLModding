#include "HUDMods.h"

HUDMods::HUDMods(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}
HUDMods::~HUDMods() {}

void HUDMods::DrawMenu() {
	if (HUDMods::isEnabled()) {
		{
			ImGui::SetNextWindowPos(ImVec2(420, 420), ImGuiSetCond_FirstUseEver);

			ImGui::Begin("HUD Settings", &p_open);

			if (!p_open) {
				this->enabled = false;
				p_open = true;
			}
			ImGui::End();

		}

	}
}

void HUDMods::onMenuOpen() {
	std::cout << "HUD Mods Enabled" << std::endl;

}

void HUDMods::onMainMenuTick(Event* e) {

	AGFxHUD_TA* hud = reinterpret_cast<SDK::AGFxHUD_TA*>(Utils::GetInstanceOf(AGFxHUD_TA::StaticClass()));

	if (hud) {
		UGFxData_Chat_TA* chatData = hud->ChatData;
		std::cout << hud->PartyChatTitle.ToString() << std::endl;
	}
}

void HUDMods::onMenuClose() {
	std::cout << "HUD Disabled" << std::endl;

}