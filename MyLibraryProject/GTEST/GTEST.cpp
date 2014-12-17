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
	bool opisequal = (testingVector0 == testingVector1);
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
//vector3d tests 

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
	testingVector.x = 2;
	testingVector.y = 5;
	testingVector.z = 7;
	testingVector.Normalize();
	EXPECT_FLOAT_EQ(0.22645540682f, testingVector.x);
	EXPECT_FLOAT_EQ(0.56613851707f, testingVector.y);
	EXPECT_FLOAT_EQ(0.7925939239f, testingVector.z);
}

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
	EXPECT_EQ(result, testingVector0.CrossProduct(testingVector1));
}

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

TEST(vec3d, opAdd)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 3;
	Vector3D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	testingVector1.z = 2;
	Vector3D opadd;
	opadd.x = 2;
	opadd.y = 2;
	opadd.z = 5;
	EXPECT_EQ(opadd, (testingVector0 + testingVector1));
}

TEST(vec3d, opSub)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	Vector3D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	testingVector1.z = 1;
	Vector3D opsub;
	opsub.x = 0;
	opsub.y = 0;
	opsub.z = 0;
	EXPECT_EQ(opsub, (testingVector0 - testingVector1));
}

TEST(vec3d, opMulti)
{
	Vector3D testingVector0;
	testingVector0.x = 2;
	testingVector0.y = 2;
	testingVector0.z = 5;
	float testFloat = 2;
	Vector3D opmulti; 
	opmulti.x = 4;
	opmulti.y = 4;
	opmulti.z = 10;
	EXPECT_EQ(opmulti, (testingVector0 * testFloat));
}

TEST(vec3d, opEqual)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 2;
	Vector3D opequal;
	opequal.x = 1;
	opequal.y = 1;
	opequal.z = 2;
	EXPECT_EQ(opequal, testingVector0);
}

TEST(vec3d, opIsEqual)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 5;
	Vector3D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	testingVector1.z = 5;
	bool opisequal = (testingVector0.x == testingVector1.x);
	EXPECT_EQ(true, opisequal);
}

TEST(vec3d, opPlusEqual)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 2;
	Vector3D testingVector1;
	testingVector1.x = 4;
	testingVector1.y = 4;
	testingVector1.z = 5;
	Vector3D result;
	result.x = 5;
	result.y = 5;
	result.z = 7;
	EXPECT_EQ(result, (testingVector0 += testingVector1));
}

TEST(vec3d, opMinusEqual)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 2;
	Vector3D testingVector1;
	testingVector1.x = 4;
	testingVector1.y = 4;
	testingVector1.z = 1;
	Vector3D result;
	result.x = -3;
	result.y = -3;
	result.z = 1;
	EXPECT_EQ(result, (testingVector0 -= testingVector1));
}

