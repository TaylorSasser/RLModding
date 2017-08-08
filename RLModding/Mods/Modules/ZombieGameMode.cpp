#include "ZombieGameMode.h"
#include "../Interfaces/InstanceStorage.h"


ZombieGameMode::ZombieGameMode(std::string name, int key) : ModBase(name, key) {}

void ZombieGameMode::onEnable() {
	if (InstanceStorage::GameEvent()->AIManager == nullptr && InstanceStorage::GameEvent() == nullptr && InstanceStorage::CurrentCar() != nullptr) {
		//Console.printDebug("AI Manager not found");
		printf("Could not start Zombies Module \n");
	}

	if (InstanceStorage::GameEvent()->AIManager->Bots.Num() != 0) {
		for (auto i = 0u; i < InstanceStorage::GameEvent()->AIManager->Bots.Num(); i++) {
			InstanceStorage::GameEvent()->AIManager->RemoveBot(InstanceStorage::GameEvent()->AIManager->Bots[i]);
			printf("Removed Bot %d \n",i);
		}
	}
	for (int i = 0; i < 8; i++) {
		SDK::AAIController_TA* zombie = InstanceStorage::GameEvent()->SpawnBot();
		printf("Spawned Zombie %d \n",i);
		Zombies[i] = zombie;
	}
}
void ZombieGameMode::onDisable() {
	if (Zombies[0] != nullptr ) {
		for (auto i = 0u; i < InstanceStorage::GameEvent()->AIManager->Bots.Num(); i++) {
			InstanceStorage::GameEvent()->AIManager->RemoveBot(InstanceStorage::GameEvent()->AIManager->Bots[i]);
		}
	}
}

void ZombieGameMode::onPlayerTick(Event* e) {
	for (auto i = 0u; i < 8; i++) {
		auto Car = InstanceStorage::CurrentCar();
		Zombies[i]->DebugDriveTo(Car->Location);
	}
}

