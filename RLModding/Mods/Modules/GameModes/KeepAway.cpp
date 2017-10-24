#include "KeepAway.h"
#include <comdef.h>
#include <iostream>

KeepAway::KeepAway(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}
KeepAway::~KeepAway() {}

void KeepAway::onMenuOpen() {
	

}

void KeepAway::onMenuClose() {
	currentTeamHasPossesion = -1;

}

void KeepAway::ExportSettings(pt::ptree & root) {
	root.put("KeepAway_Interval", interval);
	root.put("KeepAway_GoalsAddToScore", goalsAddScore);
	root.put("KeepAway_Points", pointsToWin);
}
void KeepAway::ImportSettings(pt::ptree & root) {
	interval = root.get<float>("KeepAway_Interval", 0.6);
	goalsAddScore = root.get<bool>("KeepAway_GoalsAddToScore", false);
	pointsToWin = root.get<int>("KeepAway_Points", 100);
}

void KeepAway::loadMod() {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
		localGameEvent->StartNewGame();
		localGameEvent->bDisableGoalDelay = true;
		for (int i = 0; i < localGameEvent->Goals.Num(); i++) {
			if (goalsAddScore) {
				if (localGameEvent->Goals[i])
					localGameEvent->Goals.GetByIndex(i)->PointsToAward = 1;
			}
			else {
				if (localGameEvent->Goals[i])
					localGameEvent->Goals.GetByIndex(i)->PointsToAward = 0;
			}

		}
	}
}


void KeepAway::unloadMod() {
	bStarted = false;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
		for (int i = 0; i < localGameEvent->Goals.Num(); i++) {
			if (localGameEvent->Goals[i])
				localGameEvent->Goals.GetByIndex(i)->PointsToAward = 1;
		}
	}
}


void KeepAway::DrawMenu() {
	ImGui::Begin("Keep Away Settings", &p_open, ImVec2(495, 233), 0.75f);
	ImGui::TextWrapped("In this game mode the goal is to keep the other team from touching the ball as long as possible. Each second your team has touched the ball last you will be awarded 1 point. You can either choose to play to a set score or until the time runs out. Replays are disabled and you can choose whether scoring awards an additional point.");
	ImGui::Separator();
	ImGui::InputInt("Points to Win", &pointsToWin);
	ImGui::Checkbox("Scoring goals adds to score", &goalsAddScore);


	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled Keep Away");
				loadMod();
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
			unloadMod();

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
			if (currentTeamHasPossesion == 0 && localGameEvent->Teams[0]) {
				localGameEvent->Teams.GetByIndex(0)->SetScore(localGameEvent->Teams.GetByIndex(0)->Score + 1);
				// Update player score who scored
				if (carLastTouched && carLastTouched->GetTeamNum() == 0 && carLastTouched->PRI) {
					carLastTouched->PRI->MatchGoals += 1;
				}
			}
			else if (currentTeamHasPossesion == 1 && localGameEvent->Teams[1]) {
				localGameEvent->Teams.GetByIndex(1)->SetScore(localGameEvent->Teams.GetByIndex(1)->Score + 1);
				// Update player score who scored
				if (carLastTouched && carLastTouched->GetTeamNum() == 1 && carLastTouched->PRI) {
					carLastTouched->PRI->MatchGoals += 1;
				}
			}
			if ((localGameEvent->Teams[0] && localGameEvent->Teams.GetByIndex(0)->Score == pointsToWin) || (localGameEvent->Teams[1] && localGameEvent->Teams.GetByIndex(1)->Score == pointsToWin)) {
				localGameEvent->EndGame();
			}
		}
	}
}

void KeepAway::onEventGoalScored(Event* e) {
	if (bStarted) {
		AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
		if (localGameEvent) {
			if ((localGameEvent->Teams[0] && localGameEvent->Teams.GetByIndex(0)->Score == pointsToWin) || (localGameEvent->Teams[1] && localGameEvent->Teams.GetByIndex(1)->Score == pointsToWin)) {
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
			
			carLastTouched = hitCar;

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

void KeepAway::eventGameEnded(Event* e) {
	std::cout << "Game Ended. " << std::endl;
	if (bStarted) {
		unloadMod();
	}
}