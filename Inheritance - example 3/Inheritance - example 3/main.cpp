// Inheritance - example 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Worker.h"
#include "Employee.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Worker **company = new Worker*[3];
	company[0] = new Employee("Petrov", "Manager", 25000, 75);
	company[1] = new Employee("Ivanov", "Developer", 75000, 25);
	company[2] = new Employee("Sidorov", "Tester", 15000, 15);
	for (int i = 0; i < 3; i++)
	{
		company[i]->Display();
	}
	cout << "\nSalary is counted basing on rate: \n\n";
	for (int i = 0; i < 3; i++)
	{
		company[i]->ChangeSalary();
	}
	for (int i = 0; i < 3; i++)
	{
		company[i]->Display();
	}
	for (int i = 0; i < 3; i++)
		delete company[i];
	delete[] company;
	return 0;
}

