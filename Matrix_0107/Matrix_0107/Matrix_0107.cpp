// Matrix_0107.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"



int _tmain(int argc, _TCHAR* argv[])
{
	Matrix m1(10, 20, 30, 40);
	m1.Display();

	Matrix m2(10, 20, 30, 40);
	m2.Display();

	Matrix m3 = m1 + m2;
	m3.Display();

	Matrix m4 = m1 - m2;
	m4.Display();

	Matrix m5 = m1*3;
	m5.Display();

	return 0;
}

