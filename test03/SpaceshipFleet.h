#pragma once
#include "BattleShip.h"
#include "CargoShip.h"
#include "ExplorerShip.h"
#include "Spaceship.h"
#include <vector>

class SpaceshipFleet
{
public:
	void add_ship();

	void rent_ship();

	void check_ship();

	void output();

	~SpaceshipFleet();

private:
	vector<Spaceship*>ships;
	int BattleShip_num=0;
	int CargoShip_num=0;
	int ExplorerShip_num=0;
};