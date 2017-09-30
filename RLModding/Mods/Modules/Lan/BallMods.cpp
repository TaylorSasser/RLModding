#include "BallMods.h"
#include "../Utils/Utils.h"

//
// Need to fix removing balls via the plus and minsus (crashes atm) 
//

BallMods::BallMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
BallMods::BallMods(std::string name, int key) : ModBase(name, key) {}

void BallMods::DrawMenu() {
	if (BallMods::isEnabled()) {

		// Game Event Controls
		ImGui::Begin("Ball Mods", 0, ImVec2(400, 300), 0.75f);

		ImGui::InputInt("# Balls", &numGameBalls);

		for (int i = 0; i < numGameBalls; i++) {
			std::string ballScaleLabel = "Ball " + std::to_string(i + 1) + " Scale";

			ImGui::SliderFloat(ballScaleLabel.c_str(), &ballScale[i], 0.1f, 20.0f, "%.1f");

			if (ImGui::Button("Freeze")) {
				freezeBall[i] = true;
			}
			ImGui::SameLine();
			if (ImGui::Button("Explode")) {
				explodeBall[i] = true;
			}
		}
		ImGui::End();
	}
}

void BallMods::onEnable() {
	std::fill_n(ballScale, 100, 1.0);
	std::fill_n(currBallScale, 100, 1.0);
	std::fill_n(freezeBall, 100, false);

}
void BallMods::onDisable() {

}

void BallMods::onPlayerTick(Event* e) {
	// Game Event Ball modifiers
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	SDK::TArray< class SDK::ABall_TA* > gameBalls = localGameEvent->GameBalls;

	if (gameBalls.IsValidIndex(0)) {

		if (numGameBalls != gameBalls.Num()) {
			localGameEvent->SetTotalGameBalls(numGameBalls);
			localGameEvent->ResetBalls();
			std::fill_n(currBallScale, 100, 1.0);
		}

		for (int i = 0; i < numGameBalls; i++) {
			if (gameBalls.IsValidIndex(i) && gameBalls.GetByIndex(i) != NULL) {
				ABall_TA* currBall = gameBalls.GetByIndex(i);
				if (!Utils::FloatCompare(ballScale[i], currBallScale[i])) {
					currBall->SetBallScale(ballScale[i]);
					currBallScale[i] = ballScale[i];
				}
				if (freezeBall[i]) {
					currBall->bFrozen = true;
					freezeBall[i] = false;
				}
				if (explodeBall[i]) {
					currBall->DoExplode();
					explodeBall[i] = false;
				}
			} 
		}
		if (attachBallIndex != -1) {
			gameBalls.GetByIndex(0)->AttachToCar(InstanceStorage::PlayerController()->Car);
			attachBallIndex = -1;
		}
	}
}