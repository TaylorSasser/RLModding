#include "TestClass.h"
#include "../../Utils/Utils.h"
#include "../../DrawManager/DrawManager.hpp"
#include "../../Libs/detours.h"

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {}
TestClass::~TestClass() {}

void __fastcall execSignRequest(SDK::UObject**, void*, Utils::FFrame&, void*);
typedef void (__fastcall *Native)(SDK::UObject**, void* edx,Utils::FFrame&,void*);

Native OldSignRequest;

void TestClass::onEnable() {
	printf("Test class enabled \n");
	auto fn = UObject::FindObject<UFunction>("Function ProjectX.Aws4Signature_X.SignRequest");
	printf("Function Address %p \n",fn->Func);
	OldSignRequest = (Native)DetourFunction((PBYTE)fn->Func,(PBYTE)execSignRequest);
}


void __fastcall execSignRequest(SDK::UObject** pCallObject,void* edx, Utils::FFrame& frame, void* RESULT_DECL) {
	printf("Sign Request called");
	OldSignRequest(pCallObject,edx,frame,RESULT_DECL);
}
<<<<<<< HEAD
void TestClass::onDisable() {
	printf("Test class disabled\n");
	DetourRemove((PBYTE)OldSignRequest,(PBYTE)execSignRequest);
=======
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
>>>>>>> b10d2542b868273eecaedb99d935e2de5c70f679
}