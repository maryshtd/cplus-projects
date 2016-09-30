// CPP_Vektor_0107.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vector.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Vector v1(10,15);
	v1.Display();

	Vector v2(20,25);
	v2.Display();

	Vector v3 = v1 + v2;
	v3.Display();

	Vector v4 = v2 - v1;
	v4.Display();

	double a = v2*v1;
	cout << a << endl;

	Vector v5 = v2 * 2;
	v5.Display();

	return 0;
}

