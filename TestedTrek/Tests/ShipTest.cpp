#include "gtest/gtest.h"
#include "Ship.h"
#include "../TestedTrek/src/StarTrek/Shield.h"

TEST(ShipTest, TransferReservesEnoughReserves) {
	Ship ship;
	ship.transferEnergy(5000);
	EXPECT_EQ(ship.shield.shieldEnergy(), 10000);
}

TEST(ShipTest, TransferReservesNotEnoughReserves) {
	Ship ship;
	EXPECT_FALSE(ship.validTransfer(20001));
}

TEST(ShipTest, TransferReservesPartialFill) {
	Ship ship;
	ship.transferEnergy(6000);
	EXPECT_EQ(ship.get_EnergyReserves(), 15000);
	EXPECT_EQ(ship.shield.shieldEnergy(), 10000);
}