#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D()
{
}
float Vector3D::Lerp(Vector3D a_pos0, Vector3D a_pos1, float L)
{
	Vector3D temp;
	temp = (a_pos0 + L) * (a_pos1 - a_pos0);
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