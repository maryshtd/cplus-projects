#include "stdafx.h"
#include "Worker.h"


Worker::Worker()
{
	name = "Undefined";
	position = "Undefined";
	salary = 0;
}


Worker::~Worker()
{
}

Worker::Worker(string name, string position, double salary)
{
	this->name = name;
	this->position = position;
	this->salary = salary;
}

void Worker::Display()
{
	cout << "Worker " << name << " on position " << position << " recevies " << salary << endl;
}


//void Worker::ChangeSalary()
//{
//
//}