#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"


TestClass::TestClass(){}
TestClass::~TestClass(){}

void TestClass::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}

void TestClass::ChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {
	printf("%s\n",function->GetFullName());
	((SDK::ACar_TA*)object)->bDoubleJumped = 0;
}