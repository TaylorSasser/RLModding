#include "TestClass.h"
#include "../../Utils/Utils.h"
#include <functional>
#include "../../DrawManager/DrawManager.hpp"
#include <comdef.h> // for wchar to char conversion
#include <fstream>
#include <map>
#include <string>

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {
}
TestClass::~TestClass() {}


SDK::APlayerController_TA* inGamePlayerController = nullptr;
static float col2[4] = { 0.4f,0.7f,0.0f,0.5f };
static bool carCollisionOff = false;
static bool cloneMe = false;
static int numClones = 1;
const char* players[] = { "", "", "", "", "", "", "", "", "", "", "" };
static bool startOverTime = false;
static float ballScale[100];
static float carScale = 1.0;
static bool unlimJumps = false;
static bool pauseServer = false;
static int numGameBalls = 1;

static bool setFreePlayColors = false;
static bool testBallExplosion = false;


static float carMaxSpinRate = 5.5;

static float carMaxLinearSpeed = 2300;



static int quickPlayMapIndex = 0;
static bool quickPlay = false;

static int team1Score = 0;
static int team2Score = 0;
static int timeRemaining = 0;

float currBallScale[100];
float currCarScale = 1.0;
bool pausedGame = false;
int ballSelectedIndex = -1;
bool spawnBot = false;
bool travelToMap = false;

bool dumpObjects = false;


static int demolishPlayerIndex = -1;
static int attachBallIndex = -1;
static int playerSelectedIndex = -1;

static bool randomSpawnPoints = false;

int tickCount = 0;

int totalPlayers = -1;
bool carCollisionChanged = false;

SDK::UGameEngine* pGameEngine;
SDK::UOnlineProduct_TA* product;


void TestClass::onEnable() {
	printf("Test class enabled \n");
	std::fill_n(ballScale, 100, 1.0);
	std::fill_n(currBallScale, 100, 1.0);
	pGameEngine = SDK::UObject::FindObject<SDK::UGameEngine>("GameEngine_TA Transient.GameEngine_TA_1");
	product = SDK::UObject::FindObject<SDK::UOnlineProduct_TA>("OnlineProduct_TA Transient.OnlineProduct_TA_3968");


}
void TestClass::onDisable() {
	printf("Test class disabled \n");
}

void TestClass::DrawMenu() {
	if (TestClass::isEnabled()) {
		ImGui::Begin("Players Menu", 0, ImVec2(400, 300), 0.75f);


		ImGui::Combo("Player Name", &playerSelectedIndex, players, IM_ARRAYSIZE(players));

		ImGui::Separator();

		ImGui::ColorEdit4("Car Color", col2);

		if (ImGui::Button("Toggle Car Collision")) {
			printf("Collision Toggled\n");
			carCollisionOff ^= 1;
			carCollisionChanged ^= 1;
		}
		if (carCollisionOff)
		{
			ImGui::SameLine();
			ImGui::Text("Car Collision Off");
		}
		else {
			ImGui::SameLine();
			ImGui::Text("Car Collision On");

		}

		ImGui::InputFloat("Car Max Spin Rate", &carMaxSpinRate, 0.5f, 1.0f);



		if (ImGui::Button("Clone Car")) {
			printf("Cloned\n");
			cloneMe = true;
		}
		ImGui::SameLine();
		ImGui::InputInt("# Clones", &numClones);

		if (ImGui::Button("Demolish")) {
			demolishPlayerIndex = playerSelectedIndex;
		}
		ImGui::SameLine();

		if (ImGui::Button("Attach Ball")) {
			attachBallIndex = playerSelectedIndex;
		}

		ImGui::SliderFloat("Car Scale", &carScale, 0.1f, 10.0f, "%.1f");
		ImGui::Checkbox("Unlimited Jumps", &unlimJumps);



		ImGui::End();

		// Game Event Controls
		ImGui::Begin("Game Event Menu", 0, ImVec2(400, 300), 0.75f);

		if (ImGui::Button("Force Overtime")) {
			startOverTime ^= 1;
		}
		ImGui::SameLine();

		if (ImGui::Button("Pause Server")) {
			pauseServer = true;
		}

		if (ImGui::Button("Freeze Bots")) {
			pauseServer = true;
		}
		if (ImGui::Button("Randomize Spawn Points")) {
			randomSpawnPoints = true;
		}

		if (ImGui::Button("Spawn Bot")) {
			spawnBot = true;
		}

		ImGui::InputInt("Team 1 Score", &team1Score);
		ImGui::SameLine();
		ImGui::InputInt("Team 2 Score", &team2Score);

		ImGui::InputInt("Team remaining", &timeRemaining);


		ImGui::Separator();


		ImGui::InputInt("# Balls", &numGameBalls);


		for (int i = 0; i < numGameBalls; i++) {
			std::string ballScaleLabel = "Ball " + std::to_string(i + 1) + " Scale";

			ImGui::SliderFloat(ballScaleLabel.c_str(), &ballScale[i], 0.0f, 20.0f, "%.1f");
		}

		ImGui::Separator();


		ImGui::End();

		// Server Controls
		ImGui::Begin("Server Options", 0, ImVec2(400, 300), 0.75f);

		if (ImGui::Button("Join Server")) {
			travelToMap = true;
		}

		ImGui::End();

		// Debug Controls
		ImGui::Begin("Test Options", 0, ImVec2(400, 300), 0.75f);

		if (ImGui::Button("Dump Objects")) {
			dumpObjects = true;
		}

		if (ImGui::Button("Test FreePlay Colors")) {
			setFreePlayColors = true;
		}

		if (ImGui::Button("Test Ball Explosion Edit")) {
			testBallExplosion = true;
		}

		ImGui::End();
		

	}
}

