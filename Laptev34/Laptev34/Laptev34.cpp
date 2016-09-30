// Laptev34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bankomat.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"rus");
	Bankomat B1(1, 10000, 10, 5000);
	B1.Display();
	B1.AddSum(15);
	B1.AddSum(1000);
	B1.Display();
	B1.CreditSum(2000);
	B1.Display();
	return 0;
}

