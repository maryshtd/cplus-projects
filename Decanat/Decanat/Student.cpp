#include "stdafx.h"
#include "Student.h"


Student::Student()
{
	
	strcpy_s(this->name, "Undefined");
	this->age = NULL;
	this->rate = NULL;
}


Student::~Student()
{}

Student::Student(char name[50], int age, double rate)
{
	strcpy_s(this->name, name);
	this->age = age;
	this->rate = rate;
}

void Student::Display()
{
	std::cout << name << "- " << age << " years; rate - " << rate << std::endl;
}

char *Student::GetName()
{
	return name;
}

int Student::GetAge()
{
	return age;
}

double Student::GetRate()
{
	return rate;
}