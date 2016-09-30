// Friendly functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dot.h"
#include "Line.h"

int _tmain(int argc, _TCHAR* argv[])
{

	Dot p(10, 20);
	p.Display();

	Line L(10, 15, 20);
	L.Display();

	cout << "Distance = " << Distance(p, L) << endl;
	return 0;
}

