#include "ZombieGameMode.h"
#include "../Interfaces/InstanceStorage.h"


ZombieGameMode::ZombieGameMode(std::string name, int key) : ModBase(name, key) {}

void ZombieGameMode::onEnable() {
	if (InstanceStorage::GameEvent() == nullptr || InstanceStorage::MenuController() != nullptr) return;
	//Clear bots
	printf("Game Event Found \n");
	if (InstanceStorage::GameEvent()->AIManager->Bots.Num() != 0) {
		for (auto i = 0u; i < InstanceStorage::GameEvent()->AIManager->Bots.Num(); i++) {
			InstanceStorage::GameEvent()->AIManager->RemoveBot(InstanceStorage::GameEvent()->AIManager->Bots[i]);
		}
	}
	//Add in bots
	if (Zombies.Num() == 0 && Zombies[0] == nullptr) {
		for (int i = 0; i < NumZombies; i++) {
			SDK::AAIController_TA* zombie = InstanceStorage::GameEvent()->SpawnBot();
			if (zombie != nullptr) 
				Zombies[i] = zombie;
		}
	}
}
void ZombieGameMode::onDisable() {
	if (InstanceStorage::GameEvent()->AIManager->Bots.Num() != 0) {
		for (auto i = 0u; i < InstanceStorage::GameEvent()->AIManager->Bots.Num(); i++) {
			InstanceStorage::GameEvent()->AIManager->RemoveBot(InstanceStorage::GameEvent()->AIManager->Bots[i]);
		}
	}
}

void ZombieGameMode::onPlayerTick(Event* e) {
	for (auto i = 0u; i < Zombies.Num(); i++) {
		auto Car = InstanceStorage::CurrentCar();
		Zombies[i]->DebugDriveTo(Car->Location);
	}
}

