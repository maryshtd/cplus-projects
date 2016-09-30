#include "stdafx.h"
#include "Animal.h"


Animal::Animal()
{
	type = "Undefined";
	name = "Unknown";
}


Animal::~Animal()
{
}

Animal::Animal(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

void Animal::Display()
{
	std::cout << "Animal - " << type << " by name - " << name << std::endl;
}

void Animal::Sound()
{
	std::cout << name << " say - ";
}