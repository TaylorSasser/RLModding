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

	SDK::FVector VecUtils::CalculateScreenCoordinate(SDK::FVector Location, SDK::APlayerController* pPC, long SizeX, long SizeY)
	{
		// Convert FVector of object location and camera location to Vector
		Vector Location2 = FVectorToVector(Location);
		Vector CameraLocation2 = FVectorToVector(pPC->PlayerCamera->Location);


		SDK::FVector Return;

		Vector AxisX, AxisY, AxisZ, Delta, Transformed;
		GetAxes(pPC->PlayerCamera->Rotation, AxisX, AxisY, AxisZ);

		Delta = Location2 - CameraLocation2;
		Transformed.x = Delta.Dot(AxisY);
		Transformed.y = Delta.Dot(AxisZ);
		Transformed.z = Delta.Dot(AxisX);

		if (Transformed.z < 1.00f)
			Transformed.z = 1.00f;

		float FOVAngle = pPC->PlayerCamera->GetFOVAngle();

		Return.X = (SizeX / 2.0f) + Transformed.x * ((SizeX / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.z;
		Return.Y = (SizeY / 2.0f) + -Transformed.y * ((SizeX / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.z; 
		Return.Z = 0;

		return Return;
	}

}
