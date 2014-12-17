#pragma once
#ifdef DLL
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif
#include <iostream>
#include "Vector4D.h"
#include <cmath>
class DLLEXPORT Matrix4x4
{
public:
	Matrix4x4();
	float matrix[4][4];
	//done
	void FillMatrix(float a_1, float a_2, float a_3, float a_4, float b_1, float b_2, float b_3, float b_4, float c_1, float c_2, float c_3, float c_4, float d_1, float d_2, float d_3, float d_4);
	//done
	void Transpose();
	//done
	Matrix4x4 SetTranslate(Vector4D vector);
	//done
	Matrix4x4 SetRotate(Vector4D vector, float radians);
	//done
	Matrix4x4 SetScale(Vector4D scaleNumber);
	//inc
	Matrix4x4 SetOrthographicProjection(float leftLimit, float rightLimit, float upperLimit, float lowerLimit, float far, float near);
	//done
	Matrix4x4 operator * (Matrix4x4 matrix);
	//done
	void operator = (Matrix4x4 anothermatrix);
	//done
	bool operator == (Matrix4x4 anotherMatrix);
	//done
	DLLEXPORT friend bool operator == (const Matrix4x4 &leftMatrix, const Matrix4x4 &rightMatrix);
	~Matrix4x4();
	DLLEXPORT friend std::ostream &operator<<(std::ostream &output, const Matrix4x4 &matrix)
	{
		for (int c = 0; c<4; ++c) 
		{
			for (int r = 0; r<4; ++r) 
			{
				output << "[" << r << "," << c << "]: " << matrix.matrix[r][c] << " ";
			}
			output << std::endl;
		}
		return output;

	}
};

