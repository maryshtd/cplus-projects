// Errors_example1_19_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	cout << "\n> Input number: ";
	int a;
	try
	{
		if(!(cin >> a))
		throw "Input format exception";
		if (a < 0)
			throw "a must be positive";
		cout << a*a << endl;
	}
	catch (char* err_message)
	{
		cerr << "\n Error: " << err_message << endl;
	}
	return 0;
}

