#include "stdafx.h"
#include "Dog.h"


Dog::Dog()
{}


Dog::~Dog()
{}

Dog::Dog(std::string type, std::string name) : Animal(type, name)
{}

void Dog::Sound()
{
	Animal::Sound();
	std::cout << "gav-gav" << std::endl;
}