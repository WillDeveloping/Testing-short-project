#pragma once
#include <iostream>

using namespace std;

class Monster
{
private:
	string name;
	string type;
	int health;
	int attackStat;

public:
	Monster();
	Monster(string nName, string nType, int attackStat);

	string getName();
	string getType();
	int gethealth();
	int getattackStat();

};

