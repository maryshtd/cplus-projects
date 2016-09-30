#pragma once
#include "Product.h"

class Shop
{
	vector<Product> v;
	vector<Product>::iterator r;
public:
	Shop();
	~Shop();
	vector<Product> getVector();
	void Add(const Product &x);
	void Display();
	void Load();
};

