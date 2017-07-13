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

<<<<<<< HEAD
	float VecUtils::VectorDotProduct(SDK::FVector* a, SDK::FVector* b) {
		return (a->X * b->X + a->Y * b->Y + a->Z * b->Z);
	}

	void VecUtils::GetAxes2(SDK::FRotator rotator, SDK::FVector& xAxis, SDK::FVector& yAxis, SDK::FVector& zAxis) {
		Vector a(0, 0, 0), b(0, 0, 0), c(0, 0, 0);
		GetAxes(rotator, a, b, c);
		xAxis.X = a.x;
		xAxis.Y = a.y;
		xAxis.Z = a.z;

		yAxis.X = b.x;
		yAxis.Y = b.y;
		yAxis.Z = b.z;

		zAxis.X = c.x;
		zAxis.Y = c.y;
		zAxis.Z = c.z;
	}


	SDK::FVector VecUtils::CalculateScreenCoordinate(SDK::FVector Location, SDK::APlayerController* pPC, long SizeX, long SizeY) {
		SDK::FVector Return;
=======
	SDK::FVector VecUtils::CalculateScreenCoordinate(SDK::FVector Location, SDK::APlayerController* pPC, long SizeX, long SizeY)
	{
		// Convert FVector of object location and camera location to Vector
		Vector Location2 = FVectorToVector(Location);
		Vector CameraLocation2 = FVectorToVector(pPC->PlayerCamera->Location);
>>>>>>> 7d0530325cdfdf619093155563f0ee6fed63db5b


		SDK::FVector Return;

		Vector AxisX(0, 0, 0), AxisY(0, 0, 0), AxisZ(0, 0, 0), Delta(0, 0, 0), Transformed(0, 0, 0);
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
