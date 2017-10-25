#include "MultiTeam.h"
#include <comdef.h>
#include <iostream>

MultiTeam::MultiTeam(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}
MultiTeam::~MultiTeam() {}

void MultiTeam::onMenuOpen() {


}

void MultiTeam::onMenuClose() {
	currentTeamHasPossesion = -1;

}

void MultiTeam::ExportSettings(pt::ptree & root) {
	root.put("KeepAway_Interval", interval);
	root.put("KeepAway_GoalsAddToScore", goalsAddScore);
	root.put("KeepAway_Points", pointsToWin);
}
void MultiTeam::ImportSettings(pt::ptree & root) {
	interval = root.get<float>("KeepAway_Interval", 0.6);
	goalsAddScore = root.get<bool>("KeepAway_GoalsAddToScore", false);
	pointsToWin = root.get<int>("KeepAway_Points", 100);
}

void MultiTeam::loadMod() {
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {
		
	}
}


void MultiTeam::unloadMod() {
	bStarted = false;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	if (localGameEvent) {

	}
}


void MultiTeam::DrawMenu() {
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

void MultiTeam::onPlayerTick(Event* event) {
	if (bStarted) {
		SDK::TArray< class SDK::ATeam_TA* > gameTeams = ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Teams;

		if (gameTeams.Num() < 3) {
			std::cout << "less tahn 3 teams found" << std::endl;

			// new team
			SDK::ATeam_TA* tempTeam = gameTeams.GetByIndex(0);
			tempTeam->TeamIndex = 2;
			tempTeam->TeamName = FString(L"Larry");
			tempTeam->SetCustomTeamName(FString(L"Larry"));
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SetTeam(2, tempTeam);
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->CreateTeams();

			/*
			AGFxHUD_TA* gui = (AGFxHUD_TA*)Utils::GetInstanceOf(AGFxHUD_TA::StaticClass());
			if (gui) {
				gui->SetTeam(tempTeam);
			}
			*/

			SDK::TArray< class SDK::UGoal_TA* > goals = ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Pylon->Goals;
			for (int j = 0; j < goals.Num(); j++) {
				std::cout << "pylon goal index: " << ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Goals[j]->TeamNum  <<std::endl;
				std::cout << "gamevent goal index: " << ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Goals[j]->TeamNum << std::endl;
				goals[j]->TeamNum = 2;
				((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Goals[j]->TeamNum = 2;
			}
			for (int j = 0; j < gameTeams.Num(); j++) {
				//gameTeams[j]->SetCustomTeamName(FString(L"Larry"));
			}

			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->ChooseTeam(2, InstanceStorage::PlayerController());

			return;

			for (int j = 0; j < gameTeams.Num(); j++)
			{
				SDK::TArray< class SDK::APRI_TA* > pris = gameTeams.GetByIndex(j)->Members;
				for (int k = 0; k < pris.Num(); k++)
				{
				}

			}
		}
	}
}

void MultiTeam::onCarSpawned(Event* e) {

}

void MultiTeam::onCarDemolished(Event* e) {

}
void MultiTeam::onGameTimeUpdated(Event* e) {
	if (bStarted) {


	}
}

void MultiTeam::onEventGoalScored(Event* e) {
	if (bStarted) {
	
	}

}


void MultiTeam::onBallCarTouch(Event* e) {
	if (bStarted) {

	}
}

void MultiTeam::onBallHit(Event* e) {


}

void MultiTeam::eventGameEnded(Event* e) {
	std::cout << "Game Ended. " << std::endl;
	if (bStarted) {
		unloadMod();
	}
}