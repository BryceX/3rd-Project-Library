// GTEST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../MyLibraryProject/MyLibrary/MyLibrary.h"

//Mylibrary general tests
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
	Vector2D v3 = testingVector0.Lerp(testingVector1, .75);
	EXPECT_EQ(expected, v3);
}
TEST(vec2d, mag)
{
	Vector2D testingVector;
	testingVector.x = 3;
	testingVector.y = 8;
	float magTest = testingVector.Magnitude();
	EXPECT_FLOAT_EQ(8.54400374532, magTest);
}
TEST(vec2d, norm)
{
	Vector2D testingVector = Vector2D();

	testingVector.x = 1;
	testingVector.y = 0;
	testingVector.Magnitude();
	testingVector.Normalize();
	EXPECT_FLOAT_EQ(1.f, testingVector.x);
	EXPECT_FLOAT_EQ(0.f, testingVector.y);
}
TEST(vec2d, dotP)
{
	Vector2D testingVector0;
	testingVector0.x = 5;
	testingVector0.y = 10;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	EXPECT_FLOAT_EQ(15.f, testingVector0.DotProduct(testingVector1));
}
TEST(vec2d, opAdd)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	Vector2D opadd = (testingVector0 + testingVector1);
	EXPECT_EQ(2, opadd.x);
	EXPECT_EQ(2, opadd.y);
}
TEST(vec2d, opSub)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	Vector2D opadd = (testingVector0 - testingVector1);
	EXPECT_EQ(0, opadd.x);
	EXPECT_EQ(0, opadd.y);
}
TEST(vec2d, opMulti)
{
	Vector2D testingVector0;
	testingVector0.x = 2;
	testingVector0.y = 2;
	float testFloat = 2;
	Vector2D opmulti = (testingVector0 * testFloat);
	EXPECT_EQ(4, opmulti.x);
	EXPECT_EQ(4, opmulti.y);
}
TEST(vec2d, opEqual)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	(testingVector0 = testingVector1);
	EXPECT_EQ(1, testingVector0.x);
	EXPECT_EQ(1, testingVector0.y);
}
TEST(vec2d, opIsEqual)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	bool opisequal = (testingVector0.x == testingVector1.x);
	EXPECT_EQ(true, opisequal);
}
TEST(vec2d, opPlusEqual)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 4;
	testingVector1.y = 4;
	(testingVector0.x += testingVector1.x);
	(testingVector0.y += testingVector1.y);
	EXPECT_EQ(5, testingVector0.x);
	EXPECT_EQ(5, testingVector0.y);
}
TEST(vec2d, opMinusEqual)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 4;
	testingVector1.y = 4;
	(testingVector0.x -= testingVector1.x);
	(testingVector0.y -= testingVector1.y);
	EXPECT_EQ(-3, testingVector0.x);
	EXPECT_EQ(-3, testingVector0.y);
}
TEST(vec2d, opIsEqualFriend)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	EXPECT_TRUE(operator==(testingVector0, testingVector1));
	EXPECT_TRUE(testingVector0.operator==(testingVector1));
	EXPECT_EQ(testingVector0, testingVector1);
}
//vector3d tests  CURRENTLY WORKING ON

TEST(vec3d, lerp)
{
	Vector3D testingVector0;
	testingVector0.x = 0.f;
	testingVector0.y = 0.f;
	testingVector0.z = 0.f;
	Vector3D testingVector1;
	testingVector1.x = 10.f;
	testingVector1.y = 10.f;
	testingVector1.z = 10.f;
	Vector3D expected;
	expected.x = 5.f;
	expected.y = 5.f;
	expected.z = 5.f;
	EXPECT_EQ(expected, testingVector0.Lerp(testingVector1, .5));
}
TEST(vec3d, mag)
{
	Vector3D testingVector;
	testingVector.x = 3;
	testingVector.y = 8;
	testingVector.z = 15;
	float magTest = testingVector.Magnitude();
	EXPECT_FLOAT_EQ(17.2626765016, magTest);
}
TEST(vec3d, norm)
{
	Vector3D testingVector = Vector3D();
	testingVector.x = 1;
	testingVector.y = 0;
	testingVector.z = 9;
	testingVector.Magnitude();
	testingVector.Normalize();
	EXPECT_FLOAT_EQ(0.11043152607f, testingVector.x);
	EXPECT_FLOAT_EQ(0.f, testingVector.y);
	//EXPECT_FLOAT_EQ(testingVector.z, testingVector.z);  NOT WORKING PROPERLY
}
/*
TEST(vec3d, crossP)
{
	Vector3D testingVector0;
	testingVector0.x = 5;
	testingVector0.y = 10;
	testingVector0.z = 12;
	Vector3D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	testingVector1.z = 1;
	Vector3D result;
	result.x = -2;
	result.y = 7; //should be correct. dont know how to check values of my vector in google test
	result.z = -5;
	EXPECT_EQ(result, testingVector0.DotProduct(testingVector1));
}
*/
TEST(vec3d, dotP)
{
	Vector3D testVec0;
	testVec0.x = 7;
	testVec0.y = 4;
	testVec0.z = 5;
	Vector3D testVec1;
	testVec1.x = 3;
	testVec1.y = 2;
	testVec1.z = 8;
	EXPECT_EQ(69, testVec0.DotProduct(testVec1));
}
/*
TEST(vec2d, opAdd)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	Vector2D opadd = (testingVector0 + testingVector1);
	EXPECT_EQ(2, opadd.x);
	EXPECT_EQ(2, opadd.y);
}
TEST(vec2d, opSub)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	Vector2D opadd = (testingVector0 - testingVector1);
	EXPECT_EQ(0, opadd.x);
	EXPECT_EQ(0, opadd.y);
}
TEST(vec2d, opMulti)
{
	Vector2D testingVector0;
	testingVector0.x = 2;
	testingVector0.y = 2;
	float testFloat = 2;
	Vector2D opmulti = (testingVector0 * testFloat);
	EXPECT_EQ(4, opmulti.x);
	EXPECT_EQ(4, opmulti.y);
}
TEST(vec2d, opEqual)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	Vector2D opequal = (testingVector0 = testingVector1);
	EXPECT_EQ(1, opequal.x);
	EXPECT_EQ(1, opequal.y);
}
TEST(vec2d, opIsEqual)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	bool opisequal = (testingVector0.x == testingVector1.x);
	EXPECT_EQ(true, opisequal);
}
TEST(vec2d, opPlusEqual)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 4;
	testingVector1.y = 4;
	(testingVector0.x += testingVector1.x);
	(testingVector0.y += testingVector1.y);
	EXPECT_EQ(5, testingVector0.x);
	EXPECT_EQ(5, testingVector0.y);
}
TEST(vec2d, opMinusEqual)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 4;
	testingVector1.y = 4;
	(testingVector0.x -= testingVector1.x);
	(testingVector0.y -= testingVector1.y);
	EXPECT_EQ(-3, testingVector0.x);
	EXPECT_EQ(-3, testingVector0.y);
}
TEST(vec2d, opIsEqualFriend)
{
	Vector2D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	Vector2D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	EXPECT_TRUE(operator==(testingVector0, testingVector1));
	EXPECT_TRUE(testingVector0.operator==(testingVector1));
	EXPECT_EQ(testingVector0, testingVector1);
}*/


int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

/*

mag = 1

*/