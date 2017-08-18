#include "BallMods.h"
#include "../Utils/Utils.h"

//
// Need to fix removing balls via the plus and minsus (crashes atm) 
//

BallMods::BallMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
BallMods::BallMods(std::string name, int key) : ModBase(name, key) {}

float currBallScale[100];
bool freezeBall[100];
bool explodeBall[100];

int ballSelectedIndex = -1;
static float ballScale[100];
static int numGameBalls = 1;
static bool testBallExplosion = false;
static int attachBallIndex = -1;


void BallMods::DrawMenu() {
	if (BallMods::isEnabled()) {

		// Game Event Controls
		ImGui::Begin("Ball Mods", 0, ImVec2(400, 300), 0.75f);

		ImGui::InputInt("# Balls", &numGameBalls);


		for (int i = 0; i < numGameBalls; i++) {
			std::string ballScaleLabel = "Ball " + std::to_string(i + 1) + " Scale";

			ImGui::SliderFloat(ballScaleLabel.c_str(), &ballScale[i], 0.0f, 20.0f, "%.1f");

			if (ImGui::Button("Freeze")) {
				freezeBall[i] = true;
			}
			ImGui::SameLine();
			if (ImGui::Button("Explode")) {
				explodeBall[i] = true;
			}
		}

		ImGui::Separator();

		if (ImGui::Button("Test Ball Explosion Edit")) {
			testBallExplosion = true;
		}

		//Example Settings
		//For things that have settings to configure anywhere do something like this
		//Essentially have a boolean to detect the start and stop of the gamemode while the menu
		//just brings up the settings anywhere
		if (bStartGameMode) {
			if (ImGui::Button("Disable")) {
				bStartGameMode = false;
			}
		}
		else {
			if (ImGui::Button("Enable")) {
				if (!(getCurrentGameState() & (GameState::MENU | GameState::TRAINING)))
					bStartGameMode = true;
				else {
					printf("Invalid state for rumble settings\n");
				}
			}
		}
		//End Example Settings


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
	if (bStartGameMode) {
		// Game Event Ball modifiers
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

		SDK::TArray< class SDK::ABall_TA* > gameBalls = localGameEvent->GameBalls;

		if (gameBalls.IsValidIndex(0)) {

			// Ball explosion test
			if (testBallExplosion) {
				testBallExplosion = false;

				//gameBalls.GetByIndex(0)->ShouldDemolish(inGamePlayerController->Car);

				//gameBalls.GetByIndex(0)->Explosion->ExplosionComponent->EndRadius *= 100;
			}

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

					// Test static mesh override...works, but why?
					//ASpecialPickup_Tornado_TA* tornado = (SDK::ASpecialPickup_Tornado_TA*)Utils::GetInstanceOf(SDK::ASpecialPickup_Tornado_TA::StaticClass());
					//currBall->StaticMesh->StaticMesh = tornado->TornadoMesh;

					//UStaticMesh* goalIndicator = (SDK::UStaticMesh*)Utils::GetInstanceOf(SDK::UStaticMesh::StaticClass());
					//currBall->SetBallMesh(goalIndicator);

				} 
			}

			if (attachBallIndex != -1) {
				gameBalls.GetByIndex(0)->AttachToCar(InstanceStorage::PlayerController()->Car);
				attachBallIndex = -1;

			}

		}
	}
}

