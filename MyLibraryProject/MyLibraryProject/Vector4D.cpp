#include "Vector4D.h"
#include <cmath>

Vector4D::Vector4D()
{
}


Vector4D::~Vector4D()
{
}

Vector4D Vector4D::operator+ (Vector4D anotherVector)
{
	Vector4D temp;
	temp.w = w + anotherVector.w;
	temp.x = x + anotherVector.x;
	temp.y = y + anotherVector.y;
	temp.z = z + anotherVector.z;
	return temp;
}
Vector4D Vector4D::operator- (Vector4D anotherVector)
{
	Vector4D temp;
	temp.w = w - anotherVector.w;
	temp.x = x - anotherVector.x;
	temp.y = y - anotherVector.y;
	temp.z = z - anotherVector.z;
	return temp;
}
Vector4D Vector4D::operator* (float anotherFloat)
{
	Vector4D temp;
	temp.w = w * anotherFloat;
	temp.x = x * anotherFloat;
	temp.y = y * anotherFloat;
	temp.z = z * anotherFloat;
	return temp;
}
Vector4D Vector4D::operator = (Vector4D anotherVector)
{
	Vector4D temp;
	temp.w = anotherVector.w;
	temp.x = anotherVector.x;
	temp.y = anotherVector.y;
	temp.z = anotherVector.z;
	return temp;
}