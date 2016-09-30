#include "stdafx.h"
#include "Employee.h"


Employee::Employee()
{}


Employee::~Employee()
{}

Employee::Employee(string name, string position, double salary) : Worker(name,position,salary)
{}

void Employee::Display()
{
	Worker::Display();
	cout << "Rate of this worker is: " << rate << endl;
}

void Employee::ChangeSalary()
{
	if (this->rate >= 60 && this->rate < 75)
	{
		this->salary *= 1, 2;
	}
	else if (this->rate >= 75 && this->rate < 90)
	{
		this->salary *= 1, 4;
	}
	else if (this->rate >= 90 && this->rate <= 100)
	{
		this->salary *= 1, 6;
	}
}