#include "TestClass.h"
#include <iostream>
#include "../../Utils/Utils.h"
#include "../../Libs/DirectX9/d3d9.h"
#include "../../Libs/DirectX9/d3dx9.h"
#include <functional>
#include "../../Vector/Vector.hpp"
#include "../../Vector/VecUtils.h"
#include "../../DrawManager/DrawManager.hpp"
#include "../../Libs/ImGUI/DX9/imgui_impl_dx9.h"

SDK::ACar_TA* currentCar = nullptr;
SDK::UCanvas* currentCanvas = nullptr;

Vec::Vector carBoundsOrigin(0, 0, 0);
float boostAmount = 0;

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
void TestClass::onDisable() {
	printf("Test class disabled \n");
}

void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}

void TestClass::onPostRender(SDK::UObject** object,SDK::UFunction* function,void* parameters) {

	SDK::APlayerController* pPlayerController = (SDK::APlayerController*)Utils::GetInstanceOf(SDK::APlayerController::StaticClass());
	SDK::ABall_TA* ball = (SDK::ABall_TA*)Utils::GetInstanceOf(SDK::ABall_TA::StaticClass());
	SDK::AGameEvent_TA* gameEvent = (SDK::AGameEvent_TA*)Utils::GetInstanceOf(SDK::AGameEvent_TA::StaticClass());

	if (pPlayerController != NULL) {

		DrawManager::Instance()->BeginRendering();

		// Draw ball location + circles each radius step below it until it reaches the ground
		if (ball != NULL) {

			SDK::FVector previousBall2DLocation = Vec::VecUtils::CalculateScreenCoordinate(ball->Location, pPlayerController);

			// Draw dot in middle of ball
			DrawManager::Instance()->AddCircleFilled(ImVec2(previousBall2DLocation.X, previousBall2DLocation.Y), 10, D3DCOLOR_ARGB(255, 127, 0, 127), 32);

			int real = ball->Location.Z;
			for (int i = 0; i < 30; i++) {
				ball->Location.Z = real - ball->Radius * i;

				if (ball->Location.Z < 0)
					continue;

				SDK::FVector ball2DLocation = Vec::VecUtils::CalculateScreenCoordinate(ball->Location, pPlayerController);
				
				if (ball2DLocation.X >= 0 && ball2DLocation.Y >= 0 && ball2DLocation.X <= 900 && ball2DLocation.Y <= 1600) {
					//DrawManager::Instance()->AddCircleFilled(ImVec2(ball2DLocation.X, ball2DLocation.Y), 10, D3DCOLOR_ARGB(255, 127, 0, 127), 32);
					DrawManager::Instance()->AddLine(ImVec2(previousBall2DLocation.X, previousBall2DLocation.Y), ImVec2(ball2DLocation.X, ball2DLocation.Y), ImColor(255, 127, 0, 127), 2.0f);
					previousBall2DLocation = ball2DLocation;
				}
			}

			ball->Location.Z = real;


			// Ball trajectory (shitty)
			SDK::FVector start = ball->GetTrajectoryStartLocation();
			SDK::FVector vel = ball->GetTrajectoryStartVelocity();
			SDK::FVector previousTrajectory2DLocation = Vec::VecUtils::CalculateScreenCoordinate(start, pPlayerController);
			SDK::FVector current = ball->GetTrajectoryStartLocation();
			for (int i = 0; i < 10; i++) {
				current.X = start.X + vel.X * i;
				current.Y = start.Y + vel.Y * i;
				current.Z = start.Z + vel.Z * i;

				SDK::FVector trajectory2DLocation = Vec::VecUtils::CalculateScreenCoordinate(current, pPlayerController);
				DrawManager::Instance()->AddLine(ImVec2(previousTrajectory2DLocation.X, previousTrajectory2DLocation.Y), ImVec2(trajectory2DLocation.X, trajectory2DLocation.Y), ImColor(0, 0, 255, 255), 2.0f);
			}
		}


		if (gameEvent != NULL) {
			for (int i = 0; i < gameEvent->Cars.Num(); i++) {
				SDK::ACar_TA* car = gameEvent->Cars[i];
				SDK::FVector car2DLocation = Vec::VecUtils::CalculateScreenCoordinate(car->Location, pPlayerController);
				std::string boostText = "boost: " + std::to_string((int)(100.0f * car->BoostComponent->CurrentBoostAmount));
				DrawManager::Instance()->AddText(ImVec2(car2DLocation.X - 2, car2DLocation.Y - 2), ImColor(255, 255, 255, 255), (text_flags)1, boostText.c_str());
				DrawManager::Instance()->AddText(ImVec2(car2DLocation.X, car2DLocation.Y), ImColor(255, 0, 0, 255), (text_flags)1, boostText.c_str());
			}
		}
	}
}
void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
void TestClass::onCarTick(SDK::UObject** object,SDK::UFunction* funct,void* params) {
	currentCar = (SDK::ACar_TA*)*object; 
}