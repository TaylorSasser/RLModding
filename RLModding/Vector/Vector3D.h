#pragma once
#include "../RL/SDK.hpp"

namespace Vec {

	typedef double vec_t;

	class Vector3D {

	public:
		double x, y, z;

		Vector3D(vec_t x, vec_t y, vec_t z);
		Vector3D(SDK::FVector);

		void Zero();

		bool operator==(const Vector3D& v) const;
		bool operator!=(const Vector3D& v) const;

		bool operator==(const SDK::FVector& v) const;
		bool operator!=(const SDK::FVector& v) const;

		Vector3D& operator+=(const Vector3D& v) {
			x += v.x; y += v.y; z += v.z;
			return *this;
		}
		Vector3D& operator+=(double fl) {
			x += fl; y += fl; z += fl;
			return *this;
		}

		Vector3D& operator-=(const Vector3D& v) {
			x -= v.x; y -= v.y; z -= v.z;
			return *this;
		}
		Vector3D& operator-=(double fl) {
			x -= fl; y -= fl; z -= fl;
			return *this;
		}

		Vector3D& operator*=(const Vector3D& v) {
			x *= v.x; y *= v.y; z *= v.z;
			return *this;
		}
		Vector3D& operator*=(double fl) {
			x *= fl; y *= fl; z *= fl;
			return *this;
		}

		Vector3D& operator/=(const Vector3D& v) {
			x /= v.x; y /= v.y; z /= v.z;
			return *this;
		}
		Vector3D& operator/=(double fl) {
			x /= fl; y /= fl; z /= fl;
			return *this;
		}

		void Inverse();
		Vector3D Normalize() const;

		vec_t Length() const;
		vec_t LengthSqr(void) const {
			return (x*x + y*y + z*z);
		}

		bool IsZero(float tolerance = 0.001f) const {
			return (x > -tolerance && x < tolerance && y > -tolerance && y < tolerance && z > -tolerance && z < tolerance);
		}
		Vector3D& operator=(const Vector3D& vOther);

		vec_t DotProduct(const Vector3D& other) const;

		Vector3D operator+(const Vector3D& v) const;
		Vector3D operator+(float fl) const;

		Vector3D operator-(const Vector3D& v) const;
		Vector3D operator-(float fl) const;

		Vector3D operator*(const Vector3D& v) const;
		Vector3D operator*(float fl) const;

		Vector3D operator/(const Vector3D& v) const;
		Vector3D operator/(float fl) const;

	
		friend std::ostream& operator<<(std::ostream& os, const Vector3D& vec) {
			os << "X :" << vec.x << "Y :" << vec.y << "Z :" << vec.z << std::endl;
			return os;
		}

		Vector3D Cross(const Vector3D&vOther) const;
	};
}