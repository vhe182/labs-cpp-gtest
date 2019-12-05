#include "stdafx.h"
#include "Shield.h"


StarTrek::Shield::Shield()
{
}


StarTrek::Shield::~Shield()
{
}

bool StarTrek::Shield::isShieldUp() const {
	if (state == SHIELDUP) {
		return true;
	}
	else {
		return false;
	}
}

void StarTrek::Shield::toggleShield(bool shieldState)
{
	if (shieldState == false) {
		state = State::SHIELDDOWN;
	}
	else {
		state = State::SHIELDUP;
	}
}