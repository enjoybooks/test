#include "SpaceshipFleet.h"

void SpaceshipFleet::output()
{
	for (int i = 0; i < this->ships.size(); ++i)
	{
		cout << "     " << i << "、";
		this->ships[i]->showStats();
	}
}

void SpaceshipFleet::add_ship()
{
	int choice; 
	float speed, energy;
	cout << "     " << "1、BattleShip" << endl;
	cout << "     " << "2、CargoShip" << endl;
	cout << "     " << "3、ExpiorerShip" << endl;
	cout << "     " << "choice:";
	cin >> choice;
	cout << "     " << "speed:";
	cin >> speed;
	cout << "     " << "energy:";
	cin >> energy;
	switch (choice)
	{
	case 1:
		float weaponPower;
		cout << "     " << "weaponPower:";
		cin >> weaponPower;
		this->ships.push_back(new BattleShip(speed, energy, weaponPower));
		++this->BattleShip_num;
		break;
	case 2:
		float cargoCapacity;
		cout << "     " << "cargoCapacity:";
		cin >> cargoCapacity;
		this->ships.push_back(new CargoShip(speed, energy, cargoCapacity));
		++this->CargoShip_num;
		break;
	case 3:
		float scanRange;
		cout << "     " << "scanRange:";
		cin >> scanRange;
		this->ships.push_back(new ExplorerShip(speed, energy, scanRange));
		++this->ExplorerShip_num;
		break;
	}
}

void SpaceshipFleet::rent_ship()
{
	if (this->ships.size() == 0)
		cout << "     " << "NULL";
	else
	{
		int choice;
		this->output();
		cout << "     " << ">>>";
		cin >> choice;
		if (choice >= 0 && choice < this->ships.size())
			cout << "Successfully rented";
		else
			cout << "Outranged number!";
	}
}

void SpaceshipFleet::check_ship()
{
	cout << "     " << "BattleShip number:" << this->BattleShip_num << endl;
	cout << "     " << "CargoShip number:" << this->CargoShip_num << endl;
	cout << "     " << "ExplorerShip number:" << this->ExplorerShip_num << endl;
}

SpaceshipFleet::~SpaceshipFleet()
{
	for(int i=0; i < this->ships.size(); ++i)
	{
		if (this->ships[i] != nullptr)
		{
			delete this->ships[i];
			this->ships[i] = nullptr;//可有可无
		}

	}
	this->ships.clear();
	this->ships.shrink_to_fit();
	//或:
	//vector<Spaceship>().swap(this->ships);
	//强制释放内存
}