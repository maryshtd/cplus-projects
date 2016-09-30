// list_example1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List.h"
#include "Student.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	List<int> List1;
	List1.Display();
	List1.Add(10);
	List1.Display();

	for (int i = 0; i < 5; i++)
	{
		List1.Add((i + 1) * 20);
	}

	List1.Display();

	Student s1("Вася Пупкин", 21, 7.5);
	Student s2("Петя Васечкин", 22, 8.5);
	Student s3("Соня Иванова", 23, 9.5);
	Student s4("Катя Пуськина", 24, 10.5);
	Student s5("Толя Балалайка", 25, 11.5);
	Student s6("Витя Петечкин", 26, 12.5);

	List<Student> Group;
	Group.Add(s1);
	Group.Add(s2);
	Group.Add(s3);
	Group.Add(s4);
	Group.Add(s5);
	Group.Add(s6);
	Group.Display();
	cout << "\n";
	Group.DeleteFromBegin();
	Group.DeleteFromEnd();
	Group.Display();
		
	cout << "\n";
	Group.DeleteFromPosition(3);
	Group.Display();

	cout << "\n";
	Student s7("Коля Витечкин", 27, 13.5);
	Group.InsertIntoPosition(s7, 2);
	Group.Display();
	return 0;
}

