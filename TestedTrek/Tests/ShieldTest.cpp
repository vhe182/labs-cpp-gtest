#include "gtest/gtest.h"
#include "../TestedTrek/src/StarTrek/Shield.h"

TEST(ShieldTest, ShieldDownByDefault) {
	Shield shield;
	EXPECT_FALSE(shield.isUp());
}

TEST(ShieldTest, ShieldsRaisedWithEnergy) {
	Shield shield;
	shield.raiseShields();
	EXPECT_TRUE(shield.isUp());
}

TEST(ShieldTest, ShieldsRaisedWithoutEnergy) {
	Shield shield;
	shield.transferEnergy(-shield.SHIELDMAX);
	shield.raiseShields();
	EXPECT_FALSE(shield.isUp());
}

TEST(ShieldTest, ShieldTransfer) {
	Shield shield;
	shield.transferEnergy(1000);
	EXPECT_EQ(shield.shieldEnergy(), 6000);
	shield.transferEnergy(-1000);
	EXPECT_EQ(shield.shieldEnergy(), 5000);
	shield.transferEnergy(5000);
	EXPECT_EQ(shield.shieldEnergy(), 10000);
	shield.transferEnergy(1);
	EXPECT_EQ(shield.shieldEnergy(), 10000);
	shield.transferEnergy(-10000);
	EXPECT_EQ(shield.shieldEnergy(), 0);
	shield.transferEnergy(-1);
	EXPECT_EQ(shield.shieldEnergy(), 0);
}

/*
int main(int argc, char** argv)
{
	// run all tests
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
*/