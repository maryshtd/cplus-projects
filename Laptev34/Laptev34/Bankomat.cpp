#include "stdafx.h"
#include "Bankomat.h"


Bankomat::Bankomat(void)
{
	this->id = 0;
	this->CurrentSum = 0;
	this->MinSum=0;
	this->MaxSum = 0;
}


Bankomat::~Bankomat(void)
{}

Bankomat::Bankomat(int id, int CurrentSum, int MinSum, int MaxSum)
{
	this->id = id;
	this->CurrentSum = CurrentSum;
	this->MinSum=MinSum;
	this->MaxSum = MaxSum;
}

void Bankomat::AddSum(int Sum)
{
	if (Sum%10 !=0) cout<<"Попытка пополнить карту. Некорректный номинал"<<endl;
	else {CurrentSum+=Sum;
	cout<<"Карта пополнена на "<<Sum<<" гривен"<<endl;}
}

void Bankomat::CreditSum(int Sum)
{
	if (Sum%10 !=0) cout<<"Попытка снять сумму. Некорректный номинал"<<endl;
	else if (Sum<MinSum) cout<<"Запрошена сумма меньше минимально доступной"<<endl;
	else if (Sum>MaxSum) cout<<"Запрошена сумма больше максимально доступной"<<endl;
	else {CurrentSum-=Sum;
	cout<<"Снято "<<Sum<<" гривен"<<endl;}
}

void Bankomat::Display()
{
	cout<<"\n";
	cout<<"Идентификатор банкомата - "<<id<<endl;
	cout<<"Текущая сумма = "<<CurrentSum<<endl;
	cout<<"Минимальная сумма = "<<MinSum<<endl;
	cout<<"Максимальная сумма = "<<MaxSum<<endl;
	cout<<"\n";
}