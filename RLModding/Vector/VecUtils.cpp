#include "VecUtils.h"
#include "Vector3D.h"
#define UCONST_Pi 3.1415926
#define URotation180  32768 
#define URotationToRadians  UCONST_Pi / URotation180 

namespace Vec {
	
	Vector3D VecUtils::RotatorToVector(SDK::FRotator rot) {
		Vector3D Vec(0,0,0);
		double Yaw = rot.Yaw * URotationToRadians;
		double Pitch = rot.Pitch * URotationToRadians;
		double cosPitch = cos(Pitch);
		Vec.x = (float)cos(Yaw) * cosPitch;
		Vec.y = (float)sin(Yaw) * cosPitch;
		Vec.z = (float)sin(Pitch);
		return Vec;
	}

	void VecUtils::GetAxes(SDK::FRotator rotator, Vector3D& xAxis, Vector3D& yAxis, Vector3D& zAxis) {
		xAxis = RotatorToVector(rotator);
		xAxis.Normalize();
		rotator.Yaw += 16384; // Rotates the yaw 90 Degrees.
		SDK::FRotator R2 = rotator;
		R2.Pitch = 0;
		yAxis = RotatorToVector(R2);
		yAxis.Normalize();
		yAxis.z = 0.f;
		rotator.Yaw -= 16384; // Restores the yaw
		rotator.Pitch += 16384; //Changes the pitch
		zAxis = RotatorToVector(rotator);
		zAxis.Normalize();
	}
	Vector3D VecUtils::WorldToScreen(SDK::UCanvas* canvas, SDK::APlayerController* playerController,SDK::FVector Location) {
		Vector3D Return(0, 0, 0);
		Vector3D xAxis(0,0,0), yAxis(0,0,0), zAxis(0,0,0), Delta(0,0,0), Transformed(0,0,0);
		SDK::FVector MyPlayerLocation;
		SDK::FRotator MyCameraRotator;
		playerController->GetPlayerViewPoint(&MyPlayerLocation,&MyCameraRotator);
		VecUtils::GetAxes(MyCameraRotator,xAxis,yAxis,zAxis);

		Delta.x = Location.X - MyPlayerLocation.X;
		Delta.y = Location.Y - MyPlayerLocation.Y;
		Delta.z = Location.Z - MyPlayerLocation.Z;

		Transformed.x = Delta.DotProduct(yAxis);
		Transformed.y = Delta.DotProduct(zAxis);
		Transformed.z = Delta.DotProduct(xAxis);

		float FOVAngle = playerController->FOVAngle;
		printf("FOV Angle %f \n",FOVAngle);

		Return.x = (float)(canvas->ClipX / 2.0f) + Transformed.x * ((canvas->ClipX / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.z;
		Return.y = (float)(canvas->ClipY / 2.0f) + -Transformed.y * ((canvas->ClipX / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.z;
		Return.z = 0.0f;

		printf("ReturnX :%f \n",Return.x);
		printf("ReturnY :%f \n",Return.y);
		return Return;

	}

}
