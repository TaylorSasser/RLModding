#include "JoinServer.h"
#include <iostream>
#include "../Utils/Utils.h"

JoinServer::JoinServer(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
JoinServer::~JoinServer(){}

void JoinServer::onMenuOpen() {

}

void JoinServer::onMenuClose() {
}

void JoinServer::ExportSettings(pt::ptree) {}
void JoinServer::ImportSettings(pt::ptree) {}

void JoinServer::DrawMenu() {
	ImGui::Begin("Join", &p_open, ImVec2(291, 101), 0.75f);
	ImGui::InputText("Ip Address", ip, IM_ARRAYSIZE(ip));
	if (ImGui::Button("Join")) {
		printf("Attempting to join server...");
		Interfaces::GUI().isGUIOpen = false;
		bTravel = true;
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}
	ImGui::End();
}

void JoinServer::onMainMenuTick(Event* event) {
	if (bTravel) {
		travel();
		bTravel = false;
	}
}

void JoinServer::onGameEventTick(Event* event) {
	if (bTravel) {
		travel();
		bTravel = false;
	}
}

void JoinServer::travel() {
	if (!Interfaces::GUI().isGUIOpen) {
		LAN_Server = reinterpret_cast<UOnlineGameLanServer_X*>(Utils::GetInstanceOf(UOnlineGameLanServer_X::StaticClass()));
		if (LAN_Server) {
			std::string command(ip);
			std::string temp = "open " + command + "?Lan";
			std::cout << "Traveling to: " << temp << std::endl;
			InstanceStorage::MenuController()->ConsoleCommand(Utils::to_fstring(temp), 1);

			//UOnlineGameJoinGame_X* join = reinterpret_cast<UOnlineGameJoinGame_X*>(Utils::GetInstanceOf(UOnlineGameJoinGame_X::StaticClass()));
			//FJoinMatchSettings joinSettings;
			//join->StartJoin(L"25.82.10.172:7778", joinSettings);

		}
	}
}

