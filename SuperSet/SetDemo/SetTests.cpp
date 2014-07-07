// SetTests.cpp : Defines the entry point for the console application.
//

#include "gtest/gtest.h"
#include <set.h>

TEST(SuperSet, InitialSizeIsZero) {
	Set set;
	EXPECT_EQ(0, set.size());
}

TEST(CalculatorTest, Addition) {
	EXPECT_EQ(4, 2 + 2);
}

int main(int argc, char** argv)
{
	// run all tests
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
