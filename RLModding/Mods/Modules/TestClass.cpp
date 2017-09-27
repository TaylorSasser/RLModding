#include "TestClass.h"
#include "../../Utils/Utils.h"
#include "../../DrawManager/DrawManager.hpp"

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {}
TestClass::~TestClass() {}

void TestClass::onEnable() {
	TArray<unsigned char> Test;
	Test.Add('T');Test.Add('E');Test.Add('S');Test.Add('T');
	std::string data(reinterpret_cast<char*>(&Test[0u]));
	std::cout << data << std::endl;
}
void TestClass::onDisable() {}

void TestClass::onPlayerTATick(Event* e) {
	if (TestClass::isEnabled()) {
		if (InstanceStorage::GameEvent()) {
			SDK::TArray< class SDK::ATeam_TA* > gameTeams = ((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->Teams;
			// new team
			SDK::ATeam_TA* tempTeam = gameTeams.GetByIndex(0);
			tempTeam->TeamIndex = 2;
			tempTeam->TeamName = FString(L"Larry");
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SetTeam(2, tempTeam);
			((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->CreateTeams();

			AGFxHUD_TA* gui = (AGFxHUD_TA*)Utils::GetInstanceOf(AGFxHUD_TA::StaticClass());
			if (gui) {
				gui->SetTeam(tempTeam);
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