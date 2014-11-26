#pragma once
class Vector3D
{
public:
	float x;
	float y;
	float z;
	Vector3D Lerp(Vector3D end, float t);
	float Magnitude();
	void Normalize();
	float finalCrossProduct;
	float CrossProduct(Vector3D crossProductVector);
	Vector3D operator + (Vector3D anotherVector);
	Vector3D operator - (Vector3D anotherVector);
	Vector3D operator * (float a_anotherFloat);
	Vector3D operator / (float anotherFloat);
	Vector3D operator = (Vector3D anotherVector);
	Vector3D operator == (Vector3D anotherVector);
	Vector3D operator += (Vector3D anotherVector);
	Vector3D operator -= (Vector3D anotherVector);
	Vector3D();
	~Vector3D();
};

