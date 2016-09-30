#pragma once
#include "Model.h"

class PriceList
{
	char* DateCreated;
	double priceNominal;

public:
	PriceList();
	~PriceList();
	PriceList(char* DateCreated, double priceNominal, Model x);

};

