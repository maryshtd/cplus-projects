// Laptev39.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Payment.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Payment Vasya("������� ������", 10000, 2010, 0.05, 0.13);
	cout << "����������� ����� = " << Vasya.CountSalaryGross(15,20)<<endl;
	cout << "���������� ����� = " << Vasya.CountTaxSum() << endl;
	cout << "����� �� ���� = " << Vasya.CountSalaryNet() << endl;
	cout << "���� ���������� = " << Vasya.WorkingYears() << endl;

	return 0;
}

