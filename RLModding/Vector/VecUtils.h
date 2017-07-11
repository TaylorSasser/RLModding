#pragma once
#include "Vector3D.h"


namespace Vec {
	class VecUtils {
	public:
		static Vector3D RotatorToVector(SDK::FRotator);
		static void GetAxes(SDK::FRotator,Vector3D& xAxis,Vector3D& yAxis,Vector3D& zAxis);
		static Vector3D VecUtils::WorldToScreen(SDK::UCanvas*,SDK::APlayerController*,SDK::FVector Location);

		static void VecUtils::VectorSubtract(Vector3D* result, Vector3D* a, Vector3D* b);
		static float VectorDotProduct(SDK::FVector* a, SDK::FVector* b);
		static void VecUtils::GetAxes2(SDK::FRotator rotator, SDK::FVector& xAxis, SDK::FVector& yAxis, SDK::FVector& zAxis);
		static SDK::FVector VecUtils::CalculateScreenCoordinate(SDK::UCanvas* pCanvas, SDK::FVector Location, SDK::APlayerController* pPC);

	};
}
