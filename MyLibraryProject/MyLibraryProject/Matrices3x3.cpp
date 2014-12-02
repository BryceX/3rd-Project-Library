#include "Matrix3x3.h"


Matrix3x3::Matrix3x3()
{
}
void Matrix3x3::FillMatrix(float a_1, float a_2, float a_3, float b_1, float b_2, float b_3, float c_1, float c_2, float c_3)
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
void Matrix3x3::Transpose()
{
	Matrix3x3 temp;
	temp.matrix[0][0] = matrix[0][0];
	temp.matrix[1][1] = matrix[1][1];
	temp.matrix[2][2] = matrix[2][2];
	temp.matrix[1][0] = matrix[0][1];
	temp.matrix[0][1] = matrix[1][0];
	temp.matrix[2][0] = matrix[0][2];
	temp.matrix[0][2] = matrix[2][0];
	temp.matrix[1][2] = matrix[2][1];
	temp.matrix[2][1] = matrix[1][2];
	*this = temp;
}

Matrix3x3::~Matrix3x3()
{
}
Matrix3x3 Matrix3x3::operator *(Matrix3x3 anotherMatrix)
{
	Matrix3x3 temp;
	temp.matrix[0][0] = (matrix[0][0] * anotherMatrix.matrix[0][0]) + (matrix[0][1] * anotherMatrix.matrix[1][0]) + (matrix[0][2] * anotherMatrix.matrix[2][0]);
	temp.matrix[0][1] = (matrix[0][0] * anotherMatrix.matrix[0][1]) + (matrix[0][1] * anotherMatrix.matrix[1][1]) + (matrix[0][2] * anotherMatrix.matrix[2][1]);
	temp.matrix[0][2] = (matrix[0][0] * anotherMatrix.matrix[0][2]) + (matrix[0][1] * anotherMatrix.matrix[1][2]) + (matrix[0][2] * anotherMatrix.matrix[2][2]);
	temp.matrix[1][0] = (matrix[1][0] * anotherMatrix.matrix[0][0]) + (matrix[1][1] * anotherMatrix.matrix[1][0]) + (matrix[1][2] * anotherMatrix.matrix[2][0]);
	temp.matrix[1][1] = (matrix[1][0] * anotherMatrix.matrix[0][1]) + (matrix[1][1] * anotherMatrix.matrix[1][1]) + (matrix[1][2] * anotherMatrix.matrix[2][1]);
	temp.matrix[1][2] = (matrix[1][0] * anotherMatrix.matrix[0][2]) + (matrix[1][1] * anotherMatrix.matrix[1][2]) + (matrix[1][2] * anotherMatrix.matrix[2][2]);
	temp.matrix[2][0] = (matrix[2][0] * anotherMatrix.matrix[0][0]) + (matrix[2][1] * anotherMatrix.matrix[1][0]) + (matrix[2][2] * anotherMatrix.matrix[2][0]);
	temp.matrix[2][1] = (matrix[2][0] * anotherMatrix.matrix[0][1]) + (matrix[2][1] * anotherMatrix.matrix[1][1]) + (matrix[2][2] * anotherMatrix.matrix[2][1]);
	temp.matrix[2][2] = (matrix[2][0] * anotherMatrix.matrix[0][2]) + (matrix[2][1] * anotherMatrix.matrix[1][2]) + (matrix[2][2] * anotherMatrix.matrix[2][2]);
	return temp;
}

Matrix3x3 Matrix3x3::operator = (Matrix3x3 anotherMatrix)
{
	matrix[0][0] = anotherMatrix.matrix[0][0];
	matrix[0][1] = anotherMatrix.matrix[0][1];
	matrix[0][2] = anotherMatrix.matrix[0][2];
	matrix[1][0] = anotherMatrix.matrix[1][0];
	matrix[1][1] = anotherMatrix.matrix[1][1];
	matrix[1][2] = anotherMatrix.matrix[1][2];
	matrix[2][0] = anotherMatrix.matrix[2][0];
	matrix[2][1] = anotherMatrix.matrix[2][1];
	matrix[2][2] = anotherMatrix.matrix[2][2];
	return *this;
}