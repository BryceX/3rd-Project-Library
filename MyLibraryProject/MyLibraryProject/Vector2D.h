#pragma once

class Vector2D
{
public:

	Vector2D(float x, float y);
	float x;
	float y;
	float Lerp(Vector2D a_pos0, Vector2D a_pos1, float L);
	float Magnitude();
	void Normalize();
	float DotProduct(Vector2D dotProductVector);
	float finalDotProduct;
	Vector2D operator + (Vector2D anotherVector);
	Vector2D operator - (Vector2D anotherVector);
	Vector2D operator * (float anotherFloat);
	Vector2D operator / (float anotherFloat);
	Vector2D operator = (Vector2D anotherVector);
	Vector2D operator == (Vector2D anotherVector);
	Vector2D operator += (Vector2D anotherVector);
	Vector2D operator -= (Vector2D anotherVector);
	Vector2D();
	~Vector2D();


};

