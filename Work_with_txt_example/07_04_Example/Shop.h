#pragma once
#include "Product.h"

class Shop
{
	Product* arr;
	int N;
public:
	Shop();
	~Shop();
	void Display();
	void Add();
	Product &operator[](int index);
	//void Fill();
};

