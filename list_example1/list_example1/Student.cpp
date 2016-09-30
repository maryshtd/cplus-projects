#include "stdafx.h"
#include "Student.h"


Student::Student()
{
	strcpy_s(this->name, "undefined");
	this->age = 18;
	this->rate = 8.0;
}


Student::~Student()
{}

Student::Student(char name[], int age, double rate)
{
	strcpy_s(this->name, name);
	this->age = age;
	this->rate = rate;
}

ostream &operator<<(ostream &s, const Student &x)
{
	s << x.name << ", " << x.age << " лет; рейтинг: " << x.rate;
	return s;
}
