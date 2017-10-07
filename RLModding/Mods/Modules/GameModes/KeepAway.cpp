#include "KeepAway.h"
#include <comdef.h>
#include <iostream>

KeepAway::KeepAway(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

KeepAway::~KeepAway() {}

void KeepAway::onEnable() {
	

}

void KeepAway::onDisable() {
	currentTeamHasPossesion = -1;

}

void KeepAway::ExportSettings(pt::ptree root) {
}
void KeepAway::ImportSettings(pt::ptree root) {
}

void KeepAway::DrawMenu() {
	ImGui::Begin("Keep Away Settings", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::Text("In this game mode the goal is to keep the other team from touching the ball as long as possible.\n  Each second your team has touched the ball last you will be awarded 1 point.\n  You can either choose to play to a set score or until the time runs out.\n  Replays are disabled and you can choose whether scoring awards an additional point.");
	ImGui::Separator();
	ImGui::InputInt("Points to Win", &pointsToWin);
	ImGui::Checkbox("Scoring goals adds to score", &goalsAddScore);


	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled Keep Away");
				AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
				if (localGameEvent) {
					localGameEvent->SetRestartingMatch(true);
					localGameEvent->bDisableGoalDelay = true;
					for (int i = 0; i < localGameEvent->Goals.Num(); i++) {
						if(goalsAddScore)
							localGameEvent->Goals.GetByIndex(i)->PointsToAward = 1;
						else 
							localGameEvent->Goals.GetByIndex(i)->PointsToAward = 0;

					}
				}
			}

			else {
				printf("Invalid state for Keep Away\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled Keep Away");
			bStarted = false;
			AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
			if (localGameEvent) {
				for (int i = 0; i < localGameEvent->Goals.Num(); i++) {
					localGameEvent->Goals.GetByIndex(i)->PointsToAward = 1;
				}
			}

		}
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void KeepAway::onPlayerTick(Event* event) {
	if (bStarted) {
		srand(time(NULL));
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

		if (localGameEvent && localGameEvent->GameTime != localGameEvent->GameTimeRemaining &&  localGameEvent->GameTimeRemaining != 0) {
			
			
		}

	}
}

void KeepAway::onCarSpawned(Event* e) {

}

void KeepAway::onCarDemolished(Event* e) {

}
void KeepAway::onGameTimeUpdated(Event* e) {
	if (bStarted) {

		//std::cout << "Time updated" << std::endl;
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
		if (localGameEvent) {
			if (currentTeamHasPossesion == 0) {
				localGameEvent->Teams.GetByIndex(0)->SetScore(localGameEvent->Teams.GetByIndex(0)->Score + 1);

			}
			else if (currentTeamHasPossesion == 1) {
				localGameEvent->Teams.GetByIndex(1)->SetScore(localGameEvent->Teams.GetByIndex(1)->Score + 1);

			}
			if (localGameEvent->Teams.GetByIndex(0)->Score == pointsToWin || localGameEvent->Teams.GetByIndex(1)->Score == pointsToWin) {
				localGameEvent->EndGame();
			}
		}
	}
}

void KeepAway::onEventGoalScored(Event* e) {
	if (bStarted) {
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
		if (localGameEvent) {
			if (localGameEvent->Teams.GetByIndex(0)->Score == pointsToWin || localGameEvent->Teams.GetByIndex(1)->Score == pointsToWin) {
				localGameEvent->EndGame();
			}
			//std::cout << "Blue score current: " << localGameEvent->Teams.GetByIndex(0)->Score << std::endl;
			//std::cout << "Orange score current: " << localGameEvent->Teams.GetByIndex(1)->Score << std::endl;
		}

	}

}


void KeepAway::onBallCarTouch(Event* e) {
	if (bStarted) {

		ACar_TA* hitCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<SDK::ABall_TA_OnCarTouch_Params>()->HitCar);
		if (hitCar) {
			if (hitCar->GetTeamIndex() == 0) {
				//std::cout << "BLUE TOUCHED LAST" << std::endl;
				currentTeamHasPossesion = 0;

			}
			if (hitCar->GetTeamIndex() == 1) {
				//std::cout << "ORANGE TOUCHED LAST" << std::endl;
				currentTeamHasPossesion = 1;

			}
		}
	}
}

void KeepAway::onBallHit(Event* e) {
	

}