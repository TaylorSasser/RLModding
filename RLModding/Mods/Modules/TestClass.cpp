#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include "../../Libs/DirectX9/d3dx9.h"
#include <functional>
#include "../../Vector/VecUtils.h"

SDK::ACar_TA* currentCar = nullptr;
SDK::UCanvas* currentCanvas = nullptr;
IDirect3DDevice9* pDevice = nullptr;

TestClass::TestClass(std::string name, int key) : ModBase(name, key) {}
TestClass::~TestClass(){}

void TestClass::onEnable() {
	printf("Test class enabled \n");
	/*
	if (currentCanvas == nullptr || currentCar == nullptr) return;
	auto pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());

	Vec::Vector3D carBoundsOrigin = Vec::VecUtils::WorldToScreen(currentCanvas, pPlayerController, currentCar->CarMesh->Bounds.Origin);
	*/
}
void TestClass::onDisable() {printf("Test class disabled \n");}

void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::onPostRender(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::onDX9RenderTick(IDirect3DDevice9* Device) {
	SDK::APlayerController* pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());
	SDK::ABall_TA* ball = (SDK::ABall_TA*)Utils::GetInstanceOf(SDK::ABall_TA::StaticClass());

	if (Device != nullptr && pPlayerController != NULL) {
			printf("Ball origin %f:%f:%f \n", ball->Location.X, ball->Location.Y, ball->Location.Z);

			D3DVIEWPORT9 viewP;
			Device->GetViewport(&viewP);

			SDK::FVector ballPOS = Vec::VecUtils::CalculateScreenCoordinate(ball->Location, pPlayerController,viewP.Width,viewP.Height);
			
			D3DRECT rec1 = { ballPOS.X,ballPOS.Y,ballPOS.X + 35,ballPOS.Y + 35 };
			if (rec1.x1 == 0 || rec1.y1 == 0) return;
			Device->Clear(1, &rec1, D3DCLEAR_TARGET, D3DCOLOR_XRGB(127,0,127), 0, 0);
	}
}

void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
void TestClass::onCarTick(SDK::UObject** object,SDK::UFunction* funct,void* params) {
	currentCar = (SDK::ACar_TA*)*object; 
}