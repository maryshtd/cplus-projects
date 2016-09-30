#include "stdafx.h"
#include "Parent.h"


Parent::Parent()
{
	a = 0;
	b = 0;
	f = "";
	std::cout << "\t Parent Default Constructor" << std::endl;
}


Parent::~Parent()
{
	std::cout << "\t Parent Default Destructor" << std::endl;
}

Parent::Parent(int a, double b, std::string f)
{
	this->a = a;
	this->b = b;
	this->f = f;
	std::cout << "\t Parent Param Constructor" << std::endl;
}

void Parent::Display()
{
	std::cout << "a = " << a << "; b = " << b << "; c = " << f << "; ";
}

void Parent::Operation1()
{
	std::cout << "Parent Operation1() +++++++++++ " << std::endl;
}