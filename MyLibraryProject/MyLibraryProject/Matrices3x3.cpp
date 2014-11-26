#include "Matrices3x3.h"


Matrices3x3::Matrices3x3()
{
}
void Matrices3x3::FillMatrix(float a_1, float a_2, float a_3, float b_1, float b_2, float b_3, float c_1, float c_2, float c_3)
{
	matrix[0][0] = a_1;
	matrix[1][0] = a_2;
	matrix[2][0] = a_3;
	matrix[0][1] = b_1;
	matrix[1][1] = b_2;
	matrix[2][1] = b_3;
	matrix[0][2] = c_1;
	matrix[1][2] = c_2;
	matrix[2][2] = c_3;
}

Matrices3x3::~Matrices3x3()
{
}
