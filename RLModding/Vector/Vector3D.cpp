#include "Vector3D.h"
#include "../RL/SDK.hpp"

#include <cmath>
#include <limits>

namespace Vec {


	Vector3D::Vector3D(vec_t X,vec_t Y,vec_t Z) {
		x = X;
		y = Y;
		z = Z;
	}
	Vector3D::Vector3D(SDK::FVector vector) {
		x = vector.X;
		y = vector.Y;
		z = vector.Z;
	}

	Vector3D Vector3D::Normalize() const {
		Vector3D res = *this;
		vec_t length = res.Length();
		if (length != 0.0f) {
			res.x /= length;
			res.y /= length;
			res.z /= length;
		}
		return res;
	}

	void Vector3D::Zero() {
		x = y = z = 0.0f;
	}

	Vector3D& Vector3D::operator=(const Vector3D& vOther) {
		x = vOther.x; y = vOther.y; z = vOther.z;
		return *this;
	}


	bool Vector3D::operator==(const Vector3D& src) const {
		return (src.x == x) && (src.y == y) && (src.z == z);
	}

	bool Vector3D::operator!=(const Vector3D& src) const {
		return (src.x != x) || (src.y != y) || (src.z != z);
	}

	bool Vector3D::operator==(const SDK::FVector& src) const {
		return (src.X == x) && (src.Y == y) && (src.Z == z);
	}

	bool Vector3D::operator!=(const SDK::FVector& src) const {
		return (src.X != x) || (src.Y != y) || (src.Z != z);
	}


	void Vector3D::Inverse() {
		x = -x; y = -y; z = -z;
	}

	vec_t Vector3D::DotProduct(const Vector3D& b) const {
		return (x*b.x + y*b.y + z*b.z);
	}

	vec_t Vector3D::Length(void) const {
		return sqrt(x*x + y*y + z*z);
	}

	Vector3D Vector3D::operator+(const Vector3D& v) const {
		return Vector3D(x + v.x,y + v.y, z + v.z);
	}

	Vector3D Vector3D::operator+(float v) const {
		return Vector3D(x + v , y + v, z + v);
	}

	Vector3D Vector3D::operator-(const Vector3D& v) const {
		return Vector3D(x - v.x, y - v.y, z - v.z);
	}

	Vector3D Vector3D::operator-(float v) const {
		return Vector3D(x - v, y - v, z - v);
	}

	Vector3D Vector3D::operator*(const Vector3D& v) const {
		return Vector3D(x * v.x, y * v.y, z * v.z);
	}

	Vector3D Vector3D::operator*(float v) const {
		return Vector3D(x * v, y * v, z * v);
	}
	
	Vector3D Vector3D::operator/(const Vector3D& v) const {
		return Vector3D(x / v.x, y / v.y, z / v.z);
	}

	Vector3D Vector3D::operator/(float v) const {
		return Vector3D(x / v, y / v, z / v);
	}

	Vector3D Vector3D::Cross(const Vector3D& vOther) const {
		Vector3D res(0,0,0);
		res.x = y*vOther.z - z*vOther.y;
		res.y = z*vOther.x - x*vOther.z;
		res.z = x*vOther.y - y*vOther.x;
		return res;
	}
}