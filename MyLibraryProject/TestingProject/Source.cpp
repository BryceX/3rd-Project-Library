#include "Vector2D.h"
#include "Vector3D.h"
#include "Vector4D.h"
#include "Matrices3x3.h"
#include <iostream>

int main(){

	Matrices3x3 nyarly;
	nyarly.FillMatrix(1, 2, 3, 4, 5, 6, 7, 8, 9);
	std::cout << nyarly.matrix[1][2] << std::endl;
	system("pause");
}
