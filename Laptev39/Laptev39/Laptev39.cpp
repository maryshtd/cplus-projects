// Laptev39.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Payment.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Payment Vasya("Василий Иванов", 10000, 2010, 0.05, 0.13);
	cout << "Начисленная сумма = " << Vasya.CountSalaryGross(15,20)<<endl;
	cout << "Удержанная сумма = " << Vasya.CountTaxSum() << endl;
	cout << "Сумма на руки = " << Vasya.CountSalaryNet() << endl;
	cout << "Стаж сотрудника = " << Vasya.WorkingYears() << endl;

	return 0;
}

