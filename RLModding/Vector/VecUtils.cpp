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

		if (playerController == NULL || playerController->PlayerCamera == NULL) {
			Vector3D Return1(0, 0, 0);
			return Return1;
		}

		playerController->PlayerCamera->GetCameraViewPoint(&MyCameraLocation, &MyCameraRotator);

		//printf("MyCameraLocation %f:%f:%f \n",MyPlayerLocation.X,MyPlayerLocation.Y,MyPlayerLocation.Z);
		//printf("MyCameraRotator %d:%d:%d \n",MyCameraRotator.Pitch,MyCameraRotator.Roll,MyCameraRotator.Yaw);
		//printf("MyCamera %d:%d:%d \n",playerController->PlayerCamera->Rotation.Pitch, playerController->PlayerCamera->Rotation.Roll, playerController->PlayerCamera->Rotation.Yaw); //Same thing as getPlayerViewPoint


		VecUtils::GetAxes(MyCameraRotator,xAxis,yAxis,zAxis);
		//printf("X Axis %f:%f:%f \n",xAxis.x,xAxis.y,xAxis.z);
		//printf("Y Axis %f:%f:%f \n",yAxis.x,yAxis.y,yAxis.z);
		//printf("Z Axis %f:%f:%f \n",zAxis.x,zAxis.y,zAxis.z);
		printf("PlayerCamera X %f \n",playerController->PlayerCamera->CameraCache.POV.Location.X);
		printf("Location X %f \n",Location.X);
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
		float ClipCenterX = 1920 / 2; 
		float ClipCenterY = 1080 / 2;

		Vector3D Return(0,0,0);
		
		Return.x = ClipCenterX + (ClipCenterX / Transformed.z / tan(FOVAngle * 0.5f * (float)UCONST_Pi / 180.0f)) * Transformed.x;
		Return.y = ClipCenterY + (ClipCenterX / Transformed.z / tan(FOVAngle * 0.5f * (float)UCONST_Pi / 180.0f)) * -Transformed.y;

		printf("ReturnX :%f \n",Return.x);
		printf("ReturnY :%f \n",Return.y);
		return Return;

	}

	/*void VecUtils::GetAxes2(SDK::FRotator A, SDK::FVector* X, SDK::FVector* Y, SDK::FVector* Z)
	{
		float M[3][4];
		float   SR = (float)sin(A.Roll * CONST_UnrRotToRad),
			SP = (float)sin(A.Pitch * CONST_UnrRotToRad),
			SY = (float)sin(A.Yaw * CONST_UnrRotToRad),
			CR = (float)cos(A.Roll * CONST_UnrRotToRad),
			CP = (float)cos(A.Pitch * CONST_UnrRotToRad),
			CY = (float)cos(A.Yaw * CONST_UnrRotToRad);

		M[0][0] = CP * CY;
		M[0][1] = CP * SY;
		M[0][2] = SP;
		M[0][3] = 0.f;

		M[1][0] = SR * SP * CY - CR * SY;
		M[1][1] = SR * SP * SY + CR * CY;
		M[1][2] = -SR * CP;
		M[1][3] = 0.f;

		M[2][0] = -(CR * SP * CY + SR * SY);
		M[2][1] = CY * SR - CR * SP * SY;
		M[2][2] = CR * CP;
		M[2][3] = 0.f;

		// unnecessary 4th matrix calculation removed

		*X = { M[0][0], M[0][1], M[0][2] };
		*Y = { M[1][0], M[1][1], M[1][2] };
		*Z = { M[2][0], M[2][1], M[2][2] };
	}


	bool WorldToScreen(SDK::FVector v, SDK::FVector& result, SDK::APlayerController* playerController)
	{
		SDK::FVector local, transform;
		float clipCenterX, clipCenterY;

		local = v - playerController->PlayerCamera->CameraCache.POV.Location;

		transform.X = local * g_viewAxis[1];
		transform.Y = local * g_viewAxis[2];
		transform.Z = local * g_viewAxis[0];

		if (transform.z <= 0)
			return false;

		clipCenterX = g_resX * 0.5f;
		clipCenterY = g_resY * 0.5f;

		result.x = clipCenterX + (clipCenterX / transform.z / tan(g_fovAngle * 0.5f * (float)M_PI / 180.0f)) * transform.x;
		result.y = clipCenterY + (clipCenterX / transform.z / tan(g_fovAngle * 0.5f * (float)M_PI / 180.0f)) * -transform.y;

		return true;
	}*/



	void VecUtils::VectorSubtract(Vector3D* result, Vector3D* a, Vector3D* b) {
		result->x = a->x - b->x;
		result->y = a->y - b->y;
		result->z = a->z - b->z;
	}

	float VecUtils::VectorDotProduct(SDK::FVector* a, SDK::FVector* b) {
		return (a->X * b->X + a->Y * b->Y + a->Z * b->Z);
	}

	void VecUtils::GetAxes2(SDK::FRotator rotator, SDK::FVector& xAxis, SDK::FVector& yAxis, SDK::FVector& zAxis) {
		Vector3D a(0, 0, 0), b(0, 0, 0), c(0, 0, 0);
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


	SDK::FVector VecUtils::CalculateScreenCoordinate(SDK::UCanvas* pCanvas, SDK::FVector Location, SDK::APlayerController* pPC)
	{
		SDK::FVector Return;

		Vector3D AxisX(0, 0, 0), AxisY(0, 0, 0), AxisZ(0, 0, 0), Delta(0, 0, 0), Transformed(0, 0, 0);
		SDK::FRotator MYCam = pPC->PlayerCamera->Rotation;

		GetAxes(MYCam, AxisX, AxisY, AxisZ);

		Vector3D Location2(0, 0, 0), CameraLocation2(0, 0, 0);
		Location2.x = Location.X;
		Location2.y = Location.Y;
		Location2.z = Location.Z;
		CameraLocation2.x = pPC->PlayerCamera->Location.X;
		CameraLocation2.y = pPC->PlayerCamera->Location.Y;
		CameraLocation2.z = pPC->PlayerCamera->Location.Z;

		VectorSubtract(&Delta, &Location2, &CameraLocation2);
		Transformed.x = Delta.DotProduct(AxisY);
		Transformed.y = Delta.DotProduct(AxisZ);
		Transformed.z = Delta.DotProduct(AxisX);

		if (Transformed.z < 1.00f)
			Transformed.z = 1.00f;

		float FOVAngle = pPC->PlayerCamera->GetFOVAngle();
		printf("FOV: %f\n", FOVAngle);


		printf("debug 1 \n");

		Return.X = (1600 / 2.0f) + Transformed.x * ((1600 / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.z;
		printf("debug 2 \n");
		Return.Y = (900 / 2.0f) + -Transformed.y * ((1600 / 2.0f) / tan(FOVAngle * UCONST_Pi / 360.0f)) / Transformed.z;
		printf("debug 3 \n");
		Return.Z = 0;

		printf("RETURN \n");

		return Return;
	}

}
