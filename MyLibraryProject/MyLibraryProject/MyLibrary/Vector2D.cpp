#include "Vector2D.h"

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

Vector2D Vector2D::Lerp(Vector2D end, float percentValue)
{
	Vector2D temp;
	temp = *this + (end - *this) * percentValue;
	return temp;
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

Vector2D& Vector2D::operator= (Vector2D anotherVector)
{
	Vector2D temp;
	temp.x = anotherVector.x;
	temp.y = anotherVector.y;
	return temp;
}
bool Vector2D::operator == (Vector2D anotherVector)
{
	
	if (x == anotherVector.x)
	{
		if (y == anotherVector.y)
		{
			return true;
		}
	}
	
	return false;

}

bool operator==(Vector2D leftVector, Vector2D rightVector)
{
	if (leftVector.x == rightVector.x)
	{
		if (leftVector.y == rightVector.y)
		{
			return true;
		}
	}
}

Vector2D& Vector2D::operator+= (Vector2D anotherVector)
{
	 *this = *this + anotherVector;
	 return *this;
}
Vector2D& Vector2D::operator-= (Vector2D anotherVector)
{
	*this = *this - anotherVector;
	return *this;
}