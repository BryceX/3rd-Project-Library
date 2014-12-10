// GTEST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../MyLibraryProject/MyLibrary/MyLibrary.h"


TEST(isnextpowerworking, pow2)
{
	unsigned int powTest = NextPow2(999);
	EXPECT_EQ(1024, powTest);
}

int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

