#pragma once
#include "Spaceship.h"

class BattleShip :public Spaceship
{
public:
	BattleShip(float speed, float energy, float weaponPower);

	void action();

	void fireLaser();

	void showStats();

private:
	float m_weaponPower;
};
