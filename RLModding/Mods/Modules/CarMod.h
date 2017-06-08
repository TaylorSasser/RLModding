#pragma once
#include "../ModBase.h"

/*
	CarMod.h / .cpp is for all mods related to your car
*/

class CarMod : public ModBase {
	public:
		CarMod();
		~CarMod();
		void CarTick(SDK::UObject**, SDK::UFunction*, void*);
		void OnJump(SDK::UObject**, SDK::UFunction*, void*);
		void FreeplayTick(SDK::UObject**, SDK::UFunction*, void*);
		void GameEventTick(SDK::UObject**, SDK::UFunction*, void*);
		void MainMenuTick(SDK::UObject**, SDK::UFunction*, void*);
	private:
		void readSettingsFile();
		bool enabled = false;
		bool bUnlJumps = false, bStickyCeiling = false, bFreeplay = false;

		float carScale, jumpTimeout, carTorque, carMaxSpeed;
}; 