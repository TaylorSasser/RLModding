#pragma once
#include "Vector3D.h"


namespace Vec {
	class VecUtils {
	public:
		static Vector3D RotatorToVector(SDK::FRotator);
		static void GetAxes(SDK::FRotator,Vector3D& xAxis,Vector3D& yAxis,Vector3D& zAxis);
		static Vector3D VecUtils::WorldToScreen(SDK::UCanvas*,SDK::APlayerController_TA*,SDK::FVector Location);
	};
}
