#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include "../../Libs/DirectX9/d3dx9.h"
#include <functional>
#include "../../Vector/Vector3D.h"
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

void TestClass::onPostRender(SDK::UObject** object,SDK::UFunction* function,void* parameters) {
	printf("post render begin");
	SDK::UGameViewportClient_PostRender_Params* temp = (SDK::UGameViewportClient_PostRender_Params*) parameters;
	SDK::APlayerController* pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());


	SDK::AGameEvent_TA* gameEvent = (SDK::AGameEvent_TA*)Utils::GetInstanceOf(SDK::AGameEvent_TA::StaticClass());
	if (temp != NULL && temp->Canvas != NULL && pDevice != NULL && pPlayerController != NULL && gameEvent != NULL) {
		for (int i = 0; i < gameEvent->Cars.Num(); i++) {
			SDK::ACar_TA* car = gameEvent->Cars[i];

			printf("Carbounds origin %f:%f:%f \n", car->Location.X, car->Location.Y, car->Location.Z);

			//Vec::Vector3D carBoundsOrigin = Vec::VecUtils::WorldToScreen(currentCanvas, pPlayerController, car->Location);
			SDK::FVector _carBoundsOrigin = Vec::VecUtils::CalculateScreenCoordinate(currentCanvas, car->Location, pPlayerController);
			Vec::Vector3D carBoundsOrigin(0, 0, 0);
			carBoundsOrigin.x = _carBoundsOrigin.X;
			carBoundsOrigin.y = _carBoundsOrigin.Y;
			carBoundsOrigin.z = _carBoundsOrigin.Z;

			printf("Carbounds origin2 %f:%f:%f \n", carBoundsOrigin.x, carBoundsOrigin.y);


			D3DVIEWPORT9 viewP;
			pDevice->GetViewport(&viewP);
			DWORD ScreenCenterX = viewP.Width / 2;
			DWORD ScreenCenterY = viewP.Height / 2;

			// draw cross at car
			DWORD CarCenterX = carBoundsOrigin.x;
			DWORD CarCenterY = carBoundsOrigin.y;
			D3DRECT rec1 = { CarCenterX - 35, CarCenterY, CarCenterX + 35, CarCenterY + 1 };
			D3DRECT rec2 = { CarCenterX, CarCenterY - 35, CarCenterX + 1,CarCenterY + 35 };

			if (CarCenterX > 36 && CarCenterY > 36 && CarCenterX + 35 < viewP.Width && CarCenterY + 35 < viewP.Height) {

				pDevice->Clear(1, &rec1, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 255, 255), 0, 0);//purple
				pDevice->Clear(1, &rec2, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 255, 255), 0, 0);
			}


			// draw cross in middle of screen
			D3DRECT rec4 = { ScreenCenterX - 35, ScreenCenterY, ScreenCenterX + 35, ScreenCenterY + 1 };
			D3DRECT rec5 = { ScreenCenterX, ScreenCenterY - 35, ScreenCenterX + 1,ScreenCenterY + 35 };
			pDevice->Clear(1, &rec4, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 255, 255), 0, 0);//purple
			pDevice->Clear(1, &rec5, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 255, 255), 0, 0);


			/*delete &rec1;
			delete &rec2;
			delete &rec4;
			delete &rec5;
			*/
		}
	}
}

void TestClass::onDX9RenderTick(IDirect3DDevice9* Device) {
	pDevice = Device;
}

void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
void TestClass::onCarTick(SDK::UObject** object,SDK::UFunction* funct,void* params) {
	currentCar = (SDK::ACar_TA*)*object; 
}