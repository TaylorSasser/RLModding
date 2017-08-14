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


const char* rumbleItems[] = { "Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado", "", "", "", "", "" };
static int selectedRumbleIndex = -1;

static float magnetRange;
static float magnetBallGravity = 1.0;
static bool magnetDeactivateOnTouch = false;

static float carMaxSpinRate = 5.5;

static float carMaxLinearSpeed = 2300;

// Rumble Settings
static float itemGiveRate = 10.0;
static float currItemGiveRate = 10.0;

// Inventory Options
static bool groupItems = true;
static bool runInvExport = false;

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

bool inventoryExportDone = false;

static int demolishPlayerIndex = -1;
static int attachBallIndex = -1;
static int playerSelectedIndex = -1;

static bool randomSpawnPoints = false;

int tickCount = 0;

int totalPlayers = -1;
bool carCollisionChanged = false;

SDK::UGameEngine* pGameEngine;
SDK::UOnlineProduct_TA* product;


void ExportInventory() {

	std::ofstream myfile;
	myfile.open("inventory.csv");

	char *Quality[] =
	{
		"Common",
		"Uncommon",
		"Rare",
		"VeryRare",
		"Import",
		"Exotic",
		"BlackMarket",
		"Premium",
		"Limited",
		"MAX"
	};

	std::map<std::string, int> itemTotals;

	SDK::USaveData_TA* saveData = (SDK::USaveData_TA*)Utils::GetInstanceOf(SDK::USaveData_TA::StaticClass());
	if (saveData) {
		printf("Found save data...\n");
		SDK::TArray< class SDK::UOnlineProduct_TA* > products = saveData->OnlineProducts;
		for (int i = 0; i < products.Num(); i++)
		{
			std::string productName = "";
			std::string productPaint = "";
			std::string productCert = "";
			std::string productQuality = "";
			int productQuantity = 1;

			if (products.GetByIndex(i)) {
				//WriteLogFile(to_string(products.Data[i]->ProductID));
				//WriteLogFile(" (");

				SDK::UProductDatabase_TA* prodDB = (SDK::UProductDatabase_TA*)Utils::GetInstanceOf(SDK::UProductDatabase_TA::StaticClass());
				SDK::UCertifiedStatDatabase_TA* certDB = (SDK::UCertifiedStatDatabase_TA*)Utils::GetInstanceOf(SDK::UCertifiedStatDatabase_TA::StaticClass());
				SDK::UPaintDatabase_TA* paintDB = (SDK::UPaintDatabase_TA*)Utils::GetInstanceOf(SDK::UPaintDatabase_TA::StaticClass());

				SDK::FName realProductName = prodDB->GetProductName(products.GetByIndex(i)->ProductID);
				SDK::UProduct_TA* tempProduct = prodDB->GetProductByName(realProductName);
				//WriteLogFile(realProductName.GetName());
				//WriteLogFile(" | ");
				bool exportSetting = 1;
				if (exportSetting == 1)
					productName = tempProduct->GetLongLabel().ToString();
				else
					productName = products.GetByIndex(i)->ProductID;


				SDK::TArray< class SDK::UProductAttribute_TA* > attributes = products.GetByIndex(i)->Attributes;
				if (attributes.IsValidIndex(0) && attributes.Num() > 0) {
					for (int j = 0; j < attributes.Num(); j++)
					{
						if (attributes.GetByIndex(j)) {
							SDK::FOnlineProductAttribute onlineAttribute = attributes.GetByIndex(j)->InstanceOnlineProductAttribute();
							//WriteLogFile(onlineAttribute.Key.GetName());
							//WriteLogFile(" : ");
							//WriteLogFile(to_string(onlineAttribute.Value.Data));
							//std::cout << onlineAttribute.Key.GetName().c_str() << " : " << onlineAttribute.Value.ToString() <<  std::endl;

							if (strcmp(onlineAttribute.Key.GetName().c_str(), "Certified") == 0) {
								if (exportSetting == 1)
									productCert = certDB->GetStatName(std::stoi(onlineAttribute.Value.c_str())).GetName();
								else
									productCert = onlineAttribute.Value.ToString();
							}
							else if (strcmp(onlineAttribute.Key.GetName().c_str(), "Painted") == 0) {

								SDK::UProductPaint_TA* paint = paintDB->GetPaint(std::stoi(onlineAttribute.Value.ToString()));
								if (exportSetting == 1)
									productPaint = paint->Label.ToString();
								else
									productPaint = onlineAttribute.Value.ToString();
							}
							/*
							else if (strcmp(onlineAttribute.Key.GetName().c_str(), "Quality") == 0) {
							if (commaCount == 0) {
							myfile << ",";
							commaCount++;
							}
							int quality = std::stoi(onlineAttribute.Value.ToString());
							if (exportSetting == 1)
							myfile << quality << ",";
							else
							myfile << quality << ",";

							commaCount++;
							}
							*/
							/*
							WriteLogFile(to_string(attributes.Data[j]->GetSortLabel().Data));
							WriteLogFile(" : ");
							WriteLogFile(to_string(attributes.Data[j]->GetOnlineProductAttributeValue().Data));
							WriteLogFile(",");
							*/
						}

					}
				}


				// append quality

				productQuality = Quality[(int)tempProduct->GetQuality().GetValue()];
				std::string itemId = productName + "," + productCert + "," + productPaint + "," + productQuality + ",";

				// If item already found, add one to total
				if (itemTotals.find(itemId) != itemTotals.end()) {
					itemTotals[itemId] = itemTotals[itemId] + 1;
				}
				else {
					itemTotals[itemId] = 1;
				}




			}
			else {
				printf("product id is null.\n");
			}

		}

		for (std::map<std::string, int>::iterator iter = itemTotals.begin(); iter != itemTotals.end(); ++iter)
		{
			std::string k = iter->first;
			myfile << k << itemTotals[k] << "\n";

		}

	}
	else {
		printf("No saveData found...\n");

	}
	myfile.close();
	inventoryExportDone = true;
}

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

