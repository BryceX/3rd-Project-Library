#include "Vector2D.h"
#include "Vector3D.h"
#include "Vector4D.h"
#include "Matrix3x3.h"
#include "Matrix4x4.h"
#include <iostream>

int main(){

	Matrix3x3 somematrix;

	somematrix.FillMatrix(1, 1, 2, 1, 1, 2, 1, 1, 2);
	somematrix.Transpose();
	std::cout << somematrix << std::endl;


	system("pause");
}
