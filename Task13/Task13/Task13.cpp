// Task13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Book.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Book B2("���������������� �� 21 ����", 100, 300.0);
	B2.Display();
	cout<< "������� ���� �� 1 �������� - " << B2.CalcPrice() << "���"<<endl;
	B2.ModifyPrice();
	B2.Display();
	return 0;
}

