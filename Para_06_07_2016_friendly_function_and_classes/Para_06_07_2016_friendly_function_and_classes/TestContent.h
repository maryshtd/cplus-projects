#pragma once
#include "Task.h"

class TestContent
{
	int N;
	Task* arr;
public:
	TestContent();
	Task &operator [](int index);
	void GetData();
	void Update();
	void AddTask();
	void DeleteTask();
	void Display();
	~TestContent();
};

