
#pragma once
#include "Vector.hpp"
#include "../RL/SDK.hpp"


namespace Vec {
	class VecUtils {
	public:
		static Vector RotatorToVector(SDK::FRotator);
		static void GetAxes(SDK::FRotator,Vector& xAxis,Vector& yAxis,Vector& zAxis);
		static Vector VecUtils::WorldToScreen(SDK::UCanvas*,SDK::APlayerController*,SDK::FVector Location);

		static void VecUtils::VectorSubtract(Vector* result, Vector* a, Vector* b);
		static float VectorDotProduct(SDK::FVector* a, SDK::FVector* b);
		static void VecUtils::GetAxes2(SDK::FRotator rotator, SDK::FVector& xAxis, SDK::FVector& yAxis, SDK::FVector& zAxis);
		static SDK::FVector VecUtils::CalculateScreenCoordinate(SDK::FVector Location, SDK::APlayerController* pPC, long SizeX, long SizeY);

	};
}
