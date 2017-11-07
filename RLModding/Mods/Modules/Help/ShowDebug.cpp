#include "ShowDebug.h"
#include "../Utils/Utils.h"
#include "../DrawManager/DrawManager.hpp"
#include "../Libs/detours.h"
#include "../Interfaces/Interfaces.h"
#include "../Interfaces/InstanceStorage.h"

ShowDebug::ShowDebug(std::string name, int key, Category category, GameState gamestate, std::string toolTip) : ModBase(name, key, category, gamestate, toolTip) {}
ShowDebug::~ShowDebug() {}

void ShowDebug::onMenuOpen() {
	toggleCommand = true;
}

void ShowDebug::onPlayerTick(Event * e) {
	if (ShowDebug::isEnabled() && toggleCommand) {
		InstanceStorage::PlayerController()->ConsoleCommand(FString(L"ShowDebug"), true);
		//InstanceStorage::PlayerController()->ConsoleCommand(FString(L"set Pawn CollisionRadius 200"), true);
		//InstanceStorage::PlayerController()->STATIC_LogInternal(FString(L"Test log"), FName("Warning"), false);
		//InstanceStorage::PlayerController()->ServerSayInternal_TA(FString(L"Test log"), EChatChannel::EChatChannel_Match, false);
		toggleCommand = false;
	}
}

void ShowDebug::onMenuClose() {
	toggleCommand = false;
}

void ShowDebug::DrawMenu() {
	if (ShowDebug::isEnabled()) {
		
	}

}

void ShowDebug::onMainMenuTick(Event * e) {
	if (ShowDebug::isEnabled() && toggleCommand) {
		InstanceStorage::MenuController()->ConsoleCommand(FString(L"ShowDebug"), true);
		toggleCommand = false;
	}
}
