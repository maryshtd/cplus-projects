#include "stdafx.h"
#include "Shop.h"


Shop::Shop()
{
	Load();
	Display();
}

Shop::~Shop()
{}

vector<Product> Shop::getVector()
{
	return v;
}

void Shop::Display()
{
	cout << "\n\n";
	if (v.empty())
		cout << "\n List of products is empty" << endl;
	else
		for (r = v.begin(); r != v.end(); r++)
			r->Display();
}

void Shop::Add(const Product &x)
{
	v.push_back(x);
}

void Shop::Load()
{
	ifstream fin;
	fin.open("Data.txt", ios_base::in);
	char cname[50];
	string name;
	double price;
	char cprice[50];
	while (!fin.eof())
	{
		fin.getline(cname,50); //getline works with char, that's why we use temp variables and then convert to string
		name = cname;
		fin.getline(cprice, 50);
		price = atof(cprice);
		v.push_back(Product(name, price));
	}

		fin.close();
}