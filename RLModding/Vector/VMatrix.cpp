#include "VMatrix.h"

namespace Vec {


	VMatrix::VMatrix(SDK::FMatrix m) {
		Init(m.XPlane.X,m.YPlane.X,m.ZPlane.X,m.WPlane.X,m.XPlane.Y,m.YPlane.Y,m.ZPlane.Y,m.WPlane.Y,m.XPlane.Z,m.YPlane.Z,m.ZPlane.Z,m.WPlane.Z,m.XPlane.W,m.YPlane.W,m.ZPlane.W,m.WPlane.W);
	}






	inline void VMatrix::Init(vec_t m00, vec_t m01, vec_t m02, vec_t m03,vec_t m10, vec_t m11, vec_t m12, vec_t m13,vec_t m20, vec_t m21, vec_t m22, vec_t m23,vec_t m30, vec_t m31, vec_t m32, vec_t m33) {
		matrix[0][0] = m00;matrix[0][1] = m01;matrix[0][2] = m02;matrix[0][3] = m03;
		matrix[1][0] = m10;matrix[1][1] = m11;matrix[1][2] = m12;matrix[1][3] = m13;
		matrix[2][0] = m20;matrix[2][1] = m21;matrix[2][2] = m22;matrix[2][3] = m23;
		matrix[3][0] = m30;matrix[3][1] = m31;matrix[3][2] = m32;matrix[3][3] = m33;
	}


}
