#pragma once
#include "../RL/SDK.hpp"

namespace Vec {
	
	typedef float vec_t;

	class Vector4D {

	public:
		vec_t w,x,y,z;

		Vector4D(vec_t w,vec_t x,vec_t y,vec_t z) : w(w),x(x),y(y),z(z) {}
		Vector4D(SDK::FPlane);

		void Zero();
		void Inverse();
		Vector4D Normalize();
		vec_t Length();
		vec_t LengthSqr();
	};
}