#include "TestClass.h"
#include <iostream>
#include "Utils.h"


TestClass::TestClass(){

}


TestClass::~TestClass(){
}

void TestClass::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}

void TestClass::ChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {

	SDK::APlayerController_TA_Say_TA_Params NewParams;
	NewParams.Message  = SDK::FString(L"Nullpointer smells");
	NewParams.ChatChannel = SDK::EChatChannel::EChatChannel_Party;
	NewParams.bPreset = false;
	Utils::EditParams<SDK::APlayerController_TA_Say_TA_Params>(parameters,&NewParams);
}