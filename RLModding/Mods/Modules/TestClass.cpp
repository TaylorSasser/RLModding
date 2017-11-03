#include "TestClass.h"
#include "../../Utils/Utils.h"
#include "../../DrawManager/DrawManager.hpp"
#include "../../Libs/detours.h"
#include "../Interfaces/Interfaces.h"
#include "../Interfaces/InstanceStorage.h"
#include <PicoSHA256/picosha2.h>
#pragma comment(lib, "Winmm.lib")

TestClass::TestClass(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
TestClass::~TestClass() {}

void TestClass::DrawMenu() {
	if (TestClass::isEnabled()) {
		{
			ImGui::SetNextWindowPos(ImVec2(420, 420), ImGuiSetCond_FirstUseEver);

			ImGui::Begin("Test Stuff", &p_open);

			ImGui::Text("To enable new party system you must click 'Create Party' first.");

			if (ImGui::Button("Disable new party system.")) {
				testNewPartySystem = true;
			}
			if (ImGui::Button("Engine Tests.")) {
				runEngineTests = true;
			}
			if (ImGui::Button("DataStore Dump")) {
				dumpStore = true;
			}
			if (ImGui::Button("Alloc")) {
				alloc = true;
			}

			if (ImGui::Button("Test Web Request")) {
				webRequestTest = true;
			}


			if (ImGui::Button("Blog Test")) {
				tileTest = true;
			}

			if (ImGui::Button("PRI Test")) {
				priTest = true;
			} ImGui::SameLine();

			if (ImGui::Button("GUI Test")) {
				guiTest = true;
			}

			if (!p_open) {
				this->enabled = false;
				p_open = true;
			}
			ImGui::End();

			/*
			unsigned char ram[0x1000] = { 0 };
			if ((ImGui::GetFrameCount() % 60) == 0)
			for (int n = 0; n < 0x1000; n++)
			ram[n] = ((n % 16) << 4) | ((ram[n] + 1) & 0x0F);

			ImGui::Begin("Memory Editor");
			mem_edit.DrawContents(ram, sizeof(ram));
			ImGui::End();
			*/
		}

	}
}

void TestClass::onMenuOpen() {
	std::cout << "Test Class Enabled" << std::endl;

}

void TestClass::onMainMenuTick(Event* e) {

	if (tileTest) {
		UGFxData_Community_TA* gfx = (UGFxData_Community_TA*)Utils::GetInstanceOf(UGFxData_Community_TA::StaticClass());
		UBlogTiles_X* blog = (UBlogTiles_X*)Utils::GetInstanceOf(UBlogTiles_X::StaticClass());
		if (blog) {
			TArray<class UBlogTile_X*> CarouselTiles = blog->CarouselTiles;
			for (int i = 0; i < CarouselTiles.Num(); i++) {
				if (CarouselTiles.IsValidIndex(i)) {
					std::cout << CarouselTiles[i]->Title.ToString() << std::endl;
					std::cout << CarouselTiles[i]->Description.ToString() << std::endl;
					if (std::cout << CarouselTiles[i]->WebURL.IsValid()) std::cout << CarouselTiles[i]->WebURL.ToString() << std::endl;
					if (std::cout << CarouselTiles[i]->ImageURL.IsValid()) std::cout << CarouselTiles[i]->ImageURL.ToString() << std::endl;
					if (std::cout << CarouselTiles[i]->CarName.IsValid()) std::cout << CarouselTiles[i]->CarName.ToString() << std::endl;
				}
			}
		}
		gfx->ShowHelp();
	}
	



	if (guiTest) {
		//UGFxData_Settings_TA* settings = reinterpret_cast<SDK::UGFxData_Settings_TA*>(Utils::GetInstanceOf(UGFxData_Settings_TA::StaticClass()));
		USaveData_TA* saveData = reinterpret_cast<SDK::USaveData_TA*>(Utils::GetInstanceOf(USaveData_TA::StaticClass()));

		if (saveData) {
			SDK::UOnlineSubsystemSteamworks* steam = reinterpret_cast<SDK::UOnlineSubsystemSteamworks*>(Utils::GetInstanceOf(SDK::UOnlineSubsystemSteamworks::StaticClass()));
			if (steam) {
				std::cout << "Found steam data" << std::endl;
				FUniqueNetId newId = steam->LoggedInPlayerId;
				UProfile_TA* profile = saveData->GetProfileForPlayer(newId);
				if (profile) {
					std::cout << profile->ProfileName.ToString() <<std::endl;
				}
			}


			/*
			std::cout << "Assist enabled: " << settings->Profile->GetAimAssistEnabled() << std::endl;
			std::cout << "traj enabled: " << settings->Profile->GetAimAssistTrajectoryEnabled() << std::endl;
			settings->Profile->SetAimAssistTrajectoryLocked(false);
			settings->Profile->SetAimAssistLevelOverride(settings->Profile->CurrentLevel);

			settings->Profile->SetAimAssistEnabled(true);
			settings->Profile->SetAimAssistTrajectoryEnabled(true);
			
			settings->Profile->bAimAssistEnabled = 1.0f;
			settings->Profile->bAimAssistTrajectoryEnabled = 1.0f;
			settings->Profile->bAimAssistTrajectoryLocked = 0.0f;
			settings->Profile->MaxAimAssistLevelOverride = 2000;
			//settings->Profile->Save();

			TArray<class UGFxData_UserSetting_TA*> userSettings = settings->UserSettings;
			for (int i = 0; i < userSettings.Num(); i++) {
				std::cout << "Group: " << userSettings[i]->Group.GetName() << ",";
				std::cout << "ID: " << userSettings[i]->Id.GetName() << ",";
				if(userSettings[i]->Label.IsValid()) 
					std::cout << "Label: " << userSettings[i]->Label.ToString() << ",";
				if (userSettings[i]->Description.IsValid())
					std::cout << "Description: " << userSettings[i]->Description.ToString() << ",";
				if (userSettings[i]->Values.IsValid())
					std::cout << "Values: " << userSettings[i]->Values.ToString() << ",";
				if (userSettings[i]->Value.IsValid())
					std::cout << "Value: " << userSettings[i]->Value.ToString() << ",";
				std::cout << std::endl;

			}

			//settings->GetAimAssistTrajectoryEnabled(currTrajSetting);
			
			FScriptDelegate tempSet;
			FScriptDelegate tempGet;
			UGFxData_UserSetting_TA* tempSetting = settings->CreateBooleanUserSetting(FName("GeneralGameplay"), FName("AimAssistTrajectoryEnabled"), true, currTrajSetting->__OnBooleanValueGet__Delegate, currTrajSetting->__OnBooleanValueSet__Delegate, true, true);
			//tempSetting.Group = FName("GeneralGameplay");
			//tempSetting.Id = FName("AimAssistTrajectoryEnabled");
			//tempSetting.Label = FString(L"Enable Trajectory");

			settings->GetAimAssistTrajectoryEnabled(tempSetting);
			if (tempSetting->Label.IsValid())
				std::cout << "Traj label: " << tempSetting->Label.ToString() << std::endl;
			else
				std::cout << "no trajectory label found." << std::endl;
			std::cout << "Traj id: " << tempSetting->Id.GetName() << std::endl;

			settings->SetAimAssistTrajectoryEnabled(tempSetting, true);
			*/
		}

		/*
		UGFxData_GameEvent_TA* gameEventGfx = reinterpret_cast<SDK::UGFxData_GameEvent_TA*>(Utils::GetInstanceOf(UGFxData_GameEvent_TA::StaticClass()));

		if (gameEventGfx) {
		//std::cout << "Found shell: " << shell->Movies.Num() << "," << shell->Movies[0]->CaptureScenes.Num() << std::endl;
		std::cout << "game state: " << gameEventGfx->GameState.GetName() << std::endl;
		}
		
		//UGFxData_Settings_TA
		UGFxShell_TA* shell = reinterpret_cast<SDK::UGFxShell_TA*>(Utils::GetInstanceOf(UGFxShell_TA::StaticClass()));

		if (shell) {
			std::cout << "Found shell: " << shell->Movies.Num() << "," << shell->Movies[0]->InputScenes[0].ToString() << std::endl;
			//std::cout << "shell state: " << shell->SystemData->UIState.ToString() << ", active models: " << shell->ActiveModals.Num() << std::endl;

			//shell->ShowKeyboard(FString(L"Title This"), FString(L"Desc is noadsjgksjglkdjfg"), false, FString(L"words"), 20);
		}

		AGameInfo_GFxMenu_TA* menu = reinterpret_cast<SDK::AGameInfo_GFxMenu_TA*>(Utils::GetInstanceOf(AGameInfo_GFxMenu_TA::StaticClass()));

		if (menu) {
			//std::cout << "Found shell: " << shell->Movies.Num() << "," << shell->Movies[0]->CaptureScenes.Num() << std::endl;
			std::cout << "menu state: " << menu->MenuSequencer->Sequences.Num() << ", active models: " << menu->MenuSequencer->CurrentSequence->CameraState.GetName() << std::endl;
		}

		AGFxHUD_TA* hud = reinterpret_cast<SDK::AGFxHUD_TA*>(Utils::GetInstanceOf(AGFxHUD_TA::StaticClass()));
		
		if (hud) {
			UGFxData_Chat_TA* chatData = hud->ChatData;
			std::cout << hud->PartyChatTitle.ToString() << std::endl;
		}
		*/
		guiTest = false;
	}

	if (webRequestTest) {

		UOnlineSubsystemSteamworks* steam = reinterpret_cast<UOnlineSubsystemSteamworks*>(Utils::GetInstanceOf(UOnlineSubsystemSteamworks::StaticClass()));
		if (steam) {
			steamID = steam->LoggedInPlayerId.SteamID;
			hardwareID = "1234567a";
		}

		//UCheatManager* cheatManager = (SDK::UCheatManager*)Utils::GetInstanceOf(SDK::UCheatManager::StaticClass());
		//cheatManager->InitCheatManager();
		//cheatManager->TestHttp(FString(L"GET"), FString(L"test=test"), FString(L"127.0.0.1/rl/test.php"), true);

		//std::string stringURL = "http://127.0.0.1/rl/test.php";

		std::string nonce = std::to_string(steamID) + hardwareID + std::to_string(time(NULL)) + "butterlol";
		std::string hashed_string;
		picosha2::hash256_hex_string(nonce, hashed_string);
		std::cout << hashed_string << std::endl;

		std::string stringURL = "http://hack.fyi/rl/servers/test_post.php?steamid=" + std::to_string(steamID) + "&hardwareid=" + hardwareID + "&time=" + std::to_string(time(NULL)) + "&n=" + hashed_string;
		std::cout << stringURL << std::endl;
		SDK::FString URL = Utils::to_fstring(stringURL);

		
		SDK::UHttpResponseInterface* anyResponseInterface = (SDK::UHttpResponseInterface*)Utils::GetInstanceOf(SDK::UHttpResponseInterface::StaticClass());
		SDK::UWebRequest_X* oldWebRequest = (SDK::UWebRequest_X*)Utils::GetInstanceOf(SDK::UWebRequest_X::StaticClass());
		//*mainWebRequest = *oldWebRequest;
		
		std::string params = "steamid=" + std::to_string(steamID) + "&hardwareid=" + hardwareID + "&time=" + std::to_string(time(NULL)) + "&n=" + hashed_string;
		std::string response = Utils::SendPostRequest("192.185.67.238", "hack.fyi", "/rl/servers/post_test.php", params);
		std::cout << "Response Content Received: '" << Utils::RemoveSpaces(response.substr(response.find("\r\n\r\n"))) << "'\n";
	
		

		if (false && oldWebRequest) {
			mainWebRequest = oldWebRequest->STATIC_Create();

			//anyRequestInterface->SetVerb(Utils::to_fstring("GET"));
			//anyRequestInterface->SetURL(URL);
			//anyRequestInterface->SetContentAsString(Utils::to_fstring("test=test"));

			//anyRequestInterface->SetProcessRequestCompleteDelegate(anyRequestInterface->__OnProcessRequestComplete__Delegate);
			//anyRequestInterface->OnProcessRequestComplete(anyRequestInterface, anyResponseInterface, true);
			//anyRequestInterface->ProcessRequest();
			//Create a request
			//webRequest->URL = URL;
			//webRequest->HTTPRequest = anyRequestInterface;
			//webRequest->HttpResponse = anyResponseInterface;

			//webRequest->ConstructHttpRequest();

			/*
			TArray<struct FString> headers = anyRequestInterface->GetHeaders();
			for (int i = 0; i < headers.Num(); i++) {
			std::cout << "Header: " << headers[i].ToString() << std::endl;
			}
			*/

			//std::cout << "etag: " << webRequest->GetETag().ToString() << std::endl;
			//webRequest->HTTPRequest = anyRequestInterface;
			//webRequest->HttpResponse = anyResponseInterface;

			//webRequest->bZipRequest = false;
			//webRequest->bZipResponse = false;
			//webRequest->RequestState = EWebRequestState::WebRequestState_PendingSend;
			//mainWebRequest->STATIC_Create();
			UOnlineGameLanServer_X* LAN_Server = reinterpret_cast<SDK::UOnlineGameLanServer_X*>(Utils::GetInstanceOf(UOnlineGameLanServer_X::StaticClass()));
			std::cout << "Port: " << LAN_Server->GetPort() << std::endl;
			std::cout << "External Address: " << LAN_Server->GetExternalHostAddress(true).ToString() << std::endl;
			std::cout << "Local Address: " << LAN_Server->GetLocalHostAddress(true).ToString() << std::endl;

			mainWebRequest->RequestState = EWebRequestState::WebRequestState_PendingSend;
			//mainWebRequest->PrepareRequest(URL);
			//mainWebRequest->StringContent = FString(L"steamid=myID");
			//std::cout << "String Content: " << mainWebRequest->StringContent.ToString() << std::endl;
			//Request.HTTPRequest->SetVerb(Utils::to_fstring("GET"));
			//Request.HTTPRequest->SetURL(URL);
			//webRequest->HandleHttpRequestComplete(webRequest->HTTPRequest, anyResponseInterface, true);
			mainWebRequest->Send(URL, mainWebRequest->__EventCompleted__Delegate);
			//Request.HTTPRequest->SetVerb(Utils::to_fstring("GET"));
			//Request.HTTPRequest->SetURL(URL);



			//std::cout << "Response Data: " << webRequest->HttpResponse->GetContentLength() << std::endl;

		}
		else {
			/*
			SDK::UHttpRequestInterface* request = (SDK::UHttpRequestInterface*)Utils::GetInstanceOf(SDK::UHttpRequestInterface::StaticClass());
			request->SetURL(URL);
			request->SetProcessRequestCompleteDelegate(request->__OnProcessRequestComplete__Delegate);
			request->OnProcessRequestComplete(request, anyResponseInterface, true);
			request->ProcessRequest();
			*/
			//std::cout << "No request found." << std::endl;
		}
		webRequestTest = false;
	}

	if (alloc) {
		//TArray<ACar_TA*> type;
		TArray<ACar_TA*>* cars; //= Interfaces::Memory().AllocUObject<TArray<ACar_TA*>>(&type, "debugger");
		cars = new TArray<ACar_TA*>();
		printf("Debug: 0x%x\n", cars);
		ACar_TA* car = new ACar_TA();
		printf("Debug: 0x%x\n", car);
		printf("Size = %d\n", cars->Num());
		cars->Add(car);
		printf("Size = %d\n", cars->Num());
		alloc = false;

	}

	if (runEngineTests) {
		UGameEngine_TA* engine = (UGameEngine_TA*)UGameEngine_TA::FindObject<UGameEngine_TA>("GameEngine_TA Transient.GameEngine_TA_1");
		engine->bEnableKismetLogging = true;
		engine->bEnableOnScreenDebugMessages = true;
		engine->bEnableOnScreenDebugMessagesDisplay = true;

		runEngineTests = false;
	}

	if (testNewPartySystem) {

		UFeatureSystem* features = reinterpret_cast<SDK::UFeatureSystem*>(Utils::GetInstanceOf(UFeatureSystem::StaticClass()));
		features->Party = true;
		features->PsyNetParty = false;
		features->CrossPlatformPrivateMatch = true;
		features->SpecialEvents = true;
		features->Spectator = true;

		UGFxShell_TA* gfx = reinterpret_cast<SDK::UGFxShell_TA*>(Utils::GetInstanceOf(UGFxShell_TA::StaticClass()));
		//gfx->UpdateAprilConfig();
		//gfx->bAprilFoolsRankedIcons = true;
		//gfx->AprilConfig->bChangeRankedIcons = true;

		//gfx->UpdateAprilConfig();

		UOnlineGameParty_X* party = reinterpret_cast<SDK::UOnlineGameParty_X*>(Utils::GetInstanceOf(UOnlineGameParty_X::StaticClass()));
		/*
		if (party->RankedConfig) {
		std::cout << "FPOUDBNT IT." << std::endl;
		for (int i = 0; i < party->RankedConfig->SeasonRewardRequiredWinsPerLevel.Num(); i++) {
		std::cout << party->RankedConfig->SeasonRewardRequiredWinsPerLevel[i] << std::endl;
		party->RankedConfig->SeasonRewardRequiredWinsPerLevel[i] = 1;
		}

		}
		else {
		std::cout << "no ranked found." << std::endl;
		}
		*/
		//party->Config->bAllowPsyNetParty = true;
		//party->HandlePartyConfigChanged();
		//party->PartyConfig->bAllowPsyNetParty = true;
		//party->InitLobbyInterfaces();
		//party->SetLobbyInterface(party->PlatformLobbyInterface);

		party->SetLobbyInterfacePsyNet();
		//if (party->ShouldCreatePsyNetParty()) std::cout << " PSYNET HADJHSDFGFG" << std::endl;
		party->ShowInviteUI(0);
		//UGFxData_LocalPlayer_TA* localPlayer = reinterpret_cast<SDK::UGFxData_LocalPlayer_TA*>(Utils::GetInstanceOf(UGFxData_LocalPlayer_TA::StaticClass()));
		//localPlayer->ChangeName(FString(L"THIS ISS MY NEW NAME"));

		//InstanceStorage::MenuController()->ServerChangeName(FString(L"THIS ISS MY NEW NAME"));

		//gfx->OpenFriendsList();
		//gfx->ShowLoginUI(0);
		testNewPartySystem = false;
	}
	if (!created) {
		player = XboxController(1);
		created = true;
	}
	if (player.IsConnected()) {
		if (player.GetState().Gamepad.wButtons & XINPUT_GAMEPAD_START) {
			Interfaces::GUI().isGUIOpen = !Interfaces::GUI().isGUIOpen;
			Sleep(200);
		}

	}
	if (dumpStore) {
		UGFxDataStore_X* store = (UGFxDataStore_X*)(Utils::GetInstanceOf(UGFxDataStore_X::StaticClass()));


		if (store) {
			TArray<struct FGFxDataStoreTable> t = store->Tables;
			for (int i = 0; i < t.Num(); i++) {
				std::cout << "\n" << t.GetByIndex(i).Name.GetName() << std::endl;
				TArray<struct FGFxDataStoreColumn> columns = t.GetByIndex(i).Columns;
				std::cout << "Columns:\n";
				for (int j = 0; j < columns.Num(); j++) {
					std::cout << columns.GetByIndex(j).Name.GetName() << std::endl;
				}

			}
			std::cout << "TRYING NEW THINGS" << std::endl;
			//store->PrintData(FName("Shell"));
			/*
			for (int i = 0; i < t.Num(); i++) {
				std::cout << "\n" << t.GetByIndex(i).Name.GetName() << std::endl;
				if (t.GetByIndex(i).Name.GetName().compare("Shell") == 0) {
					TArray<struct FGFxDataStoreRow> row = t.GetByIndex(i).Rows;
					std::cout << "Columns:\n";
					for (int j = 0; j < row.Num(); j++) {
						TArray<struct FASValue> values = row.GetByIndex(j).Values;
						for (int k = 0; k < values.Num(); k++) {
							if(values.GetByIndex(k).Type == EASType::AS_Boolean)
								std::cout << values.GetByIndex(k).S.ToString() << std::endl;

						}
						//if (columns.GetByIndex(j).Name.GetName().compare("")) {}
					}
				}
				

			}
			*/
			//AGFxHUD_TA* currentHUD = (AGFxHUD_TA*)(Utils::GetInstanceOf(AGFxHUD_TA::StaticClass()));

			/*
			int row = store->GetObjectRow(currentHUD->PRIData[i]);

			store->SetStringValue(FName("PlayerInfo"), row, FName("PlayerName"), FString(L"AC > Rocket Launcher"));
			*/
		}


		dumpStore = false;
	}

}

void TestClass::onBallHit(Event* e) {
	/*if (e->getUFunction()->ScriptText != nullptr)
	std::cout << "Script Text : " << e->getUFunction()->ScriptText->Text.ToString() << std::endl;
	else
	std::cout << "Script Text buffer is null" << std::endl;

	if (e->getUFunction()->CPPText != nullptr)
	std::cout << "CPP Text : " << e->getUFunction()->CPPText->Text.ToString() << std::endl;
	else
	std::cout << "CPP Text buffer is null" << std::endl;


	APlayerController_TA* controller = reinterpret_cast<APlayerController_TA*>(InstanceStorage::PlayerController());
	if (controller) {
		controller->PRI->GetTeamNum() == 0 ? controller->PRI->ServerChangeTeam(1) : controller->PRI->ServerChangeTeam(0);
	}
	*/
}

void TestClass::onWebRequestEventCompleted(Event* e) {
	UWebRequest_X* webRequest = reinterpret_cast<SDK::UWebRequest_X*>(e->getParams<SDK::UWebRequest_X_EventCompleted_Params>()->Request);
	std::cout << "WebRequest Event called: " << webRequest->URL.ToString() << std::endl;
	if (webRequest->URL.ToString().compare("http://hack.fyi/rl/servers/test.php?steamid=" + std::to_string(steamID)) == 0) {
		std::cout << "Response Data Length: " << webRequest->HttpResponse->GetContentLength() << std::endl;
		if (webRequest->HttpResponse->GetContentAsString().IsValid())
			std::cout << "Response Data: " << webRequest->HttpResponse->GetContentAsString().ToString() << std::endl;

		mainWebRequest = webRequest->STATIC_Create();
	}
}

void TestClass::onPlayerTick(Event* e) {
	

	if (guiTest) {
		//InstanceStorage::PlayerController()->Car->ThrottleShake->PlayShake();

		InstanceStorage::GameEvent()->bDisableAimAssist = 0.0f;
		UAimAssistComponent_TA* assist = SDK::UObject::FindObject<SDK::UAimAssistComponent_TA>("AimAssistComponent_TA TAGame.Default__AimAssistComponent_TA");
		if (assist) {
			InstanceStorage::PlayerController()->AimAssist = assist;
			InstanceStorage::PlayerController()->AimAssist->SetEnableAll(true);
			InstanceStorage::PlayerController()->AimAssist->SetEnabled(true);
			InstanceStorage::PlayerController()->AimAssist->bForceDisabled = 0.0f;

			UProfile_TA* tempProfile;
			InstanceStorage::PlayerController()->AimAssist->HandleAimAssistEnabledChanged(tempProfile);
			tempProfile->bAimAssistEnabled = 1.0f;
			tempProfile->bAimAssistTrajectoryEnabled = 1.0f;
			tempProfile->bAimAssistTrajectoryLocked = 0.0f;
			tempProfile->MaxAimAssistLevelOverride = 2000;

			std::cout << "Found aim assit" << std::endl;
		}
		if (InstanceStorage::PlayerController()->AimAssist) {
			std::cout << "Ball distance to ground: " << InstanceStorage::PlayerController()->AimAssist->BallDistanceToGround << std::endl;
		}


		guiTest = false;
	}

	AGFxHUD_TA* hud = reinterpret_cast<SDK::AGFxHUD_TA*>(Utils::GetInstanceOf(AGFxHUD_TA::StaticClass()));
	if (hud && priTest) {
		FUniqueNetId newId;
		newId.SteamID = 76561198337775218;
		UGFxData_PRI_TA* gfxData = hud->GetPRIDataFromID(newId);
		if (gfxData->PlayerName.IsValid())
			std::cout << gfxData->PlayerName.ToString() << std::endl;
		else
			std::cout << "Name not found." << std::endl;
		priTest = false;
	}

	/*ACar_TA* myCar = InstanceStorage::PlayerController()->Car;
	if (myCar) {
		if (myCar->AnyWheelTouchingGround() && inAir) {
			// https://stackoverflow.com/questions/22253074/how-to-play-or-open-mp3-or-wav-sound-file-in-c-program
			std::cout << "Car has landed." << std::endl;
			mciSendStringA("close mp3", NULL, 0, NULL);

			mciSendStringA("open \"landing.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

			mciSendStringA("play mp3", NULL, 0, NULL);
			//mciSendStringA("play mp3 from 0", NULL, 0, NULL);

			inAir = false;
		}
		else if(!myCar->AnyWheelTouchingGround()){
			inAir = true;
		}
	}*/

}

void TestClass::onHttpProcessRequestComplete(Event* e) {
	UHttpResponseInterface* response = reinterpret_cast<SDK::UHttpResponseInterface*>(e->getParams<SDK::UHttpRequestInterface_OnProcessRequestComplete_Params>()->InHttpResponse);
	if (response) {
		std::cout << "response from dfsdf " << response->GetContentAsString().ToString() << std::endl;
	}

}

void TestClass::onMenuClose() {
	std::cout << "Test Class Disabled" << std::endl;

}

void TestClass::onCarEventLanded(Event* e) {

}

void TestClass::OnLANMatchCreate(Event* e) {
	std::cout << "Lan match has been created!\n";
}

void TestClass::OnLANMatchDestroy(Event* e) {
	std::cout << "Lan match has been destroyed!\n";
}

