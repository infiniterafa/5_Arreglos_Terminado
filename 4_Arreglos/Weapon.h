#pragma once
#include "Entity.h"
class Weapon : public Entity
{
public:
	enum EType { melee, ranged } type;

	int damage;
	int Ammo;

	Weapon()
	{
		name = "weapon";
		Ammo = 0;
		damage = 0;
		type = EType::ranged;
	}

	Weapon(const char* _name, int _ammo, EType _type, int _damage)
	{
		name = _name;
		Ammo = _ammo;
		type = _type;
		damage = _damage;
	}

	//~Weapon()
	//{

	//}

	void attack(Entity entiti);
	void giveAmmo(int newAmmo);
};

