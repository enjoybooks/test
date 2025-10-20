#pragma once
#include "Spaceship.h"

class ExplorerShip :public Spaceship
{
public:
	ExplorerShip(float speed, float energy, float scanRange);

	void action();

	void scanPlanet();

	void showStats();

private:
	float m_scanRange;
};