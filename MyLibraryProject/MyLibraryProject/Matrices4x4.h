#pragma once
class Matrices4x4
{
public:
	Matrices4x4();
	float matrix[4][4];
	void FillMatrix(float a_1, float a_2, float a_3, float a_4, float b_1, float b_2, float b_3, float b_4, float c_1, float c_2, float c_3, float c_4);
	~Matrices4x4();
};

