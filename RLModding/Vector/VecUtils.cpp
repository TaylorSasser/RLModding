#include "VecUtils.h"
#include "Vector3D.h"
#include "../Libs/DirectX9/d3d9.h"
#define UCONST_Pi 3.1415926
#define URotation180  32768 
#define URotationToRadians  UCONST_Pi / URotation180 

namespace Vec {
	

	void VecUtils::GetAxes(SDK::FRotator rotator, Vector3D& xAxis, Vector3D& yAxis, Vector3D& zAxis) {
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
	Vector3D VecUtils::WorldToScreen(SDK::UCanvas* canvas, SDK::APlayerController* playerController,SDK::FVector Location) {
		Vector3D xAxis(0,0,0), yAxis(0,0,0), zAxis(0,0,0), Delta(0,0,0), Transformed(0,0,0);
		

		SDK::FVector MyCameraLocation;
		SDK::FRotator MyCameraRotator;
		playerController->PlayerCamera->GetCameraViewPoint(&MyCameraLocation, &MyCameraRotator);

		//printf("MyCameraLocation %f:%f:%f \n",MyPlayerLocation.X,MyPlayerLocation.Y,MyPlayerLocation.Z);
		//printf("MyCameraRotator %d:%d:%d \n",MyCameraRotator.Pitch,MyCameraRotator.Roll,MyCameraRotator.Yaw);
		//printf("MyCamera %d:%d:%d \n",playerController->PlayerCamera->Rotation.Pitch, playerController->PlayerCamera->Rotation.Roll, playerController->PlayerCamera->Rotation.Yaw); //Same thing as getPlayerViewPoint


		VecUtils::GetAxes(MyCameraRotator,xAxis,yAxis,zAxis);
		//printf("X Axis %f:%f:%f \n",xAxis.x,xAxis.y,xAxis.z);
		//printf("Y Axis %f:%f:%f \n",yAxis.x,yAxis.y,yAxis.z);
		//printf("Z Axis %f:%f:%f \n",zAxis.x,zAxis.y,zAxis.z);
		printf("PlayerCamera X %f \n",playerController->PlayerCamera->CameraCache.POV.Location.X);
		printf("PlayerCamera Y %f \n",playerController->PlayerCamera->CameraCache.POV.Location.Y);
		printf("PlayerCamera Z %f \n",playerController->PlayerCamera->CameraCache.POV.Location.Z);

		Delta.x = Location.X - MyCameraLocation.X;
		Delta.y = Location.Y - MyCameraLocation.Y;
		Delta.z = Location.Z - MyCameraLocation.Z;

		printf("DeltaX %f \n",Delta.x);
		printf("DeltaY %f \n",Delta.y);
		printf("DeltaZ %f \n",Delta.z);

		Transformed.x = Delta.DotProduct(yAxis);
		Transformed.y = Delta.DotProduct(zAxis);
		Transformed.z = Delta.DotProduct(xAxis);
		
		//printf("Transformed %f:%f:%f \n",Transformed.x,Transformed.y,Transformed.z);
		
		float FOVAngle = playerController->FOVAngle;
		//printf("FOV Angle %f \n",FOVAngle);
		float ClipCenterX = canvas->ClipX / 2; 
		float ClipCenterY = canvas->ClipY / 2;

		Vector3D Return(0,0,0);
		
		Return.x = ClipCenterX + (ClipCenterX / Transformed.z / tan(FOVAngle * 0.5f * (float)UCONST_Pi / 180.0f)) * Transformed.x;
		Return.y = ClipCenterY + (ClipCenterX / Transformed.z / tan(FOVAngle * 0.5f * (float)UCONST_Pi / 180.0f)) * -Transformed.y;

		printf("ReturnX :%f \n",Return.x);
		printf("ReturnY :%f \n",Return.y);
		return Return;

	}

}
