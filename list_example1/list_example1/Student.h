#pragma once
class Student
{
	char name[50];
	int age;
	double rate;
public:
	Student();
	~Student();
	Student(char name[], int age, double rate);
	friend ostream &operator<<(ostream &s, const Student &x);

};

