#pragma once
#include <iostream>
#include <string>
using namespace std;

class Spaceship
{
 public:
	string model;
	float speed;
	float energy;

	virtual void showStats();

	virtual void action() = 0;

	virtual ~Spaceship() = default;
};