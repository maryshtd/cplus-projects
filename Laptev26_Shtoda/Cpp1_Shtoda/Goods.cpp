#include "stdafx.h"
#include "Goods.h"


Goods::Goods(void)
{
	this->name = "";
	this->priceUAH = 0;
	this->priceUSD = 0;
	this->productYear = 1900;
}


Goods::~Goods(void)
{
	cout<<"Memory erased"<<endl;
}

Goods::Goods(char* name, double priceUAH, double priceUSD, int productYear)
{
	this->name = name;
	this->priceUAH = priceUAH;
	this->priceUSD = priceUSD;
	this->productYear = productYear;
}

double Goods::CalcUSDprice()
{
	priceUSD = priceUAH/25;
	return priceUSD;
}

void Goods::IncreaseIfToyota()
{
	char* check = "Toyota";
	if (strncmp(name,check,strlen(check)) == 0) priceUSD*=2;
}

void Goods::Display()
{
	cout<<"Наименование товара - "<<name<<endl;
	cout<<"Цена в грн = "<<priceUAH<<endl;
	cout<<"Цена в долларах = "<<priceUSD<<endl;
	cout<<"Год выпуска - "<<productYear<<endl;
}