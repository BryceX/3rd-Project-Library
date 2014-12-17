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
	//incomplete
	Vector3D Lerp(Vector3D end, float t);
	//done
	float Magnitude();
	//inc
	void Normalize();
	//inc
	float CrossProduct(Vector3D crossProductVector);
	//done
	float DotProduct(Vector3D dotProductVector);
	//done
	Vector3D operator + (Vector3D anotherVector);
	//done
	Vector3D operator - (Vector3D anotherVector);
	//done
	
	Vector3D& operator += (Vector3D anotherVector);
	//recheck
	Vector3D& operator -= (Vector3D anotherVector);
	//done
	void operator = (Vector3D anotherVector);
	//done
	bool operator == (Vector3D anotherVector);
	//recheck
	friend bool operator == (Vector3D leftVector, Vector3D rightVector);
	//done
	Vector3D operator + (float anotherFloat);
	//
	Vector3D operator - (float anotherFloat);
	//
	Vector3D operator * (float anotherFloat);
	Vector3D operator / (float anotherFloat);
	Vector3D& operator = (float anotherFloat);
	Vector3D(float a_x, float a_y, float a_z)
	{
		x = a_x; y = a_y; z = a_z;
	}
	friend std::ostream& operator<<(std::ostream& os, const Vector3D& );
};
	
	


