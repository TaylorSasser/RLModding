#include "TestClass.h"
#include <iostream>


TestClass::TestClass(){

}


TestClass::~TestClass(){
}

void TestClass::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}

void TestClass::ChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {
	printf("Address of FString : %p",((SDK::APlayerController_TA_Say_TA_Params*)parameters)->Message);
}