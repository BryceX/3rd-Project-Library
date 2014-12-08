#include "Matrix4x4.h"


Matrix4x4::Matrix4x4()
{
}
void Matrix4x4::FillMatrix(float a_1, float a_2, float a_3, float a_4, float b_1, float b_2, float b_3, float b_4, float c_1, float c_2, float c_3, float c_4, float d_1, float d_2, float d_3, float d_4)
{
	matrix[0][0] = a_1;
	matrix[1][0] = a_2;
	matrix[2][0] = a_3;
	matrix[3][0] = a_4;
	matrix[0][1] = b_1;
	matrix[1][1] = b_2;
	matrix[2][1] = b_3;
	matrix[3][1] = b_4;
	matrix[0][2] = c_1;
	matrix[1][2] = c_2;
	matrix[2][2] = c_3;
	matrix[3][2] = c_4;
	matrix[0][3] = d_1;
	matrix[1][3] = d_2;
	matrix[2][3] = d_3;
	matrix[3][3] = d_4;
}

Matrix4x4::~Matrix4x4()
{
}

Matrix4x4 Matrix4x4::operator *(Matrix4x4 anotherMatrix)
{
	Matrix4x4 temp;
	temp.matrix[0][0] = (matrix[0][0] * anotherMatrix.matrix[0][0]) + (matrix[1][0] * anotherMatrix.matrix[0][1]) + (matrix[2][0] * anotherMatrix.matrix[0][2]) + (matrix[3][0] * anotherMatrix.matrix[0][3]);
	temp.matrix[1][0] = (matrix[0][0] * anotherMatrix.matrix[1][0]) + (matrix[1][0] * anotherMatrix.matrix[1][1]) + (matrix[2][0] * anotherMatrix.matrix[1][2]) + (matrix[3][0] * anotherMatrix.matrix[1][3]);
	temp.matrix[2][0] = (matrix[0][0] * anotherMatrix.matrix[2][0]) + (matrix[1][0] * anotherMatrix.matrix[2][1]) + (matrix[2][0] * anotherMatrix.matrix[2][2]) + (matrix[3][0] * anotherMatrix.matrix[2][3]);
	temp.matrix[3][0] = (matrix[0][0] * anotherMatrix.matrix[3][0]) + (matrix[1][0] * anotherMatrix.matrix[3][1]) + (matrix[2][0] * anotherMatrix.matrix[3][2]) + (matrix[3][0] * anotherMatrix.matrix[3][3]);

	temp.matrix[0][1] = (matrix[0][1] * anotherMatrix.matrix[0][0]) + (matrix[1][1] * anotherMatrix.matrix[0][1]) + (matrix[2][1] * anotherMatrix.matrix[0][2]) + (matrix[3][1] * anotherMatrix.matrix[0][3]);
	temp.matrix[1][1] = (matrix[0][1] * anotherMatrix.matrix[1][0]) + (matrix[1][1] * anotherMatrix.matrix[1][1]) + (matrix[2][1] * anotherMatrix.matrix[1][2]) + (matrix[3][1] * anotherMatrix.matrix[1][3]);
	temp.matrix[2][1] = (matrix[0][1] * anotherMatrix.matrix[2][0]) + (matrix[1][1] * anotherMatrix.matrix[2][1]) + (matrix[2][1] * anotherMatrix.matrix[2][2]) + (matrix[3][1] * anotherMatrix.matrix[2][3]);
	temp.matrix[3][1] = (matrix[0][1] * anotherMatrix.matrix[3][0]) + (matrix[1][1] * anotherMatrix.matrix[3][1]) + (matrix[2][1] * anotherMatrix.matrix[3][2]) + (matrix[3][1] * anotherMatrix.matrix[3][3]);

	temp.matrix[0][2] = (matrix[0][2] * anotherMatrix.matrix[0][0]) + (matrix[1][2] * anotherMatrix.matrix[0][1]) + (matrix[2][2] * anotherMatrix.matrix[0][2]) + (matrix[3][2] * anotherMatrix.matrix[0][3]);
	temp.matrix[1][2] = (matrix[0][2] * anotherMatrix.matrix[1][0]) + (matrix[1][2] * anotherMatrix.matrix[1][1]) + (matrix[2][2] * anotherMatrix.matrix[1][2]) + (matrix[3][2] * anotherMatrix.matrix[1][3]);
	temp.matrix[2][2] = (matrix[0][2] * anotherMatrix.matrix[2][0]) + (matrix[1][2] * anotherMatrix.matrix[2][1]) + (matrix[2][2] * anotherMatrix.matrix[2][2]) + (matrix[3][2] * anotherMatrix.matrix[2][3]);
	temp.matrix[3][2] = (matrix[0][2] * anotherMatrix.matrix[3][0]) + (matrix[1][2] * anotherMatrix.matrix[3][1]) + (matrix[2][2] * anotherMatrix.matrix[3][2]) + (matrix[3][2] * anotherMatrix.matrix[3][3]);

	temp.matrix[0][3] = (matrix[0][3] * anotherMatrix.matrix[0][0]) + (matrix[1][3] * anotherMatrix.matrix[0][1]) + (matrix[2][3] * anotherMatrix.matrix[0][2]) + (matrix[3][3] * anotherMatrix.matrix[0][3]);
	temp.matrix[1][3] = (matrix[0][3] * anotherMatrix.matrix[1][0]) + (matrix[1][3] * anotherMatrix.matrix[1][1]) + (matrix[2][3] * anotherMatrix.matrix[1][2]) + (matrix[3][3] * anotherMatrix.matrix[1][3]);
	temp.matrix[2][3] = (matrix[0][3] * anotherMatrix.matrix[2][0]) + (matrix[1][3] * anotherMatrix.matrix[2][1]) + (matrix[2][3] * anotherMatrix.matrix[2][2]) + (matrix[3][3] * anotherMatrix.matrix[2][3]);
	temp.matrix[3][3] = (matrix[0][3] * anotherMatrix.matrix[3][0]) + (matrix[1][3] * anotherMatrix.matrix[3][1]) + (matrix[2][3] * anotherMatrix.matrix[3][2]) + (matrix[3][3] * anotherMatrix.matrix[3][3]);
	return temp;
}