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
void TestClass::onDisable() {
	printf("Test class disabled\n");
	DetourRemove((PBYTE)OldSignRequest,(PBYTE)execSignRequest);
}