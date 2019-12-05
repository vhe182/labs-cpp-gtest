#pragma once
class Subsystem
{
public:

	virtual void takeDamage(int damageTaken) = 0;

	virtual int timeToRepair() = 0;

protected:
	Subsystem();
	~Subsystem();
private:
	int m_repairTime_starDays;
};

