#pragma once
#include "../RL/SDK.hpp"

namespace Vec {

	typedef float vec_t;

	class Vector3D {

	public:
		vec_t x, y, z;

		Vector3D(vec_t x, vec_t y, vec_t z);
		Vector3D(SDK::FVector);
		Vector3D(vec_t* clr);

		void Init(vec_t ix = 0.0f, vec_t iy = 0.0f, vec_t iz = 0.0f);

		vec_t operator[] (int i) const;
		vec_t& operator[] (int i);

		vec_t* Base();
		vec_t const* Base() const;

		void Zero();

		bool operator==(const Vector3D& v) const;
		bool operator!=(const Vector3D& v) const;

		bool operator==(const SDK::FVector& v) const;
		bool operator!=(const SDK::FVector& v) const;

		Vector3D& operator+=(const Vector3D& v) {
			x += v.x; y += v.y; z += v.z;
			return *this;
		}
		Vector3D& operator+=(float fl) {
			x += fl; y += fl; z += fl;
			return *this;
		}

		Vector3D& operator-=(const Vector3D& v) {
			x -= v.x; y -= v.y; z -= v.z;
			return *this;
		}
		Vector3D& operator-=(float fl) {
			x -= fl; y -= fl; z -= fl;
			return *this;
		}

		Vector3D& operator*=(const Vector3D& v) {
			x *= v.x; y *= v.y; z *= v.z;
			return *this;
		}
		Vector3D& operator*=(float fl) {
			x *= fl; y *= fl; z *= fl;
			return *this;
		}

		Vector3D& operator/=(const Vector3D& v) {
			x /= v.x; y /= v.y; z /= v.z;
			return *this;
		}
		Vector3D& operator/=(float fl) {
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
