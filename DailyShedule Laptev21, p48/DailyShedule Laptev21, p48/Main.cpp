// DailyShedule Laptev21, p48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DailyItem.h"
#include "Shedule.h"

int _tmain(int argc, _TCHAR* argv[])
{
	DailyItem task1(*(new Time(10, 30)), *(new Time(12, 45)), "do something", false);
	task1.Display();

	DailyItem task2(*(new Time(13, 30)), *(new Time(14, 5)), "do something", false);
	task1.Display();

	DailyItem task3(*(new Time(16, 30)), *(new Time(17, 45)), "do something", false);
	task1.Display();

	Shedule sh;
	sh.AddTask(task1);
	sh.AddTask(task2);
	sh.AddTask(task3);

	return 0;
}

