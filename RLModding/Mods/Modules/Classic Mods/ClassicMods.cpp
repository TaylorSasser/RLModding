#include "ClassicMods.h"
#include "../Interfaces/Interfaces.h"

ClassicMods::ClassicMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category,gamestate) {}
ClassicMods::~ClassicMods() {}

void ClassicMods::reset() {
	jumpTimeout = 1.5;
	torqueRate = 5.5;
	maxCarSpeed = 2300.0;
	groundSticky = 1.0;
	wallSticky = 1.0;
}

void ClassicMods::onEnable() {
	printf("Classic Mods Enabled\n");
}

void ClassicMods::onDisable() {
	reset();
	printf("Classic Mods Disabled\n");
}

void ClassicMods::DrawMenu() {
	ImGui::Begin("Classic Mods", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::InputFloat("Jump Timeout", &jumpTimeout, 0.5f, 1.0f, 1);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("The amount of time till you lose your second dodge");
	ImGui::InputFloat("Torque Rate", &torqueRate, 0.5f, 1.0f, 1);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("How fast your car flips. For example doubling the default 5.5 will make your car flip ~2 times with one dodge");
	ImGui::InputFloat("Max Car Velocity", &maxCarSpeed, 1000.0f, 10000.0f, 1);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("The max velocity of your car");
	ImGui::InputFloat("Ground Sticky Force", &groundSticky, 0.5f, 1.0f, 1);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("The amount of sticky force applied when you're on the ground");
	ImGui::InputFloat("Wall Sticky Force", &wallSticky, 0.5f, 1.0f, 1);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("The amount of sticky force applied when you're on the wall");
	if (ImGui::Button("Apply")) {
		apply = true;
	}
	ImGui::Checkbox("Unlimited Jumps", &bUnlimitedJumps);
	ImGui::SameLine();
	if (ImGui::Button("Reset")) {
		reset();
	}
	ImGui::SameLine();
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}
	ImGui::End();
}

void ClassicMods::onPlayerTick(Event* event) {
	
}

void ClassicMods::onCarTick(Event* event) {
	if (apply) {
		if (InstanceStorage::CurrentCar()) {
			if (ModBase::STATIC_getCurrentGameState() & GameState::TRAINING) {
				ACar_Freeplay_TA* freeplayCar = reinterpret_cast<SDK::ACar_Freeplay_TA*>(InstanceStorage::CurrentCar());
				freeplayCar->MaxTimeForDodge = jumpTimeout;
				freeplayCar->MaxAngularSpeed = torqueRate;
				freeplayCar->MaxLinearSpeed = maxCarSpeed;
				freeplayCar->StickyForceGround = groundSticky;
				freeplayCar->StickyForceWall = wallSticky;
			}
			else {
				InstanceStorage::CurrentCar()->MaxTimeForDodge = jumpTimeout;
				InstanceStorage::CurrentCar()->MaxAngularSpeed = torqueRate;
				InstanceStorage::CurrentCar()->MaxLinearSpeed = maxCarSpeed;
				InstanceStorage::CurrentCar()->StickyForceGround = groundSticky;
				InstanceStorage::CurrentCar()->StickyForceWall = wallSticky;
			}
			apply = false;
		}
		
	}
	else {
		ACar_TA* car = InstanceStorage::PlayerController()->Car;
		if (car) {
			reset();
			if (ModBase::STATIC_getCurrentGameState() & GameState::TRAINING) {
				ACar_Freeplay_TA* freeplayCar = reinterpret_cast<SDK::ACar_Freeplay_TA*>(car);
				freeplayCar->MaxTimeForDodge = jumpTimeout;
				freeplayCar->MaxAngularSpeed = torqueRate;
				freeplayCar->MaxLinearSpeed = maxCarSpeed;
				freeplayCar->StickyForceGround = groundSticky;
				freeplayCar->StickyForceWall = wallSticky;
			}
			else {
				car->MaxTimeForDodge = jumpTimeout;
				car->MaxAngularSpeed = torqueRate;
				car->MaxLinearSpeed = maxCarSpeed;
				car->StickyForceGround = groundSticky;
				car->StickyForceWall = wallSticky;
			}
			apply = false;
		}
	}
}

void ClassicMods::onActorJump(Event*e) {
	if (bUnlimitedJumps) {
		if (e->getCallingObject() != nullptr) {
			((SDK::ACar_TA*)e->getCallingObject())->bDoubleJumped = 0;
			((SDK::ACar_TA*)e->getCallingObject())->bJumped = 0;
		}
	}
	
}