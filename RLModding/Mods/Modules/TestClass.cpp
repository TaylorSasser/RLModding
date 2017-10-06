#include "TestClass.h"
#include "../../Utils/Utils.h"
#include "../../DrawManager/DrawManager.hpp"
#include "../../Libs/detours.h"
#include "../Controllers/XboxController.h"

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {}
TestClass::~TestClass() {}

void TestClass::DrawMenu() {
	if (TestClass::isEnabled()) {
		{
			ImGui::SetNextWindowPos(ImVec2(420, 420), ImGuiSetCond_FirstUseEver);

			ImGui::Begin("Test Stuff", &p_open);

			ImGui::Text("To enable new party system you must click 'Create Party' first.");

			if (ImGui::Button("Enable new party system.")) {
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

		}

	}
}

void TestClass::onEnable() {
	std::cout << "Test Class Enabled" << std::endl;
	//Works but crashes because of stack corrupted memory, -> cause ZeroMemory in Controller class
	/*
	XboxController player(1);
	if (player.IsConnected()) {
		player.Vibrate(65535, 0);
	}
	*/
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
		features->Party = false;
		features->PsyNetParty = true;
		features->CrossPlatformPrivateMatch = true;
		features->SpecialEvents = true;
		features->Spectator = true;

		UGFxShell_TA* gfx = reinterpret_cast<SDK::UGFxShell_TA*>(Utils::GetInstanceOf(UGFxShell_TA::StaticClass()));
		//gfx->UpdateAprilConfig();
		//gfx->bAprilFoolsRankedIcons = true;
		//gfx->AprilConfig->bChangeRankedIcons = true;

		//gfx->UpdateAprilConfig();

		UOnlineGameParty_X* party = reinterpret_cast<SDK::UOnlineGameParty_X*>(Utils::GetInstanceOf(UOnlineGameParty_X::StaticClass()));
		party->Config->bAllowPsyNetParty = true;
		//party->HandlePartyConfigChanged();
		//party->PartyConfig->bAllowPsyNetParty = true;
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


void TestClass::onDisable() {
	std::cout << "Test Class Disabled" << std::endl;

}