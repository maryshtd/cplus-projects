#pragma once
class Product
{
	string name;
	double price;
public:
	Product();
	~Product();
	Product(string name, double price);
	void Display();
};

