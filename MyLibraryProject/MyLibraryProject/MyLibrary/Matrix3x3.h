#pragma once
#include <iostream>
#include <vector>
#include "Vector3D.h"
class Matrix3x3
{
public:
	Matrix3x3();
	float matrix[3][3];

	void FillMatrix(float a_1, float a_2, float a_3, float b_1, float b_2, float b_3, float c_1, float c_2, float c_3);
	void Transpose();
	Matrix3x3 SetTranslate(Vector3D vector);
	Matrix3x3 SetRotate(Vector3D vector, float radians);
	Matrix3x3 SetScale(Vector3D scaleNumber);
	Matrix3x3 operator * (Matrix3x3 matrix);
	void operator = (Matrix3x3 anothermatrix);
	bool operator == (Matrix3x3 anotherMatrix);
	friend bool operator == (Matrix3x3 leftMatrix, Matrix3x3 rightMatrix);
	~Matrix3x3();
	friend std::ostream &operator<<(std::ostream &output, const Matrix3x3 &matrix){
		for (int c = 0; c<3; ++c) {
			for (int r = 0; r<3; ++r)
			{
				output << "[" << r << "," << c << "]: " << matrix.matrix[r][c] << " ";
			}
			output << std::endl;
		}
		return output;

	}
};