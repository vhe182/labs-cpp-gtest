#pragma once
#include "../src/StarTrek/Shield.h"

class Ship
{
public:
	Ship();
	~Ship();

	Shield shield;

	void transferEnergy(int energy);
	void set_EnergyReserves(int energy);
	int get_EnergyReserves();
	bool validTransfer(int desiredEnergy);
	void enemyHit(int damage);
	void damageSubsystem(int damage);

private:
	int m_EnergyReserves;
};

