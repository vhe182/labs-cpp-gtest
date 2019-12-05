#include "stdafx.h"
#include "Shield.h"

Shield::Shield()
{
	m_shieldUp = false;
	m_shieldEnergy = 5000;
}

Shield::~Shield()
{
}

bool Shield::isUp()
{
	return m_shieldUp;
}

void Shield::raiseShields()
{
	if(m_shieldEnergy > 0)
		m_shieldUp = true;
}

void Shield::transferEnergy(int energy)
{
	m_shieldEnergy += energy;

	if (m_shieldEnergy > SHIELDMAX)
		m_shieldEnergy = SHIELDMAX;

	if (m_shieldEnergy <= 0) {
		m_shieldEnergy = 0;
		m_shieldUp = false;
	}
}

int Shield::shieldEnergy()
{
	return m_shieldEnergy;
}