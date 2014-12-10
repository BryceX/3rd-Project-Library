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

void Matrix3x3::SetTranslate(Vector3D vector)
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
	*this = transformMatrix;
}
void Matrix3x3::SetRotate(Vector3D vector, float degrees)
{
	Matrix3x3 transformMatrix;
	transformMatrix.matrix[0][0] = cos(degrees);
	transformMatrix.matrix[1][0] = -sin(degrees);
	transformMatrix.matrix[2][0] = 0;
	transformMatrix.matrix[0][1] = sin(degrees);
	transformMatrix.matrix[1][1] = cos(degrees);
	transformMatrix.matrix[2][1] = 0;
	transformMatrix.matrix[0][2] = 0;
	transformMatrix.matrix[1][2] = 0;
	transformMatrix.matrix[2][2] = 1;
	return;
}
void Matrix3x3::SetScale(Vector3D scaleNumber)
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
	return;
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
/*
Matrix3x3 Matrix3x3::operator * (Vector3D vector)
{
	Matrix3x3 temp;
	temp.vector[0][0] = (vector[0][0])

}
*/