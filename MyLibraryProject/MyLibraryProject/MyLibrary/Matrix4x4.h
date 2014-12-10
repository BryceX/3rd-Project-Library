#pragma once
#include <iostream>
#include "Vector4D.h"
class Matrix4x4
{
public:
	Matrix4x4();
	float matrix[4][4];
	void FillMatrix(float a_1, float a_2, float a_3, float a_4, float b_1, float b_2, float b_3, float b_4, float c_1, float c_2, float c_3, float c_4, float d_1, float d_2, float d_3, float d_4);
	void Transpose();
	void SetTranslate(Vector4D vector);
	void SetRotate(Vector4D vector, float degrees);
	void SetScale(Vector4D scaleNumber);
	Matrix4x4 operator * (Matrix4x4 matrix);
	~Matrix4x4();
	friend std::ostream &operator<<(std::ostream &output, const Matrix4x4 &matrix){
		for (int c = 0; c<4; ++c) {
			for (int r = 0; r<4; ++r) {
				output << "[" << r << "," << c << "]: " << matrix.matrix[r][c] << " ";
			}
			output << std::endl;
		}
		return output;

	}
};

