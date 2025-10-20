#include "SpaceshipFleet.h"
#include <cstdlib>

static void show_screen()
{
	cout << "     " << "system" << endl;
	cout << "     " << "1¡¢add spaceship" << endl;
	cout << "     " << "2¡¢rent spaceship" << endl;
	cout << "     " << "3¡¢check spaceship" << endl;
	cout << "     " << ">>>";
}


int main() {
	SpaceshipFleet sf;
	while (true)
	{
		int decide;
		show_screen();
		cin >> decide;
		switch (decide)
		{
		case 1:
			sf.add_ship();
			break;
		case 2:
			sf.rent_ship();
			break;
		case 3:
			sf.check_ship();
			break;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
}