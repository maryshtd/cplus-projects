#include "stdafx.h"
#include "Calculate.h"


Calculate::Calculate()
{
	a = 0;
	b = 0;
	c = 0;
}


Calculate::~Calculate()
{}

void Calculate::InputData()
{
	int a1;
	cout << "\na = " << endl;
	if (!(cin >> a1))
		throw "Input format error";
	if (a1 == 0)
		throw "Equation is not square";
	if (abs(a1) > 10)
		throw "a is >10";
	this->a = a1;
	int b1;
	cout << "b = " << endl;
	if (!(cin >> b1))
		throw "Input format error";
	if (b1 == 0)
		throw "Equation is not square";
	if (abs(b1) > 10)
		throw "b is >10";
	this->b = b1;
	int c1;
	cout << "c = ";
	if (!(cin >> c1))
		throw "Input format error";
	if (c1 == 0)
		throw "Equation is not square";
	if (abs(c1) > 10)
		throw "c is >10";
	this->c = c1;
}

void Calculate::Extract()
{
	double x1, x2;
	double D;
	D = b*b - 4 * a*c;
	if (D < 0)
	{
		cout << "Equation has no solutions" << endl;
	}
	else if (D != 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "1st solution of equation = " << x1 << endl;
		cout << "2nd solution of equation = " << x2 << endl;
	}
	else {
		x1 = -b / 2 * a;
		cout << "Equation has one solution: " << x1 << endl;
	}
}