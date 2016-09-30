// Task21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Paral.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Paral P1(1, 2, 3);
	cout << "Объем параллелепипеда = " << P1.Volume() << endl;
	cout << "Длиннейшая диагональ параллелепипеда = " << P1.LongerDiagonal() << endl;
	P1.Display();
	return 0;
}

