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
	cout << "Память освобождена" << endl;
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
	cout << "Cторона А = " << S1 << endl;
	cout << "Cторона B = " << S2<<endl;
	cout << "Высота = " << h << endl;

}