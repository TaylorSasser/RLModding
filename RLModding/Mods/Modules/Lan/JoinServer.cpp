#include "JoinServer.h"
#include <iostream>
#include "../Utils/Utils.h"

JoinServer::JoinServer(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
JoinServer::~JoinServer(){}

void JoinServer::onEnable() {

}

void JoinServer::onDisable() {
}

void JoinServer::DrawMenu() {
	ImGui::Begin("Join", 0, ImVec2(300, 200), 0.75f);
	ImGui::InputText("Ip Address", ip, IM_ARRAYSIZE(ip));
	if (ImGui::Button("Join")) {
		Interfaces::GUI().isGUIOpen = false;
		bTravel = true;
	}
	ImGui::SameLine();
	if (ImGui::Button("Close")) {
		this->enabled = false;
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
			//std::string command(ip);
			//std::string temp = "open " + command;
			//std::cout << "Traveling to: " << temp << std::endl;
			//InstanceStorage::MenuController()->ConsoleCommand(Utils::to_fstring(temp), 1);

			//UOnlineGameJoinGame_X* join = reinterpret_cast<UOnlineGameJoinGame_X*>(Utils::GetInstanceOf(UOnlineGameJoinGame_X::StaticClass()));
			//FJoinMatchSettings joinSettings;
			//join->StartJoin(L"25.82.10.172:7778", joinSettings);

		}
	}
}

