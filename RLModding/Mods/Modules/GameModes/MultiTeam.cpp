#include "MultiTeam.h"
#include <comdef.h>
#include <iostream>

MultiTeam::MultiTeam(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}
MultiTeam::~MultiTeam() {}

void MultiTeam::onMenuOpen() {


}

void MultiTeam::onMenuClose() {

}

void MultiTeam::ExportSettings(pt::ptree & root) {

}
void MultiTeam::ImportSettings(pt::ptree & root) {

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
	ImGui::Begin("Multi-Team Settings", &p_open, ImVec2(495, 233), 0.75f);
	ImGui::Separator();

	if (ImGui::Button("Change to new team.")) {
		placeOnTeam = true;
	}
	if (!bStarted) {
		if (ImGui::Button("Enable")) {
			if (getCurrentGameState() & (GameState::LAN | GameState::EXHIBITION)) {
				bStarted = true;
				printf("Enabled Multi-Team");
				loadMod();
			}

			else {
				printf("Invalid state for Multi-Team\n");
			}
		}
	}
	else {
		if (ImGui::Button("Disable")) {
			printf("Disabled Multi-Team");
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
			//ATeam_TA* tempTeam = new ATeam_TA();
			//ATeam_TA* blueTeam = gameTeams.GetByIndex(0);
			//*tempTeam = *blueTeam;
			ATeam_TA* tempTeam;
			ATeam_TA* blueTeam = gameTeams.GetByIndex(0);
			tempTeam = blueTeam;

			tempTeam->TeamIndex = 2;
			tempTeam->TeamName = FString(L"Team");
			//tempTeam->
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SetTeam(0, gameTeams[0]);
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SetTeam(1, gameTeams[1]);
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SetTeam(2, tempTeam);
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->CreateTeams();

			/*
			AGFxHUD_TA* gui = (AGFxHUD_TA*)Utils::GetInstanceOf(AGFxHUD_TA::StaticClass());
			if (gui) {
			gui->SetTeam(tempTeam);
			}
			*/

			// Change team settings
			gameTeams = ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Teams;
			for (int j = 0; j < gameTeams.Num(); j++) {
				std::cout << "Team name: " << gameTeams[j]->TeamName.ToString() << std::endl;
				std::cout << "Team num: " << gameTeams[j]->TeamIndex << std::endl;
			}
			//gameTeams[0]->TeamName = FString(L"Blue");
			gameTeams[0]->SetCustomTeamName(FString(L"Blue"));
			gameTeams[0]->TeamIndex = 0;

			//gameTeams[1]->TeamName = FString(L"Orange");
			gameTeams[1]->SetCustomTeamName(FString(L"Orange"));
			gameTeams[1]->TeamIndex = 1;

			//gameTeams[2]->TeamName = FString(L"Purple");
			gameTeams[2]->SetCustomTeamName(FString(L"Purple"));
			gameTeams[2]->TeamIndex = 2;

			SDK::TArray< class SDK::UGoal_TA* > goals = ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Pylon->Goals;
			for (int j = 0; j < goals.Num(); j++) {
				std::cout << "pylon goal index: " << goals[j]->TeamNum << std::endl;
				std::cout << "gamevent goal index: " << ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Goals[j]->TeamNum << std::endl;
				//goals[j]->TeamNum = 2;
				//((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Goals[j]->TeamNum = 2;
			}
			for (int j = 0; j < gameTeams.Num(); j++) {
				//gameTeams[j]->SetCustomTeamName(FString(L"Purple"));
			}
			//((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->AddPlayerToTeam(tempTeam, InstanceStorage::PlayerController());


			TArray<class APlayerStart*> playerStarts = ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Pylon->SpawnPoints;
			for (int j = 0; j < playerStarts.Num(); j++)
			{
				if (j % 2 == 0)
					playerStarts[j]->TeamIndex = 2;
			}

			/*
			for (int j = 0; j < gameTeams.Num(); j++)
			{
			SDK::TArray< class SDK::APRI_TA* > pris = gameTeams.GetByIndex(j)->Members;
			for (int k = 0; k < pris.Num(); k++)
			{
			}

			}
			*/
		}

		if (placeOnTeam) {
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->ChooseTeam(2, InstanceStorage::PlayerController());
			placeOnTeam = false;
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


}



void MultiTeam::eventReplicatedGoalScored(Event* e) {

	/*
	std::cout << "Goal scored?" << std::endl;
	if (bStarted) {
	int scoredOn = e->getParams<SDK::AGameEvent_Soccar_TA_EventReplicatedGoalScored_Params>()->ScoredOnTeam;
	std::cout << "Team scored on index: " << scoredOn << std::endl;

	}
	*/

}
void MultiTeam::onTeamScoreUpdate(Event* e) {

}
void MultiTeam::priEventScorePoint(Event* e) {
	/*
	std::cout << "score point Goal scored?" << std::endl;
	APRI_TA* callingPRI = (SDK::APRI_TA*)e->getCallingObject();

	if (bStarted) {
	int points = e->getParams<SDK::APRI_TA_EventScorePoint_Params>()->Points;
	if (callingPRI) {
	if (callingPRI->Car)
	std::cout << "Goal index: " << callingPRI->Car->GetTeamNum() << " | " << points << std::endl;
	}
	}
	*/
}

void MultiTeam::priEventScoredGoal(Event* e) {
	/*
	std::cout << "score goal Goal scored?" << std::endl;
	APRI_TA* callingPRI = (SDK::APRI_TA*)e->getCallingObject();

	if (bStarted) {
	//int  = e->getParams<SDK::APRI_TA_EventScoredGoal_Params>()->BallHitLocation;
	if (callingPRI) {
	if (callingPRI->Car)
	std::cout << "Goal index: " << callingPRI->Car->GetTeamNum() << std::endl;
	}
	}
	*/
}

void MultiTeam::eventPlayerScored(Event* e) {
	// Get team scores
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	SDK::TArray< class SDK::ATeam_TA* > gameTeams = ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Teams;
	for (int j = 0; j < gameTeams.Num(); j++) {
		if (localGameEvent->Teams[j]) {
			std::cout << "Team index: " << gameTeams[j]->TeamIndex << std::endl;
			if (localGameEvent->Teams[j]->CustomTeamName.IsValid())
				std::cout << "Custom name: " << gameTeams[j]->CustomTeamName.ToString() << std::endl;
			std::cout << "Score: " << gameTeams[j]->Score << std::endl;

		}
		//goals[j]->TeamNum = 2;
		//((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Goals[j]->TeamNum = 2;
	}

	/*
	std::cout << "Goal scored?" << std::endl;
	if (bStarted) {
	APRI_TA* playerScored = reinterpret_cast<SDK::APRI_TA*>(e->getParams<SDK::AGameEvent_Soccar_TA_EventPlayerScored_Params>()->Scorer);

	if (playerScored) {
	if(playerScored->Car)
	std::cout << "Goal index: " << playerScored->Car->GetTeamNum() << std::endl;
	}

	}
	*/
}
void MultiTeam::statOnGoalScored(Event* e) {
	/*
	std::cout << "Goal scored?" << std::endl;
	if (bStarted) {
	UGoal_TA* scoringGoal = reinterpret_cast<SDK::UGoal_TA*>(e->getParams<SDK::AStatFactory_TA_OnGoalScored_Params>()->Goal);
	int scoringIndex = e->getParams<SDK::AStatFactory_TA_OnGoalScored_Params>()->ScoreIndex;

	if (scoringGoal) {
	std::cout << "Goal index: " << scoringGoal->TeamNum << std::endl;
	}
	std::cout << "Team index who scored: " << scoringIndex << std::endl;

	}
	*/
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