#pragma once
#include "../Subsystem.h"

class Shield : Subsystem
{

public:
	const static int SHIELDMAX = 10000;

	Shield();
	~Shield() = default;
	bool isUp();
	void raiseShields();
	void transferEnergy(int energy);
	void takeDamage(int damage);
	int  shieldEnergy();
	int timeToRepair();
	
private:
	bool m_shieldUp;
	int  m_shieldEnergy;
};

