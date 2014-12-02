#include "Vector2D.h"
#include "Vector3D.h"
#include "Vector4D.h"
#include "Matrix3x3.h"
#include "Matrix4x4.h"
#include <iostream>

int main(){

	Matrix4x4 somematrix;
	somematrix.FillMatrix(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	Matrix4x4 anothermatrix;
	anothermatrix.FillMatrix(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	
	std::cout << (somematrix * anothermatrix) << std::endl;
	std::cout << anothermatrix << std::endl;
	std::cout << somematrix << std::endl;
	system("pause");
}
