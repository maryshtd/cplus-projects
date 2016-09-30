#include "stdafx.h"
#include "Frog.h"


Frog::Frog()
{}


Frog::~Frog()
{}

Frog::Frog(std::string type, std::string name) : Animal(type,name)
{}

void Frog::Sound()
{
	Animal::Sound();
	std::cout << "kva-kva" << std::endl;
}