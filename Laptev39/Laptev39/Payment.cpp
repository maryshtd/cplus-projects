#include "stdafx.h"
#include "Payment.h"


Payment::Payment()
{
	this->FIO = "";
	this->salary = 0;
	this->EnterYear = 1900;
	this->ProcOfBonus = 0;
	this->IncomeTaxRate = 0;
}


Payment::~Payment()
{
	cout << "Память освобождена" << endl;
}

Payment::Payment(char* FIO, double salary, int EnterYear, double ProcOfBonus, double IncomeTaxRate)
{
	this->FIO = FIO;
	this->salary = salary;
	this->EnterYear = EnterYear;
	this->ProcOfBonus = ProcOfBonus;
	this->IncomeTaxRate = IncomeTaxRate;
}

double Payment::CountSalaryGross(int QuantityOfWorkdays, int QuantityOfMonthDays)
{
	SalaryGross = (salary / QuantityOfMonthDays)*QuantityOfWorkdays;
	SalaryGross *= (1 + ProcOfBonus);
	return SalaryGross;
}
double Payment::CountTaxSum()
{
	TaxSum = 0.01*SalaryGross + IncomeTaxRate*SalaryGross;
	return TaxSum;
}

double Payment::CountSalaryNet()
{
	return (SalaryGross - TaxSum);
}

int Payment::WorkingYears()
{
	return (2016 - EnterYear);
}
