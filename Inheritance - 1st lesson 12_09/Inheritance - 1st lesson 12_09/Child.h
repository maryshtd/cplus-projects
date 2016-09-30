#pragma once
#include "Parent.h"

class Child : public Parent
{
	int d;
	double e;
public:
	Child();
	~Child();
	Child(int a, double b, std::string c, int d, double e);
	void Display();
	void Operation1();
	void Operation2();
};

