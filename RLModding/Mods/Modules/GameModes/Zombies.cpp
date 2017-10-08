#include "Zombies.h"

Zombies::Zombies(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
Zombies::Zombies(std::string name, int key) : ModBase(name, key) {}

void Zombies::onMenuOpen() {
	
	if (!InstanceStorage::GameEvent()) {
		printf("Could not start Zombies Module \n");
		return;
	}
	printf("Enabled zombie mode");

	/*
	if (InstanceStorage::GameEvent()->AIManager->Bots.Num() != 0) {
		for (auto i = 0u; i < InstanceStorage::GameEvent()->AIManager->Bots.Num(); i++) {
			InstanceStorage::GameEvent()->AIManager->RemoveBot(InstanceStorage::GameEvent()->AIManager->Bots[i]);
			printf("Removed Bot %d \n",i);
		}
	}
	*/

	
}
void Zombies::onMenuClose() {
	/*
	if (InstanceStorage::GameEvent()->AIManager == nullptr || InstanceStorage::GameEvent() == nullptr || InstanceStorage::CurrentCar() == nullptr) {
		printf("Could not Cleanup Zombies Module \n");
	}
	if (Zombies[0] != nullptr ) {
		for (auto i = 0u; i < InstanceStorage::GameEvent()->AIManager->Bots.Num(); i++) {
			InstanceStorage::GameEvent()->AIManager->RemoveBot(InstanceStorage::GameEvent()->AIManager->Bots[i]);
		}
	}
	*/
}

void Zombies::onPlayerTick(Event* e) {
	AGameEvent_Soccar_TA* localGameEvent = ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent());
	if (!isInit) {
		localGameEvent->SetUnfairTeams(true);
		localGameEvent->SetMaxTeamSize(30);
		localGameEvent->UpdateMaxTeamSize();

		for (int i = 0; i < 8; i++) {
			SDK::AAIController_TA* zombie = localGameEvent->SpawnBot();
			zombie->Traits.Aggression = EAITraitValue::AITraitValue_High;
			zombie->Traits.Airplay = EAITraitValue::AITraitValue_High;
			zombie->Traits.Hostility = EAITraitValue::AITraitValue_High;

			zombie->BT->bPrintStatusLogs = true;

			printf("Spawned Zombie %d \n", i + 1);
			localGameEvent->AIManager->AddBot(zombie);
			zombies[i] = zombie;
		}
		isInit = true;
	}

	else {
		for (auto i = 0u; i < localGameEvent->AIManager->Bots.Num(); i++) {
			auto Car = InstanceStorage::PlayerController()->Car;
			if(Car != NULL)
				localGameEvent->AIManager->Bots.GetByIndex(i)->DebugDriveTo(Car->Location);
		}
	}

	// On player demoed, remove from respawn list
	if (InstanceStorage::PlayerController()->Car == NULL) {
		localGameEvent->RemovePlayerFromRespawnList(InstanceStorage::PlayerController());
	}
	
}

