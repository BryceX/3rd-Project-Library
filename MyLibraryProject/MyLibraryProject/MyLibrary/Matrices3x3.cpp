/*

TODO:


*/

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

Matrix3x3 Matrix3x3::SetTranslate(Vector3D vector)
{
	Matrix3x3 transformMatrix;
	transformMatrix.matrix[0][0] = 1;
	transformMatrix.matrix[1][0] = 0;
	transformMatrix.matrix[2][0] = vector.x;
	transformMatrix.matrix[0][1] = 0;
	transformMatrix.matrix[1][1] = 1;
	transformMatrix.matrix[2][1] = vector.y;
	transformMatrix.matrix[0][2] = 0;
	transformMatrix.matrix[1][2] = 0;
	transformMatrix.matrix[2][2] = vector.z;
	return transformMatrix;
}
Matrix3x3 Matrix3x3::SetRotate(Vector3D vector, float radians)
{
	Matrix3x3 transformMatrix;
	transformMatrix.matrix[0][0] = cos(radians);
	transformMatrix.matrix[1][0] = -sin(radians);
	transformMatrix.matrix[2][0] = vector.x;
	transformMatrix.matrix[0][1] = sin(radians);
	transformMatrix.matrix[1][1] = cos(radians);
	transformMatrix.matrix[2][1] = vector.y;
	transformMatrix.matrix[0][2] = 0;
	transformMatrix.matrix[1][2] = 0;
	transformMatrix.matrix[2][2] = vector.z;
	return transformMatrix;
}
Matrix3x3 Matrix3x3::SetScale(Vector3D scaleNumber)
{
	Matrix3x3 scaleMatrix;
	scaleMatrix.matrix[0][0] = scaleNumber.x;
	scaleMatrix.matrix[1][0] = 0;
	scaleMatrix.matrix[2][0] = 0;
	scaleMatrix.matrix[0][1] = 0;
	scaleMatrix.matrix[1][1] = scaleNumber.y;
	scaleMatrix.matrix[2][1] = 0;
	scaleMatrix.matrix[0][2] = 0;
	scaleMatrix.matrix[1][2] = 0;
	scaleMatrix.matrix[2][2] = scaleNumber.z;
	return scaleMatrix;
}


Matrix3x3::~Matrix3x3()
{
}
Matrix3x3 Matrix3x3::operator *(Matrix3x3 anotherMatrix)
{
	Matrix3x3 temp;
	temp.matrix[0][0] = (matrix[0][0] * anotherMatrix.matrix[0][0]) + (matrix[1][0] * anotherMatrix.matrix[0][1]) + (matrix[2][0] * anotherMatrix.matrix[0][2]);
	temp.matrix[1][0] = (matrix[0][0] * anotherMatrix.matrix[1][0]) + (matrix[1][0] * anotherMatrix.matrix[1][1]) + (matrix[2][0] * anotherMatrix.matrix[1][2]);
	temp.matrix[2][0] = (matrix[0][0] * anotherMatrix.matrix[2][0]) + (matrix[1][0] * anotherMatrix.matrix[2][1]) + (matrix[2][0] * anotherMatrix.matrix[2][2]);
	temp.matrix[0][1] = (matrix[0][1] * anotherMatrix.matrix[0][0]) + (matrix[1][1] * anotherMatrix.matrix[0][1]) + (matrix[2][1] * anotherMatrix.matrix[0][2]);
	temp.matrix[1][1] = (matrix[0][1] * anotherMatrix.matrix[1][0]) + (matrix[1][1] * anotherMatrix.matrix[1][1]) + (matrix[2][1] * anotherMatrix.matrix[1][2]);
	temp.matrix[2][1] = (matrix[0][1] * anotherMatrix.matrix[2][0]) + (matrix[1][1] * anotherMatrix.matrix[2][1]) + (matrix[2][1] * anotherMatrix.matrix[2][2]);
	temp.matrix[0][2] = (matrix[0][2] * anotherMatrix.matrix[0][0]) + (matrix[1][2] * anotherMatrix.matrix[0][1]) + (matrix[2][2] * anotherMatrix.matrix[0][2]);
	temp.matrix[1][2] = (matrix[0][2] * anotherMatrix.matrix[1][0]) + (matrix[1][2] * anotherMatrix.matrix[1][1]) + (matrix[2][2] * anotherMatrix.matrix[1][2]);
	temp.matrix[2][2] = (matrix[0][2] * anotherMatrix.matrix[2][0]) + (matrix[1][2] * anotherMatrix.matrix[2][1]) + (matrix[2][2] * anotherMatrix.matrix[2][2]);
	return temp;
}

void Matrix3x3::operator = (Matrix3x3 anotherMatrix)
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
}
bool Matrix3x3::operator == (Matrix3x3 anotherMatrix)
{
	if (matrix[0][0] - anotherMatrix.matrix[0][0] < .00001 &&
		matrix[0][1] - anotherMatrix.matrix[0][1] < .00001 &&
		matrix[0][2] - anotherMatrix.matrix[0][2] < .00001 &&
		matrix[1][0] - anotherMatrix.matrix[1][0] < .00001 &&
		matrix[1][1] - anotherMatrix.matrix[1][1] < .00001 &&
		matrix[1][2] - anotherMatrix.matrix[1][2] < .00001 &&
		matrix[2][0] - anotherMatrix.matrix[2][0] < .00001 &&
		matrix[2][1] - anotherMatrix.matrix[2][1] < .00001 &&
		matrix[2][2] - anotherMatrix.matrix[2][2] < .00001)
	{
		return true;
	}
	else return false;
}
bool operator==(const Matrix3x3 &leftMatrix, const Matrix3x3 &rightMatrix)
{
	// @BryceX: look into using a double for loop

	if (leftMatrix.matrix[0][0] - rightMatrix.matrix[0][0]< .00001 &&
		leftMatrix.matrix[1][0] - rightMatrix.matrix[1][0]< .00001 &&
		leftMatrix.matrix[2][0] - rightMatrix.matrix[2][0]< .00001 &&
		leftMatrix.matrix[0][1] - rightMatrix.matrix[0][1]< .00001 &&
		leftMatrix.matrix[1][1] - rightMatrix.matrix[1][1]< .00001 &&
		leftMatrix.matrix[2][1] - rightMatrix.matrix[2][1]< .00001 &&
		leftMatrix.matrix[0][2] - rightMatrix.matrix[0][2]< .00001 &&
		leftMatrix.matrix[1][2] - rightMatrix.matrix[1][2]< .00001 &&
		leftMatrix.matrix[2][2] - rightMatrix.matrix[2][2]< .00001)
	{
		return true;
	}
	else return false;
}
/*
Matrix3x3 Matrix3x3::operator * (Vector3D vector)
{
	Matrix3x3 temp;
	temp.vector[0][0] = (vector[0][0])

}
*/