#pragma once
class Subsystem
{
public:

	virtual void takeDamage(int damageTaken) = 0;

	virtual int timeToRepair() = 0;

protected:
	Subsystem() = default;
	~Subsystem() = default;
	int m_repairTime_starDays;
};

