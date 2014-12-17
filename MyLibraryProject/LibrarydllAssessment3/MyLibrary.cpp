#include "MyLibrary.h"

float Lerp(float var1, float var2, float percentvalue)
{
	return var1 + percentvalue * (var2 - var1);
}
float GetRadians(float degrees)
{
	return degrees * 0.0174532925;
}
float GetDegrees(float radians)
{
	return radians * 57.2957795;
}
unsigned int NextPow2(unsigned int input)
{
	unsigned int nthPower = 1;
	while (input > nthPower)
	{
		nthPower *= 2;
	}
	return nthPower;
}

/*

110

1
10
100
1000

8

*/