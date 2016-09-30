#pragma once
#include "Student.h"

class Group
{
	Student arr[16];
	int count;


public:
	Group();
	~Group();
	void Display();
	void AddStudent(const Student &x);
	void AddStudentFromConsole();
	void Update();
};

