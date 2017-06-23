#include "Vector4D.h"


namespace Vec {

	Vector4D::Vector4D(SDK::FPlane vec) {
		w = vec.W;
		x = vec.X;
		y = vec.Y;
		z = vec.Z;
	}

	void Vector4D::Zero() {
		w = x = y = z = 0.0f;
	}
	
	void Vector4D::Inverse() {
		w = -w;
		x = -x;
		y = -y;
		z = -z;
	}

	Vector4D Vector4D::Normalize() {
		Vector4D result = *this;
		vec_t length = result.Length();
		if (length != 0.0f) {
			result.w /= length;
			result.x /= length;
			result.y /= length;
			result.z /= length;
		}
		
	}
	vec_t Vector4D::Length() {
		return sqrt(w*w + x*x + y*y + z*z);
	}
	vec_t Vector4D::LengthSqr() {
		return (w*w + x*x + y*y + z*z);
	}




}

