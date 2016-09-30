// String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "String.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	String str1("Hello ");
	String str2("world!");
	String str3 = str1 + str2;
	str3.Display();
	return 0;
}

