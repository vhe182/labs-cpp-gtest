#include "stdafx.h"
#include "Ship.h"

Ship::Ship()
{
	m_EnergyReserves = 20000;
}

Ship::~Ship()
{
}

void Ship::transferEnergy(int energy)
{
	if (energy >= 0)
	{
		if (validTransfer(energy))
		{
			if (shield.shieldEnergy() + energy <= shield.SHIELDMAX)
			{
				m_EnergyReserves -= energy;
				shield.transferEnergy(energy);
			}
			else
			{
				int transferableEnergy = shield.SHIELDMAX - shield.shieldEnergy();
				m_EnergyReserves -= transferableEnergy;
				shield.transferEnergy(transferableEnergy);
			}
		}
	}
	else
	{
		if (validTransfer(energy))
		{
			m_EnergyReserves -= energy;
			shield.transferEnergy(energy);
		}
	}
}

bool Ship::validTransfer(int desiredEnergy)
{
	if (desiredEnergy >= 0)
		return desiredEnergy < m_EnergyReserves;
	else
		return shield.shieldEnergy() + desiredEnergy >= 0;
}

void Ship::enemyHit(int damage)
{
	if (shield.isUp()) {
		if (shield.shieldEnergy() - damage < 0) {
			int remainder = damage - shield.shieldEnergy();
			shield.transferEnergy(damage*(-1));
			damageSubsystem(remainder);
		}
		else {
			shield.transferEnergy(damage*(-1));
		}
	}
	else {
		damageSubsystem(damage);
	}
}

void Ship::damageSubsystem(int damage)
{
	shield.takeDamage(damage);
}

void Ship::set_EnergyReserves(int energy)
{
	m_EnergyReserves = energy;
}

int Ship::get_EnergyReserves()
{
	return m_EnergyReserves;
}