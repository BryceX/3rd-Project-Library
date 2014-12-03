#pragma once
class Vector4D
{
public:
	float x;
	float y;
	float z;
	float w;

	float Magnitude();
	void Normalize();
	// TODO: Construct from Color Hex

	Vector4D operator + (Vector4D anotherVector);
	Vector4D operator - (Vector4D anotherVector);
	Vector4D operator * (float anotherFloat);
	Vector4D operator / (float anotherFloat);
	Vector4D operator = (Vector4D anotherVector);
	Vector4D operator == (Vector4D anotherVector);
	Vector4D operator += (Vector4D anotherVector);
	Vector4D operator -= (Vector4D anotherVector);

	Vector4D();
	Vector4D( unsigned int hexnum ); // absdhashfikjs
	~Vector4D();
};

/*

Vector4D vect = Vector4D();
vect.w = thing;



Vector4D vect = Vector4D( 0xFFFFFFFF );
Vector4D vect = Vector4D( 0xFF000000 );
Vector4D vect = Vector4D( 255 );


*/