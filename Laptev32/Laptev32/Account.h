#pragma once
#include "stdafx.h"

class Account
{
	TCHAR *name;
	long long num;
	double percent;
	double amount;
	double CalcProfit();

public:
	Account();
	~Account();
	Account(TCHAR *name, long long num, double percent, double amount);
	TCHAR *Display();
	void SetName(TCHAR *name);
	void Credit(double summ);
	void Debit(double summ);
	void MakeProfit();
	double CalcAmountOnDollars();
	double GetAmountOnEuros();
};

