#pragma once
#include "Entity.h"
#include "Weapon.h"
#include "StringArray.h"

typedef StringArray<Weapon> Inventory;

class Character : public Entity
{
public:
	int karma;
	//Inventory myWeapons;

	Character()
	{
		//myWeapons = Inventory(1);
	}
};

