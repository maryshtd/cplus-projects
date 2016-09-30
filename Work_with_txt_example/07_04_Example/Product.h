#pragma once
class Product
{
	char* name;
	double price;
	double discount;

public:
	Product();
	~Product();
	Product(char* name, double price, double discount);
	void Display();
	Product(const Product &p);
	Product &operator--();

};

