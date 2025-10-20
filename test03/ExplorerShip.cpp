#include "ExplorerShip.h"

void ExplorerShip::action()
{
	cout << "Exploring..." << endl;
}

void ExplorerShip::showStats()
{
	cout << "model:" << this->model
		<< "  " << "speed:" << this->speed
		<< "  " << "energy:" << this->energy
		<< "  " << "scanRange:" << this->m_scanRange
		<< endl;
}

void ExplorerShip::scanPlanet()
{
	this->energy = this->energy - 10;
	cout << "rest_energy:" << this->energy << endl;
}

ExplorerShip::ExplorerShip(float speed, float energy, float scanRange)
{
	this->model = "ExplorerShip";
	this->speed = speed;
	this->energy = energy;
	this->m_scanRange = scanRange;
}
 