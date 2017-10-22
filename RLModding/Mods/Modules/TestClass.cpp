#include "TestClass.h"
#include "../../Utils/Utils.h"
#include "../../DrawManager/DrawManager.hpp"
#include "../../Libs/detours.h"
#include "../Interfaces/Interfaces.h"
#include "../Interfaces/InstanceStorage.h"

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {}
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
		std::cout << "CPP Text buffer is null" << std::endl;*/
	APlayerController_TA* controller = reinterpret_cast<APlayerController_TA*>(InstanceStorage::PlayerController());
	if (controller) {
		controller->PRI->GetTeamNum() == 0 ? controller->PRI->ServerChangeTeam(1) : controller->PRI->ServerChangeTeam(0);
	}
}


void TestClass::onMenuClose() {
	std::cout << "Test Class Disabled" << std::endl;

}