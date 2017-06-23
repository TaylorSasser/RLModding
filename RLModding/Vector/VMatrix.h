#pragma once
#include "../RL/SDK.hpp"
#include "Vector4D.h"
#include "Vector3D.h"

namespace Vec {
	typedef float vec_t;	

	class VMatrix {
	public:
		vec_t matrix[4][4];

		VMatrix(SDK::FMatrix);
		VMatrix(vec_t m00, vec_t m01, vec_t m02, vec_t m03,
				vec_t m10, vec_t m11, vec_t m12, vec_t m13,
				vec_t m20, vec_t m21, vec_t m22, vec_t m23,
				vec_t m30, vec_t m31, vec_t m32, vec_t m33);

		VMatrix(SDK::FPlane xAxis,SDK::FPlane yAxis,SDK::FPlane zAxis,SDK::FPlane Origin);
		VMatrix(const Vector4D& xAxis,const Vector4D& yAxis,const Vector4D& zAxis,const Vector4D origin);
		VMatrix(const Vector3D& xAxis,const Vector3D& yAxis,const Vector3D zAxis);

		void VMatrix::Init(vec_t m00, vec_t m01, vec_t m02, vec_t m03,
						   vec_t m10, vec_t m11, vec_t m12, vec_t m13,
						   vec_t m20, vec_t m21, vec_t m22, vec_t m23,
			               vec_t m30, vec_t m31, vec_t m32, vec_t m33);
	
		inline vec_t* operator[](int i) {
			return matrix[i];
		}

		inline const vec_t* operator[](int i) const {
			return matrix[i];
		}
		inline vec_t *Base() {
			return &matrix[0][0];
		}
		inline const vec_t *Base() const {
			return &matrix[0][0];
		}

	};
}

