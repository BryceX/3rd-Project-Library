#pragma once

class Vector2D
{
public:

	Vector2D(float x, float y);

	float x;
	float y;

	Vector2D Lerp(Vector2D a_pos0, float t);
	float Magnitude();
	void Normalize();
	float DotProduct(Vector2D dotProductVector);

	Vector2D operator + (Vector2D anotherVector);
	Vector2D operator - (Vector2D anotherVector);
	Vector2D operator * (float anotherFloat);
	Vector2D operator / (float anotherFloat);
	Vector2D& operator = (Vector2D anotherVector);
	Vector2D operator == (Vector2D anotherVector);
	Vector2D& operator += (Vector2D anotherVector);
	Vector2D& operator -= (Vector2D anotherVector);

	Vector2D();
	~Vector2D();
};

