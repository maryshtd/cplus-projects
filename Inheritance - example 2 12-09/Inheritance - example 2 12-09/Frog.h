#pragma once
#include "Animal.h"
class Frog: public Animal
{

public:
	Frog();
	~Frog();
	Frog(std::string type, std::string name);
	void Sound();
};

