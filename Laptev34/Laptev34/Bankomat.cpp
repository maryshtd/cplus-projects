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
	if (Sum%10 !=0) cout<<"������� ��������� �����. ������������ �������"<<endl;
	else {CurrentSum+=Sum;
	cout<<"����� ��������� �� "<<Sum<<" ������"<<endl;}
}

void Bankomat::CreditSum(int Sum)
{
	if (Sum%10 !=0) cout<<"������� ����� �����. ������������ �������"<<endl;
	else if (Sum<MinSum) cout<<"��������� ����� ������ ���������� ���������"<<endl;
	else if (Sum>MaxSum) cout<<"��������� ����� ������ ����������� ���������"<<endl;
	else {CurrentSum-=Sum;
	cout<<"����� "<<Sum<<" ������"<<endl;}
}

void Bankomat::Display()
{
	cout<<"\n";
	cout<<"������������� ��������� - "<<id<<endl;
	cout<<"������� ����� = "<<CurrentSum<<endl;
	cout<<"����������� ����� = "<<MinSum<<endl;
	cout<<"������������ ����� = "<<MaxSum<<endl;
	cout<<"\n";
}