#pragma once
#include "src\StarTrek\Random.h"

class MockRandom : public Random
{
public:
	MockRandom();
	~MockRandom();

	static int randInt(int val);
};

