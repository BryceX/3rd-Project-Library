#include "Vector3D.h"


Vector3D::Vector3D()
{
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