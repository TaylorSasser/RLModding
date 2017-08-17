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

static bool unlimJumps = false;
static bool setFreePlayColors = false;
static int quickPlayMapIndex = 0;
static bool quickPlay = false;
static int team1Score = 0;
static int team2Score = 0;
static int timeRemaining = 0;

bool travelToMap = false;

bool dumpObjects = false;

static int demolishPlayerIndex = -1;
//static int playerSelectedIndex = -1;

int tickCount = 0;
int totalPlayers = -1;

SDK::UGameEngine* pGameEngine;
SDK::UOnlineProduct_TA* product;


void TestClass::onEnable() {
	printf("Test class enabled \n");

	pGameEngine = SDK::UObject::FindObject<SDK::UGameEngine>("GameEngine_TA Transient.GameEngine_TA_1");
	product = SDK::UObject::FindObject<SDK::UOnlineProduct_TA>("OnlineProduct_TA Transient.OnlineProduct_TA_3968");


}
void TestClass::onDisable() {
	printf("Test class disabled \n");
}

void TestClass::DrawMenu() {
	if (TestClass::isEnabled()) {
		ImGui::Begin("Players Menu", 0, ImVec2(400, 300), 0.75f);

		//ImGui::Combo("Player Name", &playerSelectedIndex, players, IM_ARRAYSIZE(players));

		ImGui::Separator();

		ImGui::Checkbox("Unlimited Jumps", &unlimJumps);

		ImGui::End();

		// Game Event Controls
		ImGui::Begin("Game Event Menu", 0, ImVec2(400, 300), 0.75f);

		ImGui::InputInt("Team 1 Score", &team1Score);
		ImGui::SameLine();
		ImGui::InputInt("Team 2 Score", &team2Score);

		ImGui::InputInt("Team remaining", &timeRemaining);


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



		ImGui::End();
		

	}
}
UOnlineGame_TA* tempJoin;
void TestClass::onProfileJoinGame(Event* e) {}
void TestClass::onMainMenuTick(Event* e) {

	SDK::APlayerController_Menu_TA* inMenuPlayerController = (SDK::APlayerController_Menu_TA*)e->getCallingObject();



	if (inMenuPlayerController) {
		if (dumpObjects) {
			inMenuPlayerController->ConsoleCommand(L"ShowDebug", true);

			dumpObjects = false;
		}

		if (tempJoin) {
			//tempJoin->SetServerBeaconAddress(L"192.168.60.1");
			//tempJoin->ServerGameAddress = FString(L"192.168.60.1");
		}
		else {
			tempJoin = SDK::UObject::FindObject<SDK::UOnlineGame_TA>("OnlineGame_TA Transient.OnlineGame_TA_1");

		}


		if (quickPlay) {
			inMenuPlayerController->ConsoleCommand(L"SwitchLevel cs_p?game=TAGame.GameInfo_Items_TA?Playtest?Offline?GameTags=BotsNone,PlayerCount4?NumPublicConnections=8?NumOpenPublicConnections=8", true);
			quickPlay = false;
		}


	}

}
void TestClass::onChatSend(Event* e) {}
void TestClass::onActorJump(Event* e) {

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

		SDK::AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)inGamePlayerController->GetGameEvent();


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

}