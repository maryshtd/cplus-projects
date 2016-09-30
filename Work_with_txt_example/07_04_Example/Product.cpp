#include "stdafx.h"
#include "Product.h"


Product::Product()
{
	this->name = "";
	this->price = 0;
	this->discount = 0;
}


Product::~Product()
{
}

Product::Product(char* name, double price, double discount)
{
	this->name = name;
	this->price = price;
	this->discount = discount;
}

void Product::Display()
{
	cout << "Наименование товара: " << name << endl;
	cout << "Цена товара: " << price << endl;
	cout << "Скидка: " << discount << endl;
}

Product::Product(const Product &p)
{
	this->name = p.name;
	this->price = p.price;
	this->discount = p.discount;
}

Product &Product::operator--()
{
	price -= (price*discount)/100;
	return *this;
}