void TestClass::onProfileJoinGame(Event* e) {}
void TestClass::onMainMenuTick(Event* e) {

	SDK::APlayerController_Menu_TA* inMenuPlayerController = (SDK::APlayerController_Menu_TA*)e->getCallingObject();

	if (inMenuPlayerController) {
		if (quickPlay) {
			inMenuPlayerController->ConsoleCommand(L"SwitchLevel cs_p?game=TAGame.GameInfo_Items_TA?Playtest?Offline?GameTags=BotsNone,PlayerCount4?NumPublicConnections=8?NumOpenPublicConnections=8", true);
			quickPlay = false;
		}


	}

}
void TestClass::onChatSend(Event* e) {}
void TestClass::onActorJump(Event* e) {
	//printf("%s\n",function->GetFullName());
	if (unlimJumps) {
		((SDK::ACar_TA*)e->getCallingObject())->bDoubleJumped = 0;
		((SDK::ACar_TA*)e->getCallingObject())->bJumped = 0;

	}
}
void TestClass::onPostRender(Event* e) {

}
void TestClass::onTCPConnectionBegin(Event* e) {}
void TestClass::onTCPConnectionEnd(Event* e) {}
void TestClass::onInGameTick(Event* e) {}
void TestClass::onCarTick(Event* e) {}
void TestClass::onPlayerTick(Event* e) {

	static SDK::UObject* ObjectInstance;
	ObjectInstance = NULL;
	if (dumpObjects) {
		std::ofstream myfile;

		myfile.open("objects.txt");

		for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
			SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
			if (!strstr(CheckObject->GetFullName().c_str(), "Default"))
				myfile << CheckObject->GetFullName() << "\n";


		}
		dumpObjects = true;
		myfile.close();

	}

	inGamePlayerController = (SDK::APlayerController_TA*)e->getCallingObject();
	tickCount++;

	if (inGamePlayerController != NULL) {


		// Check if car is freeplay car?
		if (inGamePlayerController->Car != NULL && inGamePlayerController->Car->IsA(SDK::ACar_Freeplay_TA::StaticClass())) {
			SDK::ACar_Freeplay_TA* freePlayCar = (SDK::ACar_Freeplay_TA*)inGamePlayerController->Car;
			SDK::TArray<struct SDK::FLinearColor> freePlayCarColors = freePlayCar->CarColors;
			if (setFreePlayColors) {
				setFreePlayColors = false;
				printf("Found the freeplay car...");
				for (int i = 0; i < freePlayCarColors.Num(); i++) {
					freePlayCarColors.GetByIndex(i).R = 0;
					freePlayCarColors.GetByIndex(i).G = 0;
					freePlayCarColors.GetByIndex(i).B = 0;
				}
			}

		}



		SDK::AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)inGamePlayerController->GetGameEvent();

		if (localGameEvent) {

			SDK::AAIController_TA* aiController = (SDK::AAIController_TA*)Utils::GetInstanceOf(SDK::AAIController_TA::StaticClass());
			if (aiController) {
				SDK::AAIManager_TA* aiManager = aiController->AIManager;
				if (aiManager) {
					aiManager->bOutputLogToWindow = true;
					SDK::TArray<class SDK::AAIController_TA*> bots = aiManager->Bots;

					for (int i = 0; i < bots.Num(); i++) {
						bots.GetByIndex(i)->Vehicle = inGamePlayerController->Car;

					}

				}
			}
		}

		if (carCollisionChanged && carCollisionOff && inGamePlayerController->Car != NULL) {

			inGamePlayerController->Car->SetCollisionType(SDK::ECollisionType::COLLIDE_TouchAllButWeapons);
			carCollisionChanged = false;
		}
		else if (carCollisionChanged && inGamePlayerController->Car != NULL) {
			inGamePlayerController->Car->SetCollisionType(SDK::ECollisionType::COLLIDE_CustomDefault);
			carCollisionChanged = false;
		}

		if (cloneMe) {
			for (int i = 0; i < numClones; i++) {
				localGameEvent->SpawnCar(inGamePlayerController, localGameEvent->Cars.GetByIndex(0)->Location, localGameEvent->Cars.GetByIndex(0)->Rotation);
			}

			cloneMe = false;
		}

		if (inGamePlayerController->Car != NULL && !Utils::FloatCompare(carMaxSpinRate, inGamePlayerController->Car->MaxAngularSpeed)) {
			inGamePlayerController->Car->SetMaxAngularSpeed(carMaxSpinRate);

		}

		/*
		if (localGameEvent && tickCount > 10) {
		int currTotalPlayers = 0;
		tickCount = 0;

		SDK::TArray< class SDK::ATeam_TA* > gameTeams = localGameEvent->Teams;
		for (int j = 0; j < gameTeams.Num(); j++)
		{
		SDK::TArray< class SDK::APRI_TA* > pris = gameTeams.GetByIndex(j)->Members;
		for (int k = 0; k < pris.Num(); k++)
		{
		SDK::APRI_TA* pri = pris.GetByIndex(k);
		_bstr_t b(pri->GetHumanReadableName().c_str());
		players[currTotalPlayers] = b;
		currTotalPlayers++;

		}
		}
		}
		*/

		if (inGamePlayerController->Car != NULL) {
			//inGamePlayerController->Car->bFrozen = true;
			/*
			SDK::TArray<class SDK::UWheel_TA*> theWheels = inGamePlayerController->Car->VehicleSim->Wheels;
			for (int k = 0; k < theWheels.Num(); k++) {
			theWheels.GetByIndex(k)->WheelRadius *= 2;
			}
			*/
		}

		if (inGamePlayerController->Car != NULL && demolishPlayerIndex != -1) {
			demolishPlayerIndex = -1;
			inGamePlayerController->Car->Demolish(inGamePlayerController->Car);

		}

		if (startOverTime) {
			localGameEvent->StartOvertime();
			startOverTime = false;
		}

		// Game Event Ball modifiers
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
				if (gameBalls.IsValidIndex(i) && gameBalls.GetByIndex(i) != NULL && !Utils::FloatCompare(ballScale[i], currBallScale[i])) {

					gameBalls.GetByIndex(i)->SetBallScale(ballScale[i]);
					currBallScale[i] = ballScale[i];


				}
			}

			if (attachBallIndex != -1) {
				gameBalls.GetByIndex(0)->AttachToCar(inGamePlayerController->Car);
				attachBallIndex = -1;

			}

		}



		if (!Utils::FloatCompare(carScale, currCarScale)) {
			currCarScale = carScale;
			//SDK::FVector currCarLocation = inGamePlayerController->Car->Location;
			//currCarLocation.Z += 20.0;
			//inGamePlayerController->Car->Location = currCarLocation;
			inGamePlayerController->Car->SetCarScale(carScale);
		}

		if (pauseServer) {
			localGameEvent->SetPaused(inGamePlayerController, !pausedGame);
			pausedGame = !pausedGame;
			pauseServer = false;
		}

		if (localGameEvent) {
			for (int k = 0; k < localGameEvent->Players.Num(); k++)
			{
				SDK::AController* playerControllers = localGameEvent->Players.GetByIndex(k);
				_bstr_t b(playerControllers->GetHumanReadableName().c_str());
				players[k] = b;
			}
		}
		else {
			printf("Can't find game event.");
		}

		if (randomSpawnPoints) {



			if (localGameEvent) {
				for (int k = 0; k < localGameEvent->SpawnPoints.Num(); k++)
				{
					SDK::AActor* spawn = localGameEvent->SpawnPoints.GetByIndex(k);
					SDK::FVector newSpawn = spawn->Location;
					newSpawn.X = 0;
					newSpawn.Y = 0;
					spawn->SetLocation(newSpawn);
				}
			}
			randomSpawnPoints = false;

		}

		if (spawnBot) {
			if (localGameEvent) {
				localGameEvent->SpawnBot();
			}
			spawnBot = false;
		}

		if (travelToMap) {
			SDK::AWorldInfo* worldInfo = inGamePlayerController->WorldInfo;
			//inGamePlayerController->PeerTravelAsHost(0.0, L"192.168.0.1");
			//inGamePlayerController->LocalTravel(L"192.168.0.1");

			if (worldInfo) {
				worldInfo->bUseConsoleInput = true;

				SDK::UOnlineGame_X* onlineGame = inGamePlayerController->GetOnlineGame();

				if (onlineGame) {
					SDK::UOnlineGameJoinGame_X* onlineGameJoin = onlineGame->JoinGame;

					SDK::TArray<class SDK::URPC_GenerateKeys_X*> generateKeys = onlineGameJoin->GenerateKeysRPCs;
					for (int k = 0; k < generateKeys.Num(); k++)
					{
						printf("Key: %s/n", generateKeys.GetByIndex(k)->Key);
					}
				}
				else {
					printf("No online game found...\n");
				}

				inGamePlayerController->LocalTravel(L"192.168.0.1");
				//worldInfo->ServerTravel(L"192.168.0.1", true, true);
				//worldInfo->Game->SendPlayer(inGamePlayerController, L"192.168.0.1");
			}
			else {
				printf("World info null :(\n");
			}
			travelToMap = false;
		}




		if (pGameEngine) {


			/*
			for (int k = 0; k < pGameEngine->GamePlayers.Num(); k++)
			{
			SDK::ULocalPlayer* player = pGameEngine->GamePlayers.GetByIndex(k);
			_bstr_t b(player->GetNickname().c_str());
			players[currTotalPlayers] = b;
			currTotalPlayers++;

			}
			*/
		}
		else {
			pGameEngine = SDK::UObject::FindObject<SDK::UGameEngine>("GameEngine_TA Transient.GameEngine_TA_1");
			printf("Can't find engine.");
		}

		if (localGameEvent) {
			localGameEvent->AddBallTrajectory();

		}

		/*
		if (updateScoreAndTime) {
		if (localGameEvent) {
		localGameEvent->SetScoreAndTime(inGamePlayerController, team1Score, team2Score, timeRemaining, false, false)
		}
		}


		/*
		if (product) {
		product->SetProductID(12);
		}
		else {
		product = SDK::UObject::FindObject<SDK::UOnlineProduct_TA>("OnlineProduct_TA Transient.OnlineProduct_TA_3968");
		}
		*/

		//SDK::AFXActor_Car_TA* car = (SDK::AFXActor_Car_TA*)Utils::GetInstanceOf(SDK::AFXActor_Car_TA::StaticClass());

		//SDK::ACar_TA* car = inGamePlayerController->Car;

		//if (car && car->Mesh) {
		//SDK::UProductAsset_Body_TA* body = car->CarMesh->BodyAsset;
		//body->MassScale = boostGlowRate;
		//std::cout << car->BoostGlow << std::endl;
		//}

		/*
		SDK::ASkeletalMeshActorMAT_Products_TA* products = (SDK::ASkeletalMeshActorMAT_Products_TA*)Utils::GetInstanceOf(SDK::ASkeletalMeshActorMAT_Products_TA::StaticClass());

		if (products) {
		std::cout << "Found products!" << std::endl;
		}
		*/

	}
	if (inGamePlayerController != NULL) {

		SDK::TArray< class SDK::ATeam_TA* > gameTeams = ((SDK::AGameEvent_Soccar_TA*)inGamePlayerController->GetGameEvent())->Teams;

		for (int j = 0; j < gameTeams.Num(); j++)
		{
			//gameTeams.Data[j]->SetCustomTeamName(FString(L"DUMB NAME"));
			//ServerSay(to_string(gameTeams.Data[j]->GetTeamName().Data));

			//gameTeams.Data[j]->SetScore(6);
			SDK::TArray< struct SDK::FLinearColor > colors = gameTeams.GetByIndex(j)->CarColorSet->Colors;
			for (int k = 0; k < colors.Num(); k++)
			{
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).R = col2[0];
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).G = col2[1];
				gameTeams.GetByIndex(j)->CarColorSet->Colors.GetByIndex(k).B = col2[2];
			}
			gameTeams.GetByIndex(j)->SetColorList(colors, true);
			gameTeams.GetByIndex(j)->TeamColor.R = col2[0];
			gameTeams.GetByIndex(j)->TeamColor.G = col2[1];
			gameTeams.GetByIndex(j)->TeamColor.B = col2[2];
		}

		/*
		SDK::ACar_TA* myCar = inGamePlayerController->Car;

		SDK::FLinearColor tempCustomColor = myCar->CarMesh->GetTeamColor();
		tempCustomColor.R = 0;
		tempCustomColor.G = 0;
		tempCustomColor.B = 0;
		myCar->CarMesh->SetTeamColorOverride(tempCustomColor);
		myCar->CarMesh->SetCustomColorOverride(tempCustomColor);

		SDK::ACar_TA* myCar = inGamePlayerController->Car;
		SDK::FLinearColor tempCustomColor = myCar->CarMesh->GetCustomColor();
		SDK::FLinearColor tempTeamColor = myCar->CarMesh->GetTeamColor();

		tempTeamColor.R = 0;
		tempTeamColor.G = 0;
		tempTeamColor.B = 0;


		// std:cout << tempTeamColor.A
		myCar->CarMesh->SetTeamColorOverride(tempTeamColor);
		*/
	}
}