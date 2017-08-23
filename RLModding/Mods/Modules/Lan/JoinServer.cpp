#include "JoinServer.h"
#include <iostream>
#include "../Utils/Utils.h"

JoinServer::JoinServer(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
JoinServer::~JoinServer(){}

void JoinServer::onEnable() {
	/*std::cout << "Getting Security Key Info...\n";
	URPC_GenerateKeys_X* RPC;
	RPC->Key = L"JhtbJ4M43lRIyQSA6xYuYelB0bEQl+n6hRsDcQmj0pk=";
	RPC->IV = L"HKNBpu215LCUGiDTs1XwCA==";
	RPC->HMACKey = L"J8mUXRphocYppAyEX/mKB07FgbBD6RaF+CwNBXA5JBI=";
	RPC->SessionId = L"Hifv0CpmgG6QwFKRHovTLw==";

	UOnlineGameJoinGame_X* join = reinterpret_cast<UOnlineGameJoinGame_X*>(Utils::GetInstanceOf(UOnlineGameJoinGame_X::StaticClass()));
	join->STATIC_DynamicLoadObject(L"join", UOnlineGameJoinGame_X::StaticClass(), 0);
	if (join) {
		join->GenerateKeysRPCs.Add(RPC);
		std::cout << "Added Keys to Array!\n";
	}

	FNetworkEncryptionKey KeyInfo;
	KeyInfo.EncryptionKey = reinterpret_cast<UOnlineSubsystem*>(UOnlineSubsystem::StaticClass())->STATIC_DecodeBase64(RPC->Key);
	KeyInfo.InitializationVector = reinterpret_cast<UOnlineSubsystem*>(UOnlineSubsystem::StaticClass())->STATIC_DecodeBase64(RPC->IV);
	KeyInfo.HMACKey = reinterpret_cast<UOnlineSubsystem*>(UOnlineSubsystem::StaticClass())->STATIC_DecodeBase64(RPC->HMACKey);
	KeyInfo.SessionIdentifier = reinterpret_cast<UOnlineSubsystem*>(UOnlineSubsystem::StaticClass())->STATIC_DecodeBase64(RPC->SessionId);
	if (InstanceStorage::Engine()) {
		InstanceStorage::Engine()->SetNetworkSecurityKey(KeyInfo);
		std::cout << "Set Security Key Info!\n";
	}*/

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
			std::string command(ip);
			std::string temp = "open " + command;
			std::cout << "Traveling to: " << temp << std::endl;
			InstanceStorage::MenuController()->ConsoleCommand(Utils::to_fstring(temp), 1);
		}
	}
}

