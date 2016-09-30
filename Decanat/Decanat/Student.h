#pragma once
class Student
{
	char name[50];
	int age;
	double rate;
public:
	Student();
	~Student();
	Student(char name[50],  int age, double rate);
	void Display();
	char *GetName();
	int GetAge();
	double GetRate();
};

