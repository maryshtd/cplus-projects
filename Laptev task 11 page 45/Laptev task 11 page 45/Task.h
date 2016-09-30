#pragma once
class Task
{
	char* quest;
	char* ans1;
	char* ans2;
	char* ans3;
	char* ans4;
	char* ans5;
	int num;
	int point;
public:
	Task();
	~Task();
	Task(char* quest, char* ans1, char* ans2, char* ans3, char* ans4, char* ans5, int num, int point);
	Task(const Task &x);
	void Display();
};

