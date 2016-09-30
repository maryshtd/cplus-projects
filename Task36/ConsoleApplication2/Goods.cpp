#include "stdafx.h"
#include "Goods.h"


Goods::Goods()
{
	this->name = "-"; //����������� �� ���������
	this->date = "-";
	this->price = 0;
	this->N = 0;
	this->id = 0;
}


Goods::~Goods()
{}

Goods::Goods(char *name, char *date, double price, int N, int id)
{
	this->name = name; //����������� �����������������
	this->date = date;
	this->price = price;
	this->N = N;
	this->id = id;
}

void Goods::SetPrice(double price)
{
	this->price = price;
}
void Goods::SetNumber(int N)
{
	this->N = N;
}
double Goods::CalcAmount()
{
	return price*N;
}
void Goods::toString()
{
	cout << "\n> " << name << "-" << date << ": " << price << " uah; ";
	cout << N << "; " << id << endl;
}