TEST(vec3d, opIsEqualFriend)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	Vector3D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	testingVector1.z = 1;
	EXPECT_TRUE(operator==(testingVector0, testingVector1));
	EXPECT_TRUE(testingVector0.operator==(testingVector1));
	EXPECT_EQ(testingVector0, testingVector1);
}
TEST(vec3d, opAddF)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	float testFloat = 9;
	Vector3D testingVector1;
	testingVector1.x = 10;
	testingVector1.y = 10;
	testingVector1.z = 10;
	EXPECT_EQ(testingVector1, (testingVector0 + testFloat));
}
TEST(vec3d, opSubF)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	float testFloat = 3;
	Vector3D testingVector1; 
	testingVector1.x = -2;
	testingVector1.y = -2;
	testingVector1.z = -2;
	EXPECT_EQ(testingVector1, (testingVector0 - testFloat));
}
TEST(vec3d, opMultiF)
{
	Vector3D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	float testFloat = 3;
	Vector3D testingVector1; 
	testingVector1.x = 3;
	testingVector1.y = 3;
	testingVector1.z = 3;
	EXPECT_EQ(testingVector1, (testingVector0 * testFloat));
}
TEST(vec3d, opDivF)
{
	Vector3D testingVector0;
	testingVector0.x = 3;
	testingVector0.y = 3;
	testingVector0.z = 3;
	float testFloat = 3;
	Vector3D testingVector1; 
	testingVector1.x = 1;
	testingVector1.y = 1;
	testingVector1.z = 1;
	EXPECT_EQ(testingVector1, (testingVector0/testFloat));
}
TEST(vec3d, opEqualsF)
{
	Vector3D testingVector0;
	testingVector0.x = 0;
	testingVector0.y = 0;
	testingVector0.z = 0;
	float testFloat = 1;
	Vector3D testingVector1;
	testingVector1.x = 1;
	testingVector1.y = 1;
	testingVector1.z = 1;
	EXPECT_EQ(testingVector1, (testingVector0 = testFloat));
}
//Vector4 tests start here
TEST(vec4d, mag)
{
	Vector4D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	testingVector0.w = 1;
	EXPECT_EQ(2,testingVector0.Magnitude());
}
TEST(vec4d, norm)
{
	Vector4D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	testingVector0.w = 1;//i have no idea what im doing here
	Vector4D result;
	result.x = .5;
	result.y = .5;
	result.z = .5;
	result.w = .5;
	testingVector0.Normalize();
	EXPECT_EQ(result, testingVector0);
}
TEST(vec4d, opAdd)
{
	Vector4D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	testingVector0.w = 1;
	Vector4D testingVector1;
	testingVector0.x = 4;
	testingVector0.y = 4;
	testingVector0.z = 4;
	testingVector0.w = 4;
	Vector4D result;
	result.x = 5;
	result.y = 5;
	result.z = 5;
	result.w = 5;
	EXPECT_EQ(result, (testingVector0 + testingVector1));
}
TEST(vec4d, opSub)
{
	Vector4D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	testingVector0.w = 1;
	Vector4D testingVector1;
	testingVector0.x = 4;
	testingVector0.y = 4;
	testingVector0.z = 4;
	testingVector0.w = 4;
	Vector4D result;
	result.x = -3;
	result.y = -3;
	result.z = -3;
	result.w = -3;
	EXPECT_EQ(result, (testingVector0 - testingVector1));
}
TEST(vec4d, opMultiF)
{
	Vector4D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	testingVector0.w = 1;
	float testFloat = 2;
	Vector4D result;
	result.x = 2;
	result.y = 2;
	result.z = 2;
	result.w = 2;
	EXPECT_EQ(result, (testingVector0*testFloat));
}
TEST(vec4d, opEqual)
{
	Vector4D testingVector0;
	testingVector0.x = 1;
	testingVector0.y = 1;
	testingVector0.z = 1;
	testingVector0.w = 1;
	Vector4D result;
	result.x = 1;
	result.y = 1;
	result.z = 1;
	result.w = 1;
	EXPECT_EQ(result, testingVector0);
}
//Matrix3x3 tests start here
TEST(M3x3, fill)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(1, 1, 1, 1, 1, 1, 1, 1, 1);
	Matrix3x3 testMatrix1;
	testMatrix1.matrix[0][0] = 1;
	testMatrix1.matrix[1][0] = 1;
	testMatrix1.matrix[2][0] = 1;
	testMatrix1.matrix[0][1] = 1;
	testMatrix1.matrix[1][1] = 1;
	testMatrix1.matrix[2][1] = 1;
	testMatrix1.matrix[0][2] = 1;
	testMatrix1.matrix[1][2] = 1;
	testMatrix1.matrix[2][2] = 1;
	EXPECT_EQ(testMatrix1, testMatrix0);
}
TEST(M3x3, transpose)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(1, 1, 2, 1, 1, 2, 1, 1, 2);
	Matrix3x3 testMatrix1;
	testMatrix1.matrix[0][0] = 1;
	testMatrix1.matrix[1][0] = 1;
	testMatrix1.matrix[2][0] = 1;
	testMatrix1.matrix[0][1] = 1;
	testMatrix1.matrix[1][1] = 1;
	testMatrix1.matrix[2][1] = 1;
	testMatrix1.matrix[0][2] = 2;
	testMatrix1.matrix[1][2] = 2;
	testMatrix1.matrix[2][2] = 2;
	testMatrix0.Transpose();
	EXPECT_EQ(testMatrix1, testMatrix0);
}
TEST(M3x3, translate)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(0,0,0,0,0,0,0,0,0);
	Matrix3x3 testMatrix1;
	testMatrix1.matrix[0][0] = 1;
	testMatrix1.matrix[1][0] = 0;
	testMatrix1.matrix[2][0] = 1;
	testMatrix1.matrix[0][1] = 0;
	testMatrix1.matrix[1][1] = 1;
	testMatrix1.matrix[2][1] = 1;
	testMatrix1.matrix[0][2] = 0;
	testMatrix1.matrix[1][2] = 0;
	testMatrix1.matrix[2][2] = 1;
	Vector3D translateVector;
	translateVector.x = 1;
	translateVector.y = 1;
	translateVector.z = 1;
	EXPECT_EQ(testMatrix1, testMatrix0.SetTranslate(translateVector));
}
TEST(M3x3, rotate)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0);
	Vector3D testVector;
	testVector.x = 1;
	testVector.y = 1;
	testVector.z = 1;
	Matrix3x3 result;//I forgot I had a fill matrix function when doing additional matrices LIKE AN IDIOT!
	result.matrix[0][0] = 1;
	result.matrix[1][0] = 0;
	result.matrix[2][0] = 1;
	result.matrix[0][1] = 0;
	result.matrix[1][1] = 1;
	result.matrix[2][1] = 1;
	result.matrix[0][2] = 0;
	result.matrix[1][2] = 0;
	result.matrix[2][2] = 1;
	EXPECT_EQ(result, testMatrix0.SetRotate(testVector, 0));
}
TEST(M3x3, scale)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0);
	Vector3D testVector;
	testVector.x = 1;
	testVector.y = 1;
	testVector.z = 1;
	Matrix3x3 result;
	result.matrix[0][0] = 1;
	result.matrix[1][0] = 0;
	result.matrix[2][0] = 0;
	result.matrix[0][1] = 0;
	result.matrix[1][1] = 1;
	result.matrix[2][1] = 0;
	result.matrix[0][2] = 0;
	result.matrix[1][2] = 0;
	result.matrix[2][2] = 1;
	EXPECT_EQ(result, testMatrix0.SetScale(testVector));
}
TEST(M3x3, opMulti)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(1,2,2,3,4,5,6,7,9);
	Matrix3x3 testMatrix1;
	testMatrix1.FillMatrix(4, 1, 2, 3, 6, 3, 2, 1, 7);
	Matrix3x3 result;
	result.FillMatrix(14, 15, 22, 34, 32, 53, 63, 57, 96);

	EXPECT_EQ(result, (testMatrix0*testMatrix1));
}
TEST(M3x3, opEqual)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(1, 2, 2, 3, 4, 5, 6, 7, 9);
	Matrix3x3 result;
	(result = testMatrix0);
	EXPECT_EQ(result, testMatrix0);
}
TEST(M3x3, opIsEqual)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(1, 2, 2, 3, 4, 5, 6, 7, 9);
	Matrix3x3 testMatrix1;
	testMatrix1 = testMatrix0;

	bool result = (testMatrix0 == testMatrix1);
	EXPECT_EQ(true, result);

	Matrix3x3 testMatrix2;
	testMatrix2.FillMatrix(-1,-1,-1,-1,-1,-1,-1,-1,-1);

	EXPECT_FALSE(testMatrix0 == testMatrix2);
}
TEST(M3x3, opIsEqualFriend)
{
	Matrix3x3 testMatrix0;
	testMatrix0.FillMatrix(1, 2, 2, 3, 4, 5, 6, 7, 9);
	Matrix3x3 testMatrix1;
	testMatrix1 = testMatrix0;
	EXPECT_EQ(true, operator==(testMatrix0, testMatrix1));
}

