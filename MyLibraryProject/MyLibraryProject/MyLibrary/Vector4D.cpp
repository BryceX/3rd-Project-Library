#include "Vector4D.h"
#include <cmath>

Vector4D::Vector4D()
{
	 x = 0.f;
	 y = 0.f;
	 z = 0.f;
	 w = 0.f;
}
Vector4D::Vector4D( unsigned int hexnum )
{
	unsigned int r = (hexnum & 0xFF000000) >> 24;
	unsigned int g = (hexnum & 0xFF0000) >> 16;
	unsigned int b = (hexnum & 0xFF00) >> 8;
	unsigned int a = (hexnum & 0xFF) >> 0;
	x = (unsigned int)r;
	y = (unsigned int)g;
	z = (unsigned int)b;
	w = (unsigned int)a;
}
float Vector4D::Magnitude()
{
	return sqrt(pow(w, 2) + pow(x, 2) + pow(y, 2) + pow(z, 2));
}
void Vector4D::Normalize()
{
	w = w / Magnitude();
	x = x / Magnitude();
	y = y / Magnitude();
	z = z / Magnitude();
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
bool Vector4D::operator == (Vector4D anotherVector)
{
	if (x - anotherVector.x < .00001 &&
		y - anotherVector.y < .00001 && z - anotherVector.z < .00001 && w - anotherVector.w < .00001)
	{
		return true;
	}
	else return false;
}
bool operator==(Vector4D leftVector, Vector4D rightVector)
{
	if (leftVector.x == rightVector.x)
	{
		if (leftVector.y == rightVector.y)
		{
			if (leftVector.z == rightVector.z)
			{
				if (leftVector.w == rightVector.w)
				{
					return true;
				}
			}
		}
	}
}