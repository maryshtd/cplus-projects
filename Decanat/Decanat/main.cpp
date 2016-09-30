// Decanat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include "Group.h"

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	
	Group G1;
	G1.Display(); 
	
	G1.AddStudentFromConsole();
	G1.Display();

	G1.Update();

	return 0;
}

