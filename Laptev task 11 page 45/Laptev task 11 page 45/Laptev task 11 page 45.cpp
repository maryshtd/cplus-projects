// Laptev task 11 page 45.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Task.h"
#include "TestContent.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 
	TestContent Test1;
	Test1.Display();

	return 0;
}
