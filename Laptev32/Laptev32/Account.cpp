#include "Account.h"


Account::Account()
{
	this->name = L"Undefined";
	this->num = 0;
	this->percent = 0;
	this->amount = 0;
}

Account::~Account()
{}

Account::Account(TCHAR *name, long long num, double percent, double amount)
{
	this->name = name;
	this->num = num;
	this->percent = percent;
	this->amount = amount;
}
TCHAR *Account::Display()
{
	TCHAR buff[200]; 
	swprintf_s(buff, L"Account: %s, N - %d, p: %f, amount^ %f",name, num,percent,amount);
	return buff;
}
void Account::SetName(TCHAR *name)
{
	this->name = name;
}
void Account::Credit(double summ)
{
	if (amount >= summ)
		amount -= summ;
}
void Account::Debit(double summ)
{
	amount += summ;
}
double Account::CalcProfit()
{
	return amount*percent / 100;
}

void Account::MakeProfit()
{
	amount += CalcProfit();
}

double Account::CalcAmountOnDollars()
{
	return amount/24.85;
}
double Account::GetAmountOnEuros()
{
	return amount/29.15;
}