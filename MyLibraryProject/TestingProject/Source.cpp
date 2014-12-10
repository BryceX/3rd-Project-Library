#include "MyLibrary\MyLibrary.h"
#include <iostream>

int main()
{
	/*
	Vector3D vector;
	vector.x = 1;
	vector.y = 1;
	vector.z = 1;
	Matrix3x3 translationMatrix;
	translationMatrix.Translate(vector);
	std::cout << translationMatrix << std::endl;
	*/
	
	/*std::cout << NextPow2(37) << std::endl;*/
	Matrix4x4 temp;
	temp.FillMatrix(1, 56, 1, 1, 1, 1, 1, 11, 1, 1, 1, 111, 1, 11, 1, 2);
	temp.Transpose();

	std::cout << temp << std::endl;
	system("pause");
}