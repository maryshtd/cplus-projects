// Para_06_07_2016_friendly_function_and_classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Task.h"
#include "TestContent.h"


int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	TestContent Task1;
	Task1.GetData();
	Task1.Display();
	return 0;
}

