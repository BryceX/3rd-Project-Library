// GTEST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../MyLibraryProject/MyLibrary/MyLibrary.h"

//Mylibrary tests
TEST(mylibrary, lerp)
{
	float lerpTest = Lerp(0, 10, .9);
	EXPECT_FLOAT_EQ(9.f, lerpTest);
}

TEST(mylibrary, degreesToRads)
{
	float degreeConv = GetRadians(3);
	EXPECT_FLOAT_EQ(0.0523598776, degreeConv);
}

TEST(mylibrary, radiansToDegs)
{
	float radianConv = GetDegrees(9);
	EXPECT_FLOAT_EQ(515.662016, radianConv);
}
TEST(mylibrary, pow2)
{
	unsigned int powTest = NextPow2(999);
	EXPECT_EQ(1024, powTest);
	
}

//vector2d tests
TEST(vec2d, lerp)
{
	Vector2D testingVector0;
	testingVector0.x = 0;
	testingVector0.y = 0;
	Vector2D testingVector1;
	testingVector1.x = 10;
	testingVector1.y = 10;
	Vector2D expected;
	expected.x = 5;
	expected.y = 5;
	EXPECT_EQ(expected, testingVector0.Lerp(testingVector1, .5));
}

TEST(vec2d, mag)
{
	Vector2D testingVector;
	testingVector.x = 3;
	testingVector.y = 8;
	float magTest = testingVector.Magnitude();
	EXPECT_FLOAT_EQ(8.54400374532, magTest);
}

int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

