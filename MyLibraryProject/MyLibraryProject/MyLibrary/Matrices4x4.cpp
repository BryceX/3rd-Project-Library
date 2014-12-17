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
void Matrix4x4::Transpose()
{
	Matrix4x4 temp;
	temp.matrix[0][0] = matrix[0][0];
	temp.matrix[1][0] = matrix[0][1];
	temp.matrix[2][0] = matrix[0][2];
	temp.matrix[3][0] = matrix[0][3];
	temp.matrix[0][1] = matrix[1][0];
	temp.matrix[1][1] = matrix[1][1];
	temp.matrix[2][1] = matrix[1][2];
	temp.matrix[3][1] = matrix[1][3];
	temp.matrix[0][2] = matrix[2][0];
	temp.matrix[1][2] = matrix[2][1];
	temp.matrix[2][2] = matrix[2][2];
	temp.matrix[3][2] = matrix[2][3];
	temp.matrix[0][3] = matrix[3][0];
	temp.matrix[1][3] = matrix[3][1];
	temp.matrix[2][3] = matrix[3][2];
	temp.matrix[3][3] = matrix[3][3];
	*this = temp;
}
void Matrix4x4::SetTranslate(Vector4D vector)
{
	Matrix4x4 transformMatrix;
	transformMatrix.matrix[0][0] = 1;
	transformMatrix.matrix[1][0] = 0;
	transformMatrix.matrix[2][0] = 0;
	transformMatrix.matrix[3][0] = vector.x;
	transformMatrix.matrix[0][1] = 0;
	transformMatrix.matrix[1][1] = 1;
	transformMatrix.matrix[2][1] = 0;
	transformMatrix.matrix[3][1] = vector.y;
	transformMatrix.matrix[0][2] = 0;
	transformMatrix.matrix[1][2] = 0;
	transformMatrix.matrix[2][2] = 1;
	transformMatrix.matrix[3][2] = vector.z;
	transformMatrix.matrix[0][3] = 0;
	transformMatrix.matrix[1][3] = 0;
	transformMatrix.matrix[2][3] = 0;
	transformMatrix.matrix[3][3] = vector.w;
	*this = transformMatrix;
}
void Matrix4x4::SetRotate(Vector4D vector, float degrees)
{
	Matrix4x4 transformMatrix;
	transformMatrix.matrix[0][0] = cos(degrees);
	transformMatrix.matrix[1][0] = -sin(degrees);
	transformMatrix.matrix[2][0] = 0;
	transformMatrix.matrix[3][0] = 0;
	transformMatrix.matrix[0][1] = sin(degrees);
	transformMatrix.matrix[1][1] = cos(degrees);
	transformMatrix.matrix[2][1] = 0;
	transformMatrix.matrix[3][1] = 0;
	transformMatrix.matrix[0][2] = 0;
	transformMatrix.matrix[1][2] = 0;
	transformMatrix.matrix[2][2] = 1;
	transformMatrix.matrix[3][2] = 0;
	transformMatrix.matrix[0][3] = 0;
	transformMatrix.matrix[1][3] = 0;
	transformMatrix.matrix[2][3] = 0;
	transformMatrix.matrix[3][3] = 1;
	return;
}
void Matrix4x4::SetScale(Vector4D scaleNumber)
{
	Matrix4x4 scaleMatrix;
	scaleMatrix.matrix[0][0] = scaleNumber.x;
	scaleMatrix.matrix[1][0] = 0;
	scaleMatrix.matrix[2][0] = 0;
	scaleMatrix.matrix[3][0] = 0;
	scaleMatrix.matrix[0][1] = 0;
	scaleMatrix.matrix[1][1] = scaleNumber.y;
	scaleMatrix.matrix[2][1] = 0;
	scaleMatrix.matrix[3][1] = 0;
	scaleMatrix.matrix[0][2] = 0;
	scaleMatrix.matrix[1][2] = 0;
	scaleMatrix.matrix[2][2] = scaleNumber.z;
	scaleMatrix.matrix[3][2] = 0;
	scaleMatrix.matrix[0][3] = 0;
	scaleMatrix.matrix[1][3] = 0;
	scaleMatrix.matrix[2][3] = 0;
	scaleMatrix.matrix[3][3] = scaleNumber.w;
	return;
}
void Matrix4x4::SetOrthographicProjection(float leftLimit, float rightLimit, float upperLimit, float lowerLimit, float far, float near)
{
	Matrix4x4 temp;
	temp.matrix[0][0] = 2 / (rightLimit - leftLimit);
	temp.matrix[1][0] = 0;
	temp.matrix[2][0] = 0;
	temp.matrix[3][0] = 0;
	temp.matrix[0][1] = 0;
	temp.matrix[1][1] = 2 / (upperLimit - lowerLimit);
	temp.matrix[2][1] = 0;
	temp.matrix[3][1] = 0;
	temp.matrix[0][2] = 0;
	temp.matrix[1][2] = 0;
	temp.matrix[2][2] = -1 / (far - near);
	temp.matrix[3][2] = 0;
	temp.matrix[0][3] = (rightLimit + leftLimit) / (rightLimit - leftLimit);
	temp.matrix[1][3] = (upperLimit + lowerLimit);
	temp.matrix[2][3] = near / (far - near);
	temp.matrix[3][3] = 1;
	return;
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
void Matrix4x4::operator = (Matrix4x4 anotherMatrix)
{
	matrix[0][0] = anotherMatrix.matrix[0][0];
	matrix[0][1] = anotherMatrix.matrix[0][1];
	matrix[0][2] = anotherMatrix.matrix[0][2];
	matrix[0][3] = anotherMatrix.matrix[0][3];
	matrix[1][0] = anotherMatrix.matrix[1][0];
	matrix[1][1] = anotherMatrix.matrix[1][1];
	matrix[1][2] = anotherMatrix.matrix[1][2];
	matrix[1][3] = anotherMatrix.matrix[1][3];
	matrix[2][0] = anotherMatrix.matrix[2][0];
	matrix[2][1] = anotherMatrix.matrix[2][1];
	matrix[2][2] = anotherMatrix.matrix[2][2];
	matrix[2][3] = anotherMatrix.matrix[2][3];
	matrix[3][0] = anotherMatrix.matrix[3][0];
	matrix[3][1] = anotherMatrix.matrix[3][1];
	matrix[3][2] = anotherMatrix.matrix[3][2];
	matrix[3][3] = anotherMatrix.matrix[3][3];
}

bool Matrix4x4::operator == (Matrix4x4 anotherMatrix)
{
	if (matrix[0][0] - anotherMatrix.matrix[0][0] < .00001 &&
		matrix[0][1] - anotherMatrix.matrix[0][1] < .00001 &&
		matrix[0][2] - anotherMatrix.matrix[0][2] < .00001 &&
		matrix[0][3] - anotherMatrix.matrix[0][3] < .00001 &&
		matrix[1][0] - anotherMatrix.matrix[1][0] < .00001 &&
		matrix[1][1] - anotherMatrix.matrix[1][1] < .00001 &&
		matrix[1][2] - anotherMatrix.matrix[1][2] < .00001 &&
		matrix[1][3] - anotherMatrix.matrix[1][3] < .00001 &&
		matrix[2][0] - anotherMatrix.matrix[2][0] < .00001 &&
		matrix[2][1] - anotherMatrix.matrix[2][1] < .00001 &&
		matrix[2][2] - anotherMatrix.matrix[2][2] < .00001 &&
		matrix[2][3] - anotherMatrix.matrix[2][3] < .00001 &&
		matrix[3][0] - anotherMatrix.matrix[3][0] < .00001 &&
		matrix[3][1] - anotherMatrix.matrix[3][1] < .00001 &&
		matrix[3][2] - anotherMatrix.matrix[3][2] < .00001 &&
		matrix[3][3] - anotherMatrix.matrix[3][3] < .00001
		)
	{
		return true;
	}
	else return false;
}
bool operator==(const Matrix4x4 &leftMatrix, const Matrix4x4 &rightMatrix)
{
	if (leftMatrix.matrix[0][0] - rightMatrix.matrix[0][0] < .00001 &&
		leftMatrix.matrix[0][1] - rightMatrix.matrix[0][1] < .00001 &&
		leftMatrix.matrix[0][2] - rightMatrix.matrix[0][2] < .00001 &&
		leftMatrix.matrix[0][3] - rightMatrix.matrix[0][3] < .00001 &&
		leftMatrix.matrix[1][0] - rightMatrix.matrix[1][0] < .00001 &&
		leftMatrix.matrix[1][1] - rightMatrix.matrix[1][1] < .00001 &&
		leftMatrix.matrix[1][2] - rightMatrix.matrix[1][2] < .00001 &&
		leftMatrix.matrix[1][3] - rightMatrix.matrix[1][3] < .00001 &&
		leftMatrix.matrix[2][0] - rightMatrix.matrix[2][0] < .00001 &&
		leftMatrix.matrix[2][1] - rightMatrix.matrix[2][1] < .00001 &&
		leftMatrix.matrix[2][2] - rightMatrix.matrix[2][2] < .00001 &&
		leftMatrix.matrix[2][3] - rightMatrix.matrix[2][3] < .00001 &&
		leftMatrix.matrix[3][0] - rightMatrix.matrix[3][0] < .00001 &&
		leftMatrix.matrix[3][1] - rightMatrix.matrix[3][1] < .00001 &&
		leftMatrix.matrix[3][2] - rightMatrix.matrix[3][2] < .00001 &&
		leftMatrix.matrix[3][3] - rightMatrix.matrix[3][3] < .00001
		)
	{
		return true;
	}
	else return false;
}