// Printing priority  queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Queue.h"
#include "PrintOrder.h"

int main()
{
	setlocale(LC_ALL, "rus");
	PrintOrder o1("Иванов", "10.08.2016 19:00", 10);
	PrintOrder o2("Петров", "10.08.2016 19:10", 3);
	PrintOrder o3("Сидоров", "10.08.2016 19:20", 5);
	PrintOrder o4("Васечкин", "10.08.2016 19:30", 2);
	PrintOrder o5("Сонькин", "10.08.2016 19:40", 4);

	PriorityQueue<PrintOrder> PrintList;
	PrintList.Add(o1, o1.Priority());
	PrintList.Add(o2, o2.Priority());
	PrintList.Add(o3, o3.Priority());
	PrintList.Add(o4, o4.Priority());
	PrintList.Add(o5, o5.Priority());
	PrintList.Display();
	cout << "\n";
	
	PriorityQueue<PrintOrder> PrintStatistics;
	for (int i = 0; i < PrintList.Size(); i++)
	{
		PrintStatistics.Add(PrintList.Search(i),100);
	}
	PrintStatistics.Display();

    return 0;
}

