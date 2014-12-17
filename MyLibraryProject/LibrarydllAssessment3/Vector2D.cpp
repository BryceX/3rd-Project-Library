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
	temp = *this + ((end - *this) * percentValue);
	return temp;
}
float Vector2D::Magnitude()
{
	return sqrt( (x * x) + (y * y) );
}
void Vector2D::Normalize()
{
	float mag = Magnitude();
	if (mag == 0) {
		x = 0.f;
		y = 0.f;
	}
	else {
		x = x / Magnitude();
		y = y / Magnitude();
	}
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

void Vector2D::operator= (Vector2D anotherVector)
{
	x = anotherVector.x;
	y = anotherVector.y;
}
bool Vector2D::operator == (Vector2D anotherVector)
{
	if (abs(x - anotherVector.x < 0.00001f) && abs(y - anotherVector.y) < 0.00001f) {
		return true;
	}
	else return false;

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
bool operator==(const Vector2D &leftVector, const Vector2D &rightVector)
{
	if (&leftVector == &rightVector) { return true; }
	if (abs(leftVector.x - rightVector.x) < 0.00001f && abs(leftVector.y - rightVector.y) < 0.00001f) {
		return true;
	}
	else return false;

}

/*

vector2d.operator==(vector2d)
vector2d == vector2d

operator==( vector2d, vector2d )


*/
