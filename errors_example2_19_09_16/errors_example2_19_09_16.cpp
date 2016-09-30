// errors_example2_19_09_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Menu.h"
#include "Calculate.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Menu m;
	try
	{
		do
		{
			m.Start();
			Calculate c;
			c.InputData();
			c.Extract();
		} while (m.Continue());
	}
	catch (char* mess)
	{
		cerr << "\n\t ###Error:" << mess << endl;
	}
	m.Finish();
    return 0;
}

