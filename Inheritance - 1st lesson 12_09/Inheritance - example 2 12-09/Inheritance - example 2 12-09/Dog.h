#pragma once
#include "Animal.h"
class Dog : public Animal
{

public:
	Dog();
	~Dog();
	Dog(std::string type, std::string name);
	void Sound();
};

