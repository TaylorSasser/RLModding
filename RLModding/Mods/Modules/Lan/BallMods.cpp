#include "BallMods.h"
#include "../Utils/Utils.h"
#include "../Interfaces/Interfaces.h"
#include "../GameModes/FiftyFifty.h"
#include <map>
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

void BallMods::ExportSettings(pt::ptree) {}
void BallMods::ImportSettings(pt::ptree) {}

void BallMods::resetBalls() {

	for (int i = 0; i < numGameBalls && i < MAXBALLS; i++) {
		BallSetting newBallSetting;
		newBallSetting.Scale = 1.0f;
		newBallSetting.isHidden = false;
		newBallSetting.predictOnGround = true;
		newBallSetting.touchCount = 0;
		gameBallSettings[i] = newBallSetting;
		prevGameBallSettings[i] = newBallSetting;
	}
}

void BallMods::DrawMenu() {
	if (BallMods::isEnabled()) {

		// Game Event Controls
		ImGui::Begin("Ball Mods", &p_open, ImVec2(439, 367), 0.75f);
		ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), "*Adding a ball will reset the scale for all balls.");
		if (((FiftyFifty*)Interfaces::Mods().getModInstance("50/50"))->enabled) {
			ImGui::TextColored(ImVec4(0.90f, 0.27f, 0.06f, 1.0f), "Warning: Enabling both 50/50 and ball mods will cause issues.");
		}
		ImGui::InputInt("# Balls", &numGameBalls);


		ImGui::Separator();

		for (int i = 0; i < numGameBalls && i < MAXBALLS; i++) {
			std::string ballScaleLabel = "Ball " + std::to_string(i + 1) + " Scale";
			ImGui::SliderFloat(ballScaleLabel.c_str(), &gameBallSettings[i].Scale, 0.1f, 20.0f, "%.1f");
			std::string ballHideLabel = "Hide Ball #" + std::to_string(i + 1);
			ImGui::Checkbox(ballHideLabel.c_str(), &gameBallSettings[i].isHidden); ImGui::SameLine();
			//std::string ballMarkerLabel = "Show Ground Marker for Ball #" + std::to_string(i + 1);
			//ImGui::Checkbox(ballMarkerLabel.c_str(), &gameBallSettings[i].predictOnGround);
			ImGui::SameLine();
			std::string ballTouchCountLabel = " | " + std::to_string(gameBallSettings[i].touchCount) + " touches";
			ImGui::Text(ballTouchCountLabel.c_str());
		}

		if (!p_open) {
			this->enabled = false;
			p_open = true;
		}

		ImGui::End();
	}
}

void BallMods::onMenuOpen() {
	resetBalls();
}
void BallMods::onMenuClose() {
	numGameBalls = 1;
	resetBalls();
}
bool ballReset = false;

void BallMods::onPlayerTick(Event* e) {
	// Game Event Ball modifiers
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	// Get game balls
	if (localGameEvent)
	{
		SDK::TArray< class SDK::ABall_TA* > gameBalls = localGameEvent->GameBalls;

		if (numGameBalls < 1) numGameBalls = 1;

		if (gameBalls.IsValidIndex(0)) {
			if (gameBalls.Num() != numGameBalls) {
				localGameEvent->SetTotalGameBalls(numGameBalls);
				localGameEvent->ResetBalls();
				resetBalls();
				std::cout << "Game balls != numGameBalls\n";
			}
			else {
				for (int i = 0; i < gameBalls.Num(); i++) {
					if (gameBalls.IsValidIndex(i) && gameBalls[i] && !gameBalls[i]->bDeleteMe) {
						if (!Utils::FloatCompare(gameBallSettings[i].Scale, prevGameBallSettings[i].Scale) || ballReset) {
							prevGameBallSettings[i].Scale = gameBallSettings[i].Scale;
							gameBalls[i]->SetBallScale(gameBallSettings[i].Scale);
							std::cout << "Changing ball Scale!\n";
						}
						if (prevGameBallSettings[i].isHidden != gameBallSettings[i].isHidden || ballReset) {
							prevGameBallSettings[i].isHidden = gameBallSettings[i].isHidden;
							gameBalls[i]->SetHidden(gameBallSettings[i].isHidden);
							std::cout << "Changing ball hidden!\n";

						}
						//if (gameBalls[i]->bPredictionOnGround != gameBallSettings[i].predictOnGround)
						//	gameBalls[i]->bPredictionOnGround = gameBallSettings[i].predictOnGround;

						// Update stats
						gameBallSettings[i].touchCount = gameBalls[i]->Touches.Num();
						std::cout << "Loops through balls i = " << i << std::endl;
					}
				}
			}
			ballReset = false;
		}
	}



}
void BallMods::onBallSpawned(Event* e) {
	std::cout << "Ball spawmed!" << std::endl;
	ballReset = true;
	/*
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	// Get game balls
	if (localGameEvent)
	{
		SDK::TArray< class SDK::ABall_TA* > gameBalls = localGameEvent->GameBalls;

		if (gameBalls.IsValidIndex(0)) {
			
			for (int i = 0; i < gameBalls.Num(); i++) {
				if (gameBalls.IsValidIndex(i) && gameBalls[i] && !gameBalls[i]->bDeleteMe) {
					prevGameBallSettings[i].Scale = gameBallSettings[i].Scale;
					gameBalls[i]->SetBallScale(gameBallSettings[i].Scale);
					
					prevGameBallSettings[i].isHidden = gameBallSettings[i].isHidden;
					gameBalls[i]->SetHidden(gameBallSettings[i].isHidden);

				}
			}
			
		}
	}
	*/
}

void BallMods::onBallTick(Event* e) {
	/*
	ABall_TA* currBall = (SDK::ABall_TA*)e->getCallingObject();
	if (ballSettingMap.find(currBall) != ballSettingMap.end()) {
	BallSetting* currSetting = ballSettingMap[currBall];
	std::cout << "Found ball in map" << ballSettingMap[currBall]->Scale << std::endl;
	if (!Utils::FloatCompare(currSetting->Scale, currBall->ReplicatedBallScale)) {
	currBall->SetBallScale(currSetting->Scale);
	}
	currBall->SetHidden(currSetting->isHidden);
	}
	*/

}

void BallMods::onEventGoalScored(Event* e) {


}