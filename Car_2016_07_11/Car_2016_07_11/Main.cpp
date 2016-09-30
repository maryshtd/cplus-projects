// Car_2016_07_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Car.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Car car1("Toyota Corolla", 1990, 5000);
	car1.Display();
	ModifyPrice(6000, car1);
	car1.Display();
	return 0;
}

