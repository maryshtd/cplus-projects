#pragma once
class Payment
{
	char* FIO;
	double salary;
	int EnterYear;
	double ProcOfBonus;
	double IncomeTaxRate;
	int QuantityOfWorkdays;
	int QuantityOfMonthDays;
	double SalaryGross;
	double TaxSum;
public:
	Payment();
	~Payment();
	Payment(char* FIO, double salary, int EnterYear, double ProcOfBonus, double IncomeTaxRate);
	double CountSalaryGross(int QuantityOfWorkdays, int QuantityOfMonthDays);
	double CountTaxSum();
	double CountSalaryNet();
	int WorkingYears();
};

