#include "BallMods.h"
#include "../Utils/Utils.h"
#include "../Interfaces/Interfaces.h"

//
// Need to fix removing balls via the plus and minsus (crashes atm) 
//

/*
	Adding balls
	Adjusting each balls scale
	Freezing / exploding each ball
*/

BallMods::BallMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
BallMods::BallMods(std::string name, int key) : ModBase(name, key) {}

void BallMods::DrawMenu() {
	if (BallMods::isEnabled()) {

		// Game Event Controls
		ImGui::Begin("Ball Mods", &p_open, ImVec2(400, 300), 0.75f);
		if (ImGui::Button("Close")) {
			Interfaces::GUI().isGUIOpen = false;
			this->enabled = false;
		}
		ImGui::InputInt("# Balls", &numGameBalls);

		for (int i = 0; i < numGameBalls; i++) {
			std::string ballScaleLabel = "Ball " + std::to_string(i + 1) + " Scale";
			ImGui::SliderFloat(ballScaleLabel.c_str(), &balls[i], 0.1f, 20.0f, "%.1f");
		}

		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}

		ImGui::End();
	}
}

void BallMods::onEnable() {
	std::fill_n(balls, 100, 1.0);
	std::fill_n(currentScales, 100, 1.0);
}
void BallMods::onDisable() {
	numGameBalls = 1;
	std::fill_n(balls, 100, 1.0);
	std::fill_n(currentScales, 100, 1.0);
}

void BallMods::onPlayerTick(Event* e) {
	// Game Event Ball modifiers
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	// Get game balls
	if (localGameEvent)
	{
		SDK::TArray< class SDK::ABall_TA* > gameBalls = localGameEvent->GameBalls;
		if (gameBalls.Num() != numGameBalls) {
			localGameEvent->SetTotalGameBalls(numGameBalls);
			localGameEvent->ResetBalls();
			std::fill_n(currentScales, 100, 1.0);
			for (int i = 0; i < numGameBalls; i++) {
				if (!Utils::FloatCompare(balls[i], currentScales[i])) {
					currentScales[i] = balls[i];
					if (gameBalls.IsValidIndex(i)) {
						gameBalls[i]->SetBallScale(balls[i]);
					}
				}
			}
		}
	}
		


}