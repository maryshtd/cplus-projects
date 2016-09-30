// Inheritance - 1st lesson 12_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Child.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//Child c1(10, 3.14, "Vasya Pupkin", 20, 2.73);
	//Child c2;
	//c1.Display();

	//c1.Operation1();
	//принцип подстановки:
	//! выполняется через указатель на родительский класс
	Parent *p = new Child(10, 3.14, "Vasya Pupkin", 20, 2.73);
	p->Operation1();
	p->Display();
	delete p;
	return 0;
}

