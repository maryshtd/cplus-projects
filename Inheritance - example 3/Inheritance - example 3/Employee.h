#pragma once
#include "Worker.h"
class Employee : public Worker
{
	double rate;
public:
	Employee();
	~Employee();
	Employee(string name, string position, double salary,double rate);
	void Display();
	void ChangeSalary();
};

