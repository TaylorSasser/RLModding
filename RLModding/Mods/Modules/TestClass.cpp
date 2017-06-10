#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include <d3d9.h>


TestClass::TestClass(){}
TestClass::~TestClass(){}

void TestClass::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}

void TestClass::ChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {
	printf("%s\n",function->GetFullName());
	((SDK::ACar_TA*)object)->bDoubleJumped = 0;
}

/*void TestClass::DX9RenderTick(IDirect3DSurface9* Device) {


}*/