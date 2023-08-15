#pragma once
#include <string>
#include <random>

class Entity
{
public:
	std::string name;
	int health;

	Entity()
	{
		name = "xd";
		health = 0;
	}

	Entity(std::string names)
	{
		health = 100;
		std::string e = "Entity";
		std::random_device randomizer;
		std::mt19937 gen(randomizer);
		std::uniform_int_distribution<int> dist(10000, 99999);
		name = e.append(std::to_string(dist(gen)));
	}

	~Entity()
	{

	}

	const char* toString()
	{
		return name.c_str();
	}
};

