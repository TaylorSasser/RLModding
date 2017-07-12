#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include "../../Libs/DirectX9/d3dx9.h"
#include <functional>
#include "../../Vector/Vector.hpp"
#include "../../Vector/VecUtils.h"

SDK::ACar_TA* currentCar = nullptr;
SDK::UCanvas* currentCanvas = nullptr;
IDirect3DDevice9* pDevice = nullptr;

Vec::Vector carBoundsOrigin(0, 0, 0);

TestClass::TestClass(std::string name, int key) : ModBase(name, key) {}
TestClass::~TestClass(){}

void TestClass::onEnable() {
	printf("Test class enabled \n");
	/*
	if (currentCanvas == nullptr || currentCar == nullptr) return;
	auto pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());

	Vec::Vector carBoundsOrigin = Vec::VecUtils::WorldToScreen(currentCanvas, pPlayerController, currentCar->CarMesh->Bounds.Origin);
	*/
}
void TestClass::onDisable() {printf("Test class disabled \n");}

void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::onPostRender(SDK::UObject** object,SDK::UFunction* function,void* parameters) {

	SDK::APlayerController* pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());


	SDK::AGameEvent_TA* gameEvent = (SDK::AGameEvent_TA*)Utils::GetInstanceOf(SDK::AGameEvent_TA::StaticClass());
	if (pDevice != NULL && pPlayerController != NULL && gameEvent != NULL) {
		for (int i = 0; i < gameEvent->Cars.Num(); i++) {
			SDK::ACar_TA* car = gameEvent->Cars[i];

			printf("Carbounds origin %f:%f:%f \n", car->Location.X, car->Location.Y, car->Location.Z);



			D3DVIEWPORT9 viewP;
			pDevice->GetViewport(&viewP);

			SDK::FVector _carBoundsOrigin = Vec::VecUtils::CalculateScreenCoordinate(car->Location, pPlayerController, viewP.Width, viewP.Height);
			
			// TODO now it just saves the last car
			carBoundsOrigin.x = _carBoundsOrigin.X;
			carBoundsOrigin.y = _carBoundsOrigin.Y;
			carBoundsOrigin.z = _carBoundsOrigin.Z;
		}
	}
}

void TestClass::onDX9RenderTick(IDirect3DDevice9* Device) {
	pDevice = Device;

	// draw cross at car
	D3DRECT rec1 = { carBoundsOrigin.x - 35, carBoundsOrigin.y, carBoundsOrigin.x + 35, carBoundsOrigin.y + 1 };
	D3DRECT rec2 = { carBoundsOrigin.x, carBoundsOrigin.y - 35, carBoundsOrigin.x + 1, carBoundsOrigin.y + 35 };

	pDevice->Clear(1, &rec1, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 255, 255), 0, 0);
	pDevice->Clear(1, &rec2, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 255, 255), 0, 0);

}

void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
void TestClass::onCarTick(SDK::UObject** object,SDK::UFunction* funct,void* params) {
	currentCar = (SDK::ACar_TA*)*object; 
}