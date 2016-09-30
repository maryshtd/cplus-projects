#include "stdafx.h"
#include "Shedule.h"


Shedule::Shedule()
{
	N = 0;
	tasks = NULL;
}


Shedule::~Shedule()
{
	if (tasks != NULL)
	{
		delete[] tasks;
		N = 0;
	}
}

Shedule::Shedule(const Shedule &shedule)
{
	this->N = shedule.N;
	if (this->tasks != NULL)
	{
		delete[]tasks;
		tasks = new DailyItem[N];
		for (int i = 0; i < N; i++)
		{
			this->tasks[i] = shedule.tasks[i];
		}
	}
}

void Shedule::Display()
{
	cout << "Tasks list: " << endl;
	if (N != 0)
	{
		for (int i = 0; i < N; i++)
		{
			tasks[i].Display();
		}
	}

}

void Shedule::AddTask()
{
	cout << "\n> Введите параметры задачи:" << endl;
	int h1, h2, m1, m2;
	
	cout << "	Время начала: ";
	cin >> h1 >> m1;
	
	cout << "	Время завершения:";
	cin >> h2 >> m2;

	cout << "	Описание:";
	char buff[255];
	cin.clear();
	cin.sync();
	cin.getline(buff, 255);

	DailyItem item(*(new Time(h1, m1)), *(new Time(h2, m2)), buff, false); 

	if (N == 0)
	{
		tasks = new DailyItem[1];
		tasks[0] = item;
	}
	else
	{
		DailyItem *temp = new DailyItem[N];
		for (int i = 0; i < N; i++)
		{
			temp[i] = tasks[i];
		}
		delete[] tasks;
		tasks = new DailyItem[N + 1];
		for (int i = 0; i < N; i++)
		{
			tasks[i] = temp[i];
		}
		tasks[N] = item;
	}
	N++;
}

void Shedule::AddTask(DailyItem item)
{
	if (N == 0)
	{
		tasks = new DailyItem[1];
		tasks[0] = item;
	}
	else
	{
		DailyItem *temp = new DailyItem[N];
		for (int i = 0; i < N; i++)
		{
			temp[i] = tasks[i];
		}
		delete[] tasks;
		tasks = new DailyItem[N + 1];
		for (int i = 0; i < N; i++)
		{
			tasks[i] = temp[i];
		}
		tasks[N] = item;
		}
	N++;
	
}

void Shedule::DeleteTask()
{

}

void Shedule::EditTask()
{

}

DailyItem *Shedule::SearchFreeTime()
{
	DailyItem *temp = new DailyItem[N - 1];

	for (int i = 0; i < N-1; i++)
	{
		temp[i].begin = tasks[i].end;
		temp[i].end = tasks[i + 1].begin;
	}

	return temp;
}

DailyItem *Shedule::SelectUndone()
{
	return new DailyItem();
}