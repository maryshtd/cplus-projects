#pragma once
#include "Animal.h"
class Cat : public Animal
{

public:
	Cat();
	~Cat();
	Cat(std::string type, std::string name);
	void Sound();
};

