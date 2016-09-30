#pragma once

#define _CRT_SECURE_NO_WARNINGS

class Task
{
	char* Question;
	char* answer1;
	char* answer2;
	char* answer3;
	char* answer4;
	char* answer5;
	int bal;
	int n;
public:
	Task(char* Question, char* answer1, char* answer2, char* answer3, char* answer4, char* answer5, int bal, int n);
	Task(const Task &Task1);
	void Display();
	Task();
	~Task();
};

