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
	//done
	Vector3D Lerp(Vector3D end, float t);
	//done
	float Magnitude();
	//done
	void Normalize();
	//inc
	Vector3D CrossProduct(Vector3D crossProductVector);
	//done
	float DotProduct(Vector3D dotProductVector);
	//done
	Vector3D operator + (Vector3D anotherVector);
	//done
	Vector3D operator - (Vector3D anotherVector);
	//done
	Vector3D& operator += (Vector3D anotherVector);
	//done
	Vector3D& operator -= (Vector3D anotherVector);	
	//done
	friend bool operator == (const Vector3D &leftVector, const Vector3D &rightVector);
	//done
	Vector3D operator + (float anotherFloat);
	//done
	Vector3D operator - (float anotherFloat);
	//done
	Vector3D operator * (float anotherFloat);
	//done
	Vector3D operator / (float anotherFloat);
	//done
	void operator = (Vector3D anotherVector);
	//done
	Vector3D& operator = (float anotherFloat);
	//done
	bool operator == (Vector3D anotherVector);
	
	Vector3D(float a_x, float a_y, float a_z)
	{
		x = a_x; y = a_y; z = a_z;
	}
	friend std::ostream& operator<<(std::ostream& os, const Vector3D& );
};
	
	


