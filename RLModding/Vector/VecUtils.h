
#pragma once
#include "Vector.hpp"
#include "../RL/SDK.hpp"


namespace Vec {
	class VecUtils {
	public:
		static void GetAxes(SDK::FRotator,Vector& xAxis,Vector& yAxis,Vector& zAxis);
		static Vector VecUtils::FVectorToVector(SDK::FVector input);
		static SDK::FVector VecUtils::CalculateScreenCoordinate(SDK::FVector Location, SDK::APlayerController* pPC);

	};
}
