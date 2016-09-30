#include "stdafx.h"
#include "Product.h"


Product::Product()
{
	name = "";
	price = 0;
}


Product::~Product()
{}

Product::Product(string name, double price)
{
	this->name = name;
	this->price = price;
}
void Product::Display()
{
	cout << "Product " << name << " costs " << price << "UAH" << endl;
}