#pragma once

class Vector2D
{
public:

	float x;
	float y;

	Vector2D operator + (Vector2D anotherVector);
	Vector2D operator - (Vector2D anotherVector);
	Vector2D operator * (float anotherFloat);

	Vector2D();
	~Vector2D();


};

