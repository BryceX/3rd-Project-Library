#include "Vector2D.h"
#include <cmath>

Vector2D::Vector2D()
{
	x = 0;
	y = 0;
}
Vector2D::Vector2D(float a_x, float a_y)
{
	x = a_x;
	y = a_y;
}
float Vector2D::Magnitude()
{
	return sqrt(pow(x,2) + pow(y,2));
}
void Vector2D::Normalize()
{
	x = x / Magnitude();
	y = y / Magnitude();
}
float Vector2D::DotProduct(Vector2D dotProductVector)
{
	float finalDotProduct = (x*dotProductVector.x) + (y*dotProductVector.y);
	return finalDotProduct;
}

Vector2D::~Vector2D()
{
}
Vector2D Vector2D::operator+ (Vector2D anotherVector)
{
	Vector2D temp;
	temp.x = x + anotherVector.x;
	temp.y = y + anotherVector.y;
	return temp;
}

Vector2D Vector2D::operator- (Vector2D anotherVector)
{
	Vector2D temp;
	temp.x = x - anotherVector.x;
	temp.y = y - anotherVector.y;
	return temp;
}
Vector2D Vector2D::operator* (float anotherFloat)
{
	Vector2D temp;
	temp.x = x * anotherFloat;
	temp.y = y * anotherFloat;
	return temp;
}
