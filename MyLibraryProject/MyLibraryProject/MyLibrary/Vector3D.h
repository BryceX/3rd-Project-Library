#pragma once
#include <iostream>
class Vector3D
{
public:
	Vector3D();
	~Vector3D();
	float x;
	float y;
	float z;

	Vector3D Lerp(Vector3D end, float t);
	float Magnitude();
	void Normalize();
	float CrossProduct(Vector3D crossProductVector);
	float DotProduct(Vector3D dotProductVector);

	Vector3D operator + (Vector3D anotherVector);
	Vector3D operator - (Vector3D anotherVector);
	Vector3D operator + (float anotherFloat);
	Vector3D operator * (float anotherFloat);
	Vector3D operator / (float anotherFloat);
	Vector3D& operator = (float anotherFloat);
	Vector3D& operator = (Vector3D anotherVector);
	bool operator == (Vector3D anotherVector);
	Vector3D& operator += (Vector3D anotherVector);
	Vector3D& operator -= (Vector3D anotherVector);
	
	Vector3D(float a_x, float a_y, float a_z)
	{
		x = a_x; y = a_y; z = a_z;
	}
	friend std::ostream& operator<<(std::ostream& os, const Vector3D& );
};
	
	


