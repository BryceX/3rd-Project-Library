#pragma once
#ifdef DLL
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif
#include <cmath>

class DLLEXPORT Vector2D
{
public:

	Vector2D(float x, float y);

	float x;
	float y;

	//done
	Vector2D Lerp(Vector2D a_pos0, float percentValue);
	//done
	float Magnitude();
	//done
	void Normalize();
	//done
	float DotProduct(Vector2D dotProductVector);
	//done
	Vector2D operator + (Vector2D anotherVector);
	//done
	Vector2D operator - (Vector2D anotherVector);
	//done
	Vector2D operator * (float anotherFloat);
	//done
	void operator = (Vector2D anotherVector);
	//done
	bool operator == (Vector2D anotherVector); // thing.operator==(otherThing)
	//done
	Vector2D& operator += (Vector2D anotherVector);
	//done
	Vector2D& operator -= (Vector2D anotherVector);
	//done
	DLLEXPORT friend bool operator == (const Vector2D &leftVector, const Vector2D &rightVector); // operator==(thing, otherThing)
	Vector2D();
	~Vector2D();
};

