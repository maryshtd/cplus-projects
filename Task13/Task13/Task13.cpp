// Task13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Book.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Book B2("Программирование за 21 день", 100, 300.0);
	B2.Display();
	cout<< "Средняя цена за 1 страницу - " << B2.CalcPrice() << "грн"<<endl;
	B2.ModifyPrice();
	B2.Display();
	return 0;
}

