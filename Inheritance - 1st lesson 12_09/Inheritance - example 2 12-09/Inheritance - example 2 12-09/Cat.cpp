#include "stdafx.h"
#include "Cat.h"


Cat::Cat()
{
}


Cat::~Cat()
{
}

Cat::Cat(std::string type, std::string name) : Animal(type, name)
{}

void Cat::Sound()
{
	Animal::Sound();
	std::cout << "meow-meow" << std::endl;
}