#pragma once
class Vector3D
{
public:
	float x;
	float y;
	float z;

	Vector3D operator + (Vector3D anotherVector);
	Vector3D operator - (Vector3D anotherVector);
	Vector3D operator * (float a_anotherFloat);
	Vector3D();
	~Vector3D();
};

