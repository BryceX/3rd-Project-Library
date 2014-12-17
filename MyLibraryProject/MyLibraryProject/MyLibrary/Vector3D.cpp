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
	return sqrt((x*x) + (y * y) + (z*z));
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
		x = x / mag;
		y = y / mag;
		z = z / mag;
	}
}
Vector3D Vector3D::CrossProduct(Vector3D crossProductVector)
{
	Vector3D finalCrossProduct;
	finalCrossProduct.x = y*crossProductVector.z - z*crossProductVector.y;
	finalCrossProduct.y = z*crossProductVector.x - x*crossProductVector.z;
	finalCrossProduct.z = x*crossProductVector.y - y*crossProductVector.x;
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
Vector3D Vector3D::operator / (float anotherFloat)
{
	Vector3D temp;
	temp.x = x / anotherFloat;
	temp.y = y / anotherFloat;
	temp.z = z / anotherFloat;
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
	x = anotherFloat;
	y = anotherFloat;
	z = anotherFloat;
	return *this;
}

//
// RETURNTYPE NAME (PARAMETERS)
bool Vector3D::operator == (Vector3D anotherVector)
{
	if (abs(x - anotherVector.x) < .00001 &&
		abs(y - anotherVector.y) < .00001 &&
		abs(z - anotherVector.z) < .00001)
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
bool operator==(const Vector3D &leftVector, const Vector3D &rightVector)
{
	if (&leftVector == &rightVector){ return true; }
	if (abs(leftVector.x - rightVector.x) < 0.00001f && abs(leftVector.y - rightVector.y) < 0.00001f && abs(leftVector.z - rightVector.z) < 0.00001f)
	{	
		return true;	
	}
	else return false;
}
std::ostream& operator<<(std::ostream& os, const Vector3D& dt)
{
	os << dt.x << '/' << dt.y << '/' << dt.z;
	return os;
}