#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D()
{
}
Vector3D Vector3D::Lerp(Vector3D end, float t)
{
	Vector3D temp;
	Vector3D start;
	start = *this;
	temp = start + (end - start) * t;
	return temp;
}
float Vector3D::Magnitude()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
void Vector3D::Normalize()
{
	x = x / Magnitude();
	y = y / Magnitude();
	z = z / Magnitude();
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
Vector3D Vector3D::operator * (float anotherFloat)
{
	Vector3D temp;
	temp.x = x * anotherFloat;
	temp.y = y * anotherFloat;
	temp.z = z * anotherFloat;
	return temp;
}
Vector3D& Vector3D::operator = (Vector3D anotherVector)
{
	Vector3D temp;
	temp.x = anotherVector.x;
	temp.y = anotherVector.y;
	temp.z = anotherVector.z;
	return temp;
}

//
// RETURNTYPE NAME (PARAMETERS)
bool Vector3D::operator == (Vector3D anotherVector)
{
	if (x - anotherVector.x < .00001 &&
		y - anotherVector.y < .00001)
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