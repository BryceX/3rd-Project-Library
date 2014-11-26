#pragma once
class Matrices3x3
{
public:
	Matrices3x3();
	float matrix[3][3];
	void FillMatrix(float a_1, float a_2, float a_3, float b_1, float b_2, float b_3, float c_1, float c_2, float c_3);
	~Matrices3x3();
};

