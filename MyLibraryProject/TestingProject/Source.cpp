#include "Vector2D.h"
#include "Vector3D.h"
#include "Vector4D.h"
#include "Matrix3x3.h"
#include "Matrix4x4.h"
#include <iostream>

int main(){

	unsigned int testhex = 0x7D23F814;
	unsigned int w, x, y, z;

	x = (testhex & 0xFF000000) >> 24;
	y = (testhex & 0xFF0000) >> 16;
	z = (testhex & 0xFF00) >> 8;
	w = (testhex & 0xFF) >> 0;
	
	std::cout << x << std::endl << y << std::endl << z << std::endl << w << std::endl;

	system("pause");
}
