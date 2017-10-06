#include "KeepAway.h"
#include <comdef.h>
#include <iostream>

KeepAway::KeepAway(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

KeepAway::~KeepAway() {}

void KeepAway::onEnable() {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
		localGameEvent->bDisableGoalDelay = true;
		for (int i = 0; i < localGameEvent->Goals.Num(); i++) {
			localGameEvent->Goals.GetByIndex(i)->PointsToAward = 0;

		}
	}

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
	ImGui::InputInt("Points to Win", &pointsToWin);


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
	//std::cout << "Time updated" << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();

	if (currentTeamHasPossesion == 0) {
		localGameEvent->Teams.GetByIndex(0)->SetScore(localGameEvent->Teams.GetByIndex(0)->Score + 1);
	}
	else if (currentTeamHasPossesion == 1) {
		localGameEvent->Teams.GetByIndex(1)->SetScore(localGameEvent->Teams.GetByIndex(1)->Score + 1);
	}
}

void KeepAway::onBallCarTouch(Event* e) {
	ACar_TA* hitCar = reinterpret_cast<SDK::ACar_TA*>(e->getParams<SDK::ABall_TA_OnCarTouch_Params>()->HitCar);
	if (hitCar->GetTeamIndex() == 0) {
		std::cout << "BLUE TOUCHED LAST" << std::endl;
		currentTeamHasPossesion = 0;

	}
	if (hitCar->GetTeamIndex() == 1) {
		std::cout << "ORANGE TOUCHED LAST" << std::endl;
		currentTeamHasPossesion = 1;
	}
}

void KeepAway::onBallHit(Event* e) {
	

}