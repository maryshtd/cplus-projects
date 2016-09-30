#include "stdafx.h"
#include "Child.h"


Child::Child()
{
	d = 0;
	e = 0;
	std::cout << "\t Child Default Constructor" << std::endl;
}


Child::~Child()
{
	std::cout << "\t Child Default Destructor" << std::endl;
}

Child::Child(int a, double b, std::string c, int d, double e) : Parent(a,b,c)
{
	this->d = d;
	this->e = e;
	std::cout << "\t Child Param Constructor" << std::endl;
}

void Child::Display()
{
	Parent::Display();
	std::cout << "d = " << d << "; e = " << e << std::endl;
}

void Child::Operation1()
{
	std::cout << "Child Operation1() $$$$$$$$$" << std::endl;
}

void Child::Operation2()
{
	std::cout << "Child Operation2()" << std::endl;
}
