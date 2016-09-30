#include "stdafx.h"
#include "Dot.h"


Dot::Dot()
{
	this->x = 0;
	this->y = 0;
}


Dot::~Dot()
{
}

Dot::Dot(int x, int y)
{
	this->x = x;
	this->y = y;
}

Dot::Dot(const Dot &dot)
{
	this->x = dot.x;
	this->y = dot.y;
}
void Dot::Display()
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}