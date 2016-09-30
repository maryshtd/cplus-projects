// Laptev35.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Fraction.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Fraction F1(1,2, 3);
	Fraction F2(1,1, 3);
	Fraction F3 = F1.Plus(F2);
	Fraction F4 = F1.Minus(F2);
	Fraction F5 = F1.Multiple(F2);
	Fraction F6 = F1.Divide(F2);
	F3.Display();
	F4.Display();
	F5.Display();
	F6.Display();
	return 0;
}

