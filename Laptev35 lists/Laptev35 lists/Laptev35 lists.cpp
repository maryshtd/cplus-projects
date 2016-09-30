// Laptev35 lists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Journal l1("qqq", "19b2", "Ivanov", 5, "math", 4.6);
	Journal l2("qqq", "19b2", "Ivanov", 5, "math", 4.6);
	Journal l3("qqq", "19b2", "Petrov", 5, "math", 4.6);
	List list1;
	List list2;
	list1.Add(l1);
	list2.Add(l2);
	list2.Add(l3);
	List list3 = list1*list2;
	list3.Display();
	List List4 = list1 + list3;
	List4.Display();
	return 0;
}

