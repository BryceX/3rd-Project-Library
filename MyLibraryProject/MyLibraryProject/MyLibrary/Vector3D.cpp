#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D()
{
}
Vector3D Vector3D::Lerp(Vector3D end, float t)
{
	Vector3D temp;
	temp = *this + ((end - *this) * t);
	return temp;
}
float Vector3D::Magnitude()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
void Vector3D::Normalize()
{
	float mag = Magnitude();
	if (mag == 0) {
		x = 0.f;
		y = 0.f;
		z = 0.f;
	}
	else {
		x = x / Magnitude();
		y = y / Magnitude();
		z = z / Magnitude();
	}
}
float Vector3D::CrossProduct(Vector3D crossProductVector)
{
	float finalCrossProduct = (y*crossProductVector.z - z*crossProductVector.y, z*crossProductVector.x - x*crossProductVector.z, x*crossProductVector.y - y*crossProductVector.x);
	return finalCrossProduct;
} 
float Vector3D::DotProduct(Vector3D dotProductVector)
{
	float finalDotProduct = (x*dotProductVector.x) + (y*dotProductVector.y) + (z*dotProductVector.z);
	return finalDotProduct;
}

Vector3D::~Vector3D()
{
}

Vector3D Vector3D::operator+ (Vector3D anotherVector)
{
	Vector3D temp;
	temp.x = x + anotherVector.x;
	temp.y = y + anotherVector.y;
	temp.z = z + anotherVector.z;
	return temp;
}
Vector3D Vector3D::operator - (Vector3D anotherVector)
{
	Vector3D temp;
	temp.x = x - anotherVector.x;
	temp.y = y - anotherVector.y;
	temp.z = z - anotherVector.z;
	return temp;
}
Vector3D Vector3D::operator + (float anotherFloat)
{
	Vector3D temp;
	temp.x = x + anotherFloat;
	temp.y = y + anotherFloat;
	temp.z = z + anotherFloat;
	return temp;
}
Vector3D Vector3D::operator - (float anotherFloat)
{
	Vector3D temp;
	temp.x = x - anotherFloat;
	temp.y = y - anotherFloat;
	temp.z = z - anotherFloat;
	return temp;
}
Vector3D Vector3D::operator * (float anotherFloat)
{
	Vector3D temp;
	temp.x = x * anotherFloat;
	temp.y = y * anotherFloat;
	temp.z = z * anotherFloat;
	return temp;
}
void Vector3D::operator = (Vector3D anotherVector)
{
	x = anotherVector.x;
	y = anotherVector.y;
	z = anotherVector.z;
}
Vector3D& Vector3D::operator = (float anotherFloat)
{
	Vector3D temp;
	temp.x = anotherFloat;
	temp.y = anotherFloat;
	temp.z = anotherFloat;
	return temp;
}

//
// RETURNTYPE NAME (PARAMETERS)
bool Vector3D::operator == (Vector3D anotherVector)
{
	if (x - anotherVector.x < .00001 &&
		y - anotherVector.y < .00001 &&
		z - anotherVector.z < .00001)
	{
		return true;
	}
	else return false;
}
Vector3D& Vector3D::operator += (Vector3D anotherVector)
{
	*this = *this + anotherVector;
	return *this;
}
Vector3D& Vector3D::operator -= (Vector3D anotherVector)
{
	*this = *this - anotherVector;
	return *this;
}
bool operator==(Vector3D leftVector, Vector3D rightVector)
{
	if (leftVector.x == rightVector.x)
	{
		if (leftVector.y == rightVector.y)
		{
			if (leftVector.z == rightVector.z)
			{
				return true;
			}
		}
	}
}
std::ostream& operator<<(std::ostream& os, const Vector3D& dt)
{
	os << dt.x << '/' << dt.y << '/' << dt.z;
	return os;
}