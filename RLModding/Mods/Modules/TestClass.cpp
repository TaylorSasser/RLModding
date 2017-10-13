#include "TestClass.h"
#include "../../Utils/Utils.h"
#include "../../DrawManager/DrawManager.hpp"
#include "../../Libs/detours.h"
#include "../Interfaces/Interfaces.h"

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
		//party->Config->bAllowPsyNetParty = true;
		//party->HandlePartyConfigChanged();
		//party->PartyConfig->bAllowPsyNetParty = true;
		//party->InitLobbyInterfaces();
		//party->SetLobbyInterface(party->PlatformLobbyInterface);


		//if (party->ShouldCreatePsyNetParty()) std::cout << " PSYNET HADJHSDFGFG" << std::endl;
		//party->ShowInviteUI(0);
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
}

void TestClass::onBallHit(Event* e) {
	if (e->getUFunction()->ScriptText != nullptr)
		std::cout << "Script Text : " << e->getUFunction()->ScriptText->Text.ToString() << std::endl;
	else
		std::cout << "Script Text buffer is null" << std::endl;

	if (e->getUFunction()->CPPText != nullptr)
		std::cout << "CPP Text : " << e->getUFunction()->CPPText->Text.ToString() << std::endl;
	else
		std::cout << "CPP Text buffer is null" << std::endl;
}


void TestClass::onMenuClose() {
	std::cout << "Test Class Disabled" << std::endl;

}