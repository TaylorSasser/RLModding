#include "PauseGame.h"



PauseGame::PauseGame(std::string name,int key) : ModBase(name,key) {}
PauseGame::~PauseGame() {}

void PauseGame::onEnable() {
	if (InstanceStorage::GameEvent() != nullptr) {
		isPaused = true;
		((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SetPaused(InstanceStorage::PlayerController(),isPaused);
	}
}

void PauseGame::onDisable() {
	if (InstanceStorage::GameEvent() != nullptr) {
		isPaused = false;
		((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SetPaused(InstanceStorage::PlayerController(),isPaused);
	}
}