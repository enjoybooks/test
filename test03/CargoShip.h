#pragma once
#include "Spaceship.h"

class CargoShip :public Spaceship
{
public:
	CargoShip(float speed, float energy, float cargoCapacity);

	void action();

	void loadCargo(int cargo);

	void showStats();

private:
	float m_cargoCapacity;
};

