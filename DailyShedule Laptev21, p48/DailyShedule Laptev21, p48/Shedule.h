#pragma once
#include "DailyItem.h"

class Shedule
{
	int N;
	DailyItem *tasks;
public:
	Shedule();
	~Shedule();
	Shedule(const Shedule &shedule);
	void Display();
	void AddTask();
	void AddTask(DailyItem item);
	void DeleteTask();
	void EditTask();
	DailyItem *SearchFreeTime();
	DailyItem *SelectUndone();
};

