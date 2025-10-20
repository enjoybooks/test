#include "BattleShip.h"

void BattleShip::action()
{
	cout << "FIRE!" << endl;
}

void BattleShip::fireLaser()
{
	this->energy = this->energy - 10;
}

void BattleShip::showStats()
{
	cout << "model:" << this->model
		<< "  " << "speed:" << this->speed
		<< "  " << "energy:" << this->energy
		<< "  " << "weaponPower:" << this->m_weaponPower
		<< endl;
}

BattleShip::BattleShip(float speed, float energy, float weaponPower)
{
	this->model = "BattleShip";
	this->speed = speed;
	this->energy = energy;
	this->m_weaponPower = weaponPower;
}