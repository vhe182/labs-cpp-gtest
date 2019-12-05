#include "stdafx.h"
#include "stdlib.h"
#include "Random.h"

using namespace std;

Random::Random()
{
}

Random::~Random()
{
}

int Random::randInt(int val)
{
	return val * rand() / RAND_MAX;
}