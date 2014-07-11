
#include "gtest/gtest.h"
#include "gmock/gmock.h"


TEST(StockQuotes, SomeAsYetUndeterminedScenario) {
	EXPECT_TRUE(false);
}

int main(int argc, char** argv)
{
	// run all tests
	::testing::InitGoogleMock(&argc, argv);

	return RUN_ALL_TESTS();
}
