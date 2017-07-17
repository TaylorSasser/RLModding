#include "VecUtils.h"
#include "Vector.hpp"
#include "../Libs/DirectX9/d3d9.h"
#include "../RL/SDK.hpp"
#define UCONST_Pi 3.1415926
#define URotation180  32768 
#define URotationToRadians  UCONST_Pi / URotation180 

namespace Vec {
	

	void VecUtils::GetAxes(SDK::FRotator rotator, Vector& xAxis, Vector& yAxis, Vector& zAxis) {
		// SR = sin of Roll; SP = sin of Pitch; SY = sin of Yaw;
		// CR = cos of Roll; CP = cos of Pitch; CY = cos of Yaw

		//xAxis 
		xAxis.x = cos(rotator.Pitch * URotationToRadians) *  cos(rotator.Yaw * URotationToRadians); // CP * CY
		xAxis.y = cos(rotator.Pitch * URotationToRadians) *  sin(rotator.Yaw * URotationToRadians);	// CP * SY
		xAxis.z = sin(rotator.Pitch * URotationToRadians);										    // SP

																									//yAxis
		yAxis.x = sin(rotator.Roll * URotationToRadians) * sin(rotator.Pitch * URotationToRadians) * cos(rotator.Yaw * URotationToRadians) - cos(rotator.Roll * URotationToRadians) * sin(rotator.Yaw * URotationToRadians); // SR * SP * CY - CR * SY
		yAxis.y = sin(rotator.Roll * URotationToRadians) * sin(rotator.Pitch * URotationToRadians) * sin(rotator.Yaw * URotationToRadians) + cos(rotator.Roll * URotationToRadians) * cos(rotator.Yaw * URotationToRadians); // SR * SP * SY + CR * CY
		yAxis.z = -sin(rotator.Roll * URotationToRadians) * cos(rotator.Pitch * URotationToRadians);																														 // -SR * CP

																																																							 //xAxis
		zAxis.x = -(cos(rotator.Roll * URotationToRadians) * sin(rotator.Pitch * URotationToRadians) * cos(rotator.Yaw * URotationToRadians) + sin(rotator.Roll * URotationToRadians) * sin(rotator.Yaw * URotationToRadians)); // -(CR * SP * CY + SR * SY)
		zAxis.y = cos(rotator.Yaw * URotationToRadians) * sin(rotator.Roll * URotationToRadians) - cos(rotator.Roll * URotationToRadians) * sin(rotator.Pitch * URotationToRadians) * sin(rotator.Yaw * URotationToRadians);	// CY * SR - CR * SP * CY
		zAxis.z = cos(rotator.Roll * URotationToRadians) * cos(rotator.Pitch * URotationToRadians);																																// CR CP
	}

	Vector VecUtils::FVectorToVector(SDK::FVector input) {
		return Vector(input.X, input.Y, input.Z);
	}

	Vector VecUtils::CalculateScreenCoordinate(SDK::FVector Location, SDK::APlayerController* pPC) {
		RECT windowRect;
		HWND window = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
		
		int SizeX,SizeY;

		if (GetWindowRect(window,&windowRect)) {
			SizeX = windowRect.right - windowRect.left;
			SizeY = windowRect.bottom - windowRect.top;
		}

		Vector BaseLocation = FVectorToVector(Location);
		Vector CameraLocation = FVectorToVector(pPC->PlayerCamera->Location);

		Vector AxisX, AxisY, AxisZ, Transformed,Return;
		GetAxes(pPC->PlayerCamera->Rotation, AxisX, AxisY, AxisZ);

		Vector Delta =  BaseLocation - CameraLocation;
		Transformed.x = Delta.Dot(AxisY);
		Transformed.y = Delta.Dot(AxisZ);
		Transformed.z = Delta.Dot(AxisX);

		if (Transformed.z < 1.00f)
			Transformed.z = 1.00f;

		float FOVAngle = pPC->PlayerCamera->GetFOVAngle();

		Return.x = (SizeX / 2.0f) + Transformed.x * ((SizeX / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.z;
		Return.y = (SizeY / 2.0f) + -Transformed.y * ((SizeX / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.z;
		Return.z = 0.0f;
		printf("Return %f:%f:%f \n",Return.x,Return.y,Return.z);
		return Return;
	}

}
