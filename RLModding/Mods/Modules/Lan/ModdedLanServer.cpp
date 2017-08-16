#include "ModdedLanServer.h"

ModdedLanServer::ModdedLanServer(std::string name, int key, Category cat, GameState gamestate) : ModBase(name,key,cat,gamestate) {}

ModdedLanServer::~ModdedLanServer(){}

void ModdedLanServer::onEnable() {
}

void ModdedLanServer::onDisable() {
}

void ModdedLanServer::DrawMenu() {
	ImGui::Begin("LAN Options", 0, ImVec2(500, 300), 0.75f);
	ImGui::Combo("Map", &selectedMap, friendlyMapNames, IM_ARRAYSIZE(friendlyMapNames));
	if (ImGui::Button("Launch")) {
		mapName = maps[selectedMap].filename;
		Interfaces::GUI().isGUIOpen = false;
		//travel() for some reason this doesn't work?!?!?
		bTravel = true;
	}
	ImGui::SameLine();
	if (ImGui::Button("Close")) {
		this->enabled = false;
	}
	ImGui::End();
}

void ModdedLanServer::onMainMenuTick(Event* event) {
	if (bTravel) {
		Globals::inMainMenu = false; Globals::inOnline = false; Globals::inCustom = true; Globals::inExhibition = false; Globals::inTraining = false;
		travel();
		bTravel = false;
	}
}

void ModdedLanServer::travel() {
	if (!Interfaces::GUI().isGUIOpen) {
		LAN_Server = reinterpret_cast<SDK::UOnlineGameDedicatedServer_X*>(Utils::GetInstanceOf(UOnlineGameDedicatedServer_X::StaticClass()));
		if (LAN_Server) {
			std::string command = mapName + "?playtest?listen?Private?Game=TAGame.GameInfo_Soccar_TA?";
			printf("Command: %s\n", command);
			LAN_Server->TravelToMap(Utils::to_fstring(command));
			printf("State: %d\n", (int)ModBase::STATIC_getCurrentGameState());
		}
	}
}