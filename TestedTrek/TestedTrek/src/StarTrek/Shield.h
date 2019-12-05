#pragma once
class Shield
{

public:
	const static int SHIELDMAX = 10000;

	Shield();
	~Shield();
	bool isUp();
	void raiseShields();
	void transferEnergy(int energy);
	int  shieldEnergy();
	
private:
	bool m_shieldUp;
	int  m_shieldEnergy;
};