//When toggled, check to make sure they are in a valid state
void TestClass::onToggle() {
	GameState currentState = getCurrentGameState();
	if (!(currentState & getAllowedGameStates()))
		setState(false);
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

		// Rumble Controls
		ImGui::Begin("Rumble Options", 0, ImVec2(400, 300), 0.75f);

		ImGui::InputFloat("Item Give Rate", &itemGiveRate, 0.5f, 1.0f);

		ImGui::Combo("Select Item", &selectedRumbleIndex, rumbleItems, IM_ARRAYSIZE(rumbleItems));

		ImGui::Separator();

		//"Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado"
		// Boot
		if (selectedRumbleIndex == 0) {

		}
		else if (selectedRumbleIndex == 1) {

		}
		else if (selectedRumbleIndex == 2) {

		}
		// Magnet
		else if (selectedRumbleIndex == 3) {
			ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 1.0f);
			ImGui::InputFloat("Magnet Range", &magnetRange, 0.5f, 1.0f);
			ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

		}



		ImGui::End();

		{
			ImGui::SetNextWindowPos(ImVec2(420, 420), ImGuiSetCond_FirstUseEver);

			//ImGui::SetNextWindowSize(ImVec2(400, 400), ImGuiSetCond_FirstUseEver);
			ImGui::Begin("Inventory Management");

			ImGui::Text("Line Format: Chakram,EpicSaves,Sky Blue,");

			ImGui::Checkbox("Group Items by quantity.", &groupItems);

			if (ImGui::Button("Export Inventory")) {
				runInvExport = true;
				ImGui::OpenPopup("Exporting Inventory");

			}

			if (ImGui::BeginPopupModal("Exporting Inventory"))
			{
				ImGui::Text("Please wait, this could take some time...");

				if (ImGui::Button("Close") || inventoryExportDone) {
					ImGui::CloseCurrentPopup();
					inventoryExportDone = false;
				}
				ImGui::EndPopup();
			}

			if (ImGui::Button("Load Inventory Info")) {
				//TestClass::runConsoleCommand = true;


				// ProjectX.OnlineGameJoinGame_X.GenerateKeys
				/*
				SDK::FName randomFname = SDK::FName("GenerateKeys");
				SDK::UOnlineGameJoinGame_X* game = (SDK::UOnlineGameJoinGame_X*)Utils::GetInstanceOf(SDK::UOnlineGameJoinGame_X::StaticClass());
				std::cout << "fName at " << randomFname.GetName().c_str() << std::endl;
				if (game) {
				game->GotoState(randomFname, randomFname, true, true);
				std::cout << "Calling generate keys from player controller" << std::endl;
				}
				*/


			}
			ImGui::End();

		}

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

		if (runInvExport) {
			runInvExport = false;
			ExportInventory();
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
				else {
					printf("No AI Manager found.");
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

		// Start Rumble Settings Yo ++++++++++++++++++++++++++++++++++++++++++++++++++++++
		SDK::UGameEvent_Soccar_SubRules_Items_TA* itemRules = (SDK::UGameEvent_Soccar_SubRules_Items_TA*)localGameEvent->SubRules;
		if (itemRules && currItemGiveRate != itemGiveRate) {
			SDK::TArray< class SDK::UPlayerItemDispenser_TA* > itemDispensers = itemRules->ItemDispensers;
			for (int l = 0; l < itemDispensers.Num(); l++) {
				itemDispensers.GetByIndex(l)->ItemGiveRate = itemGiveRate;
			}
		}
		else {
		}

		if (itemRules) {
			SDK::TArray< class SDK::UPlayerItemDispenser_TA* > itemDispensers = itemRules->ItemDispensers;

			for (int l = 0; l < itemDispensers.Num(); l++) {
				SDK::TArray< class SDK::ASpecialPickup_TA* > items = itemDispensers.GetByIndex(l)->ItemPool;
				for (int q = 0; q < items.Num(); q++)
				{
					if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallGravity_TA::StaticClass())) {
						// Check if magnet settings have changed
						SDK::ASpecialPickup_BallGravity_TA* magnet = (SDK::ASpecialPickup_BallGravity_TA*)items.GetByIndex(q);
						if (!Utils::FloatCompare(magnet->Range, magnetRange)) {
							magnet->Range = magnetRange;
						}
						if (!Utils::FloatCompare(magnet->BallGravity, magnetBallGravity)) {
							magnet->BallGravity = magnetBallGravity;
						}
						if (magnet->bDeactivateOnTouch != magnetDeactivateOnTouch) {
							magnet->bDeactivateOnTouch = magnetDeactivateOnTouch;
						}
					}

				}
			}
		}

		// End Rumble Settings Yo ++++++++++++++++++++++++++++++++++++++++++++++++++++++

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