#include "CargoShip.h"

void CargoShip::action()
{
	cout << "LOADING" << endl;
}

void CargoShip::showStats()
{
	cout << "model:" << this->model
		<< "  " << "speed:" << this->speed
		<< "  " << "energy:" << this->energy
		<< "  " << "cargoCapacity:" << this->m_cargoCapacity
		<< endl;
}

void CargoShip::loadCargo(int cargo)
{
	this->m_cargoCapacity = this->m_cargoCapacity - cargo;
	cout << "rest capacity:" << this->m_cargoCapacity;
}

CargoShip::CargoShip(float speed, float energy, float cargoCapacity)
{
	this->model = "CargoShip";
	this->speed = speed;
	this->energy = energy;
	this->m_cargoCapacity = cargoCapacity;
}