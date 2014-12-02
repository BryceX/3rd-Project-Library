#pragma once
class Vector4D
{
public:
	int w;
	float x;
	float y;
	float z;
	float Magnitude();
	void Normalize();
	Vector4D operator + (Vector4D anotherVector);
	Vector4D operator - (Vector4D anotherVector);
	Vector4D operator * (float anotherFloat);
	Vector4D operator / (float anotherFloat);
	Vector4D operator = (Vector4D anotherVector);
	Vector4D operator == (Vector4D anotherVector);
	Vector4D operator += (Vector4D anotherVector);
	Vector4D operator -= (Vector4D anotherVector);
	Vector4D();
	~Vector4D();
};
