#pragma once
class Vector4D
{
public:
	float x;
	float y;
	float z;
	float w;
	//done
	float Magnitude();
	//recheck
	void Normalize();
	//done
	Vector4D operator + (Vector4D anotherVector);
	//done
	Vector4D operator - (Vector4D anotherVector);
	//done
	Vector4D operator * (float anotherFloat);
	
	//done
	Vector4D operator = (Vector4D anotherVector);
	//not implemented
	Vector4D operator / (float anotherFloat);
	//done
	bool operator == (Vector4D anotherVector);
	//done
	friend bool operator == (Vector4D leftVector, Vector4D rightVector);
	Vector4D operator += (Vector4D anotherVector);
	Vector4D operator -= (Vector4D anotherVector);

	Vector4D();
	Vector4D( unsigned int hexnum ); 
	~Vector4D();
};

/*

Vector4D vect = Vector4D();
vect.w = thing;



Vector4D vect = Vector4D( 0xFFFFFFFF );
Vector4D vect = Vector4D( 0xFF000000 );
Vector4D vect = Vector4D( 255 );


*/