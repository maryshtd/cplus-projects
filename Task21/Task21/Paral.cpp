#include "stdafx.h"
#include "Paral.h"


Paral::Paral()
{
	this->S1 = 0;
	this->S2 = 0;
	this->h = 0;
}


Paral::~Paral()
{
	cout << "������ �����������" << endl;
}

Paral::Paral(double S1, double S2, double h)
{
	this->S1 = S1;
	this->S2 = S2;
	this->h = h;
}

double Paral::Volume()
{
	return S1*S2*h;
}

double Paral::LongerDiagonal()
{
	return sqrt(S1*S1 + S2*S2 + h*h);
}

void Paral::Display()
{
	cout << "C������ � = " << S1 << endl;
	cout << "C������ B = " << S2<<endl;
	cout << "������ = " << h << endl;

}