//Matrix4x4 tests start here
TEST(M4x4, Fill)
{
	Matrix4x4 testMatrix0;
	testMatrix0.FillMatrix(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	Matrix4x4 result;
	result.matrix[0][0] = 1;
	result.matrix[1][0] = 1;
	result.matrix[2][0] = 1;
	result.matrix[3][0] = 1;
	result.matrix[0][1] = 1;
	result.matrix[1][1] = 1;
	result.matrix[2][1] = 1;
	result.matrix[3][1] = 1;
	result.matrix[0][2] = 1;
	result.matrix[1][2] = 1;
	result.matrix[2][2] = 1;
	result.matrix[3][2] = 1;
	result.matrix[0][3] = 1;
	result.matrix[1][3] = 1;
	result.matrix[2][3] = 1;
	result.matrix[3][3] = 1;
	EXPECT_EQ(result, testMatrix0);
}
TEST(M4x4, transpose)
{
	Matrix4x4 testMatrix0;
	testMatrix0.FillMatrix(1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2);
	Matrix4x4 testMatrix1;
	testMatrix1.matrix[0][0] = 1;
	testMatrix1.matrix[1][0] = 1;
	testMatrix1.matrix[2][0] = 1;
	testMatrix1.matrix[3][0] = 1;
	testMatrix1.matrix[0][1] = 1;
	testMatrix1.matrix[1][1] = 1;
	testMatrix1.matrix[2][1] = 1;
	testMatrix1.matrix[3][1] = 1;
	testMatrix1.matrix[0][2] = 1;
	testMatrix1.matrix[1][2] = 1;
	testMatrix1.matrix[2][2] = 1;
	testMatrix1.matrix[3][2] = 1;
	testMatrix1.matrix[0][3] = 2;
	testMatrix1.matrix[1][3] = 2;
	testMatrix1.matrix[2][3] = 2;
	testMatrix1.matrix[3][3] = 2;
	testMatrix0.Transpose();
	EXPECT_EQ(testMatrix1, testMatrix0);
}
TEST(M4x4, translate)
{
	Matrix4x4 testMatrix;
	testMatrix.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Vector4D testVector;
	testVector.x = 1;
	testVector.y = 1;
	testVector.z = 1;
	testVector.w = 1;
	Matrix4x4 result;
	result.FillMatrix(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1);
	EXPECT_EQ(result, testMatrix.SetTranslate(testVector));
}
TEST(M4x4, rotate)
{
	Matrix4x4 testMatrix;
	testMatrix.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Vector4D testVector;
	testVector.x = 1;
	testVector.y = 1;
	testVector.z = 1;
	testVector.w = 1;
	Matrix4x4 result;
	result.FillMatrix(1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1);
	;
	EXPECT_EQ(result, testMatrix.SetRotate(testVector, 0));
}
TEST(M4x4, scale)
{
	Matrix4x4 testMatrix;
	testMatrix.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Vector4D testVector;
	testVector.x = 1;
	testVector.y = 1;
	testVector.z = 1;
	testVector.w = 1;
	Matrix4x4 result;
	result.FillMatrix(1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1);
	EXPECT_EQ(result, testMatrix.SetScale(testVector));
}
TEST(M4x4, orthoProj)
{
	Matrix4x4 testMatrix;
	testMatrix.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Matrix4x4 result;
	result.FillMatrix(2,0,0,0,0,2,0,0,0,0,-1,0,3,3,1,1);
	EXPECT_EQ(result, testMatrix.SetOrthographicProjection(1,2,2,1,2,1));
}
TEST(M4x4, opMulti)
{
	Matrix4x4 testMatrix0;
	testMatrix0.FillMatrix(1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4);
	Matrix4x4 testMatrix1;
	testMatrix1.FillMatrix(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	Matrix4x4 result;
	//result.FillMatrix(4, 4, 4, 4, 8, 8, 8, 8, 12, 12, 12, 12, 16, 16, 16, 16);
	result.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	EXPECT_EQ(result, testMatrix1);
}
TEST(M4x4, opEqual)
{
	Matrix4x4 testMatrix;
	testMatrix.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Matrix4x4 result;
	result = testMatrix;
	EXPECT_EQ(result, testMatrix);
}
TEST(M4x4, opIsEqual)
{
	Matrix4x4 testMatrix;
	testMatrix.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Matrix4x4 result;
	result = testMatrix;
	bool secondResult = (result == testMatrix);
	EXPECT_EQ(true, secondResult);
}
TEST(M4x4, opIsEqualFriend)
{
	Matrix4x4 testMatrix;
	testMatrix.FillMatrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Matrix4x4 result;
	result = testMatrix;
	EXPECT_EQ(true, operator==(testMatrix,result));
}


int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	int retVal = RUN_ALL_TESTS();

	std::cin.get();

	return retVal;
}

/*

mag = 1

*/