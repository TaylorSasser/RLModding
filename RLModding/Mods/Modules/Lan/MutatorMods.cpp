#include "MutatorMods.h"
#include <comdef.h>
#include <iostream>

MutatorMods::MutatorMods(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

MutatorMods::~MutatorMods() {}

void MutatorMods::onEnable() {
}

void MutatorMods::onDisable() {
}

void MutatorMods::ExportSettings() {}
void MutatorMods::ImportSettings() {}

void MutatorMods::DrawMenu() {
	ImGui::Begin("Mutator Settings", &p_open, ImVec2(400, 300), 0.75f);

	if (itemsMutatorsPresent) {
		ImGui::Separator();

	}
	if (respawnTimeMutatorsPresent) {
		ImGui::Separator();

	}
	if (matchMutatorsPresent) {
		ImGui::Separator();

	}
	if (handicapMutatorsPresent) {
		ImGui::Separator();

	}
	if (gravityMutatorsPresent) {
		ImGui::Separator();

	}
	if (gameSpeedMutatorsPresent) {
		ImGui::Separator();

	}
	if (ballMutatorsPresent) {
		ImGui::Separator();

	}
	if (demolishMutatorsPresent) {
		ImGui::Separator();

	}
	if (carMutatorsPresent) {
		ImGui::Separator();

	}
	if (boostMutatorsPresent) {
		ImGui::Separator();

	}
	if (presetMutatorsPresent) {
		ImGui::Separator();

	}

	if (ImGui::Button("Toggle Car Collision")) {
		applyChanges = true;
	}


	ImGui::InputFloat("Decay Rate", &interval, 0.01f);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("The rate at which the boost will decay");
	ImGui::Separator();

	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void MutatorMods::onPlayerTick(Event* event) {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (localGameEvent) {
		srand(time(NULL));

		if (localGameEvent) {
			TArray< class UMutator_TA* > mutators = localGameEvent->Mutators;
			if (!applyChanges) {
				for (int i = 0; i < mutators.Num(); i++) {
					UMutator_TA* tempMutator = mutators.GetByIndex(i);
					if (tempMutator) {
						if (tempMutator->IsA(SDK::UMutator_ItemsMode_TA::StaticClass())) {
							std::cout << "Items Mutator | " << mutators.Num() << std::endl;
							itemsMutatorsPresent = true;
						}
						else if (tempMutator->IsA(SDK::UMutator_RespawnTime_TA::StaticClass())) {
							std::cout << "Respawn Time Mutator | " << mutators.Num() << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_Match_TA::StaticClass())) {
							std::cout << "Match Mutator | " << mutators.Num() << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_Handicap_TA::StaticClass())) {
							std::cout << "Handicap Mutator | " << mutators.Num() << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_Gravity_TA::StaticClass())) {
							UMutator_Gravity_TA* gravityMutator = (UMutator_Gravity_TA*)tempMutator;
							//gravityMutator->Gravity = -1;
							//gravityMutator->Init(localGameEvent);

							std::cout << "Gravity Mutator | " << gravityMutator->Gravity << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_GameSpeed_TA::StaticClass())) {
							UMutator_GameSpeed_TA* gameSpeedMutator = (UMutator_GameSpeed_TA*)tempMutator;
							//gameSpeedMutator->GameSpeed = .001;
							//gameSpeedMutator->Init(localGameEvent);
							std::cout << "Game Speed Mutator | " << gameSpeedMutator->GameSpeed << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_Demolish_TA::StaticClass())) {
							std::cout << "Demolish Mutator | " << mutators.Num() << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_Car_TA::StaticClass())) {
							std::cout << "Car Mutator | " << mutators.Num() << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_Booster_TA::StaticClass())) {
							std::cout << "Boost Mutator | " << mutators.Num() << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_Ball_TA::StaticClass())) {
							UMutator_Ball_TA* ballMutator = (UMutator_Ball_TA*)tempMutator;
							ballMutator->BallBounciness *= 200;
							ballMutator->BallCarBounciness *= 200;
							ballMutator->Init(localGameEvent);
							std::cout << "Ball Mutator | " << mutators.Num() << std::endl;
						}
						else if (tempMutator->IsA(SDK::UMutator_Preset_TA::StaticClass())) {
							std::cout << "Preset Mutator | " << mutators.Num() << std::endl;
						}
						else {
							std::cout << "Generic Mutator | " << mutators.Num() << std::endl;

						}
					}

				}

				mutatorCount = mutators.Num();

			}
		}
		if (applyChanges) {
			localGameEvent->InitMutators();
			applyChanges = false;
		}
	}
}

void MutatorMods::onCarSpawned(Event* e) {

}

void MutatorMods::onCarDemolished(Event* e) {
}