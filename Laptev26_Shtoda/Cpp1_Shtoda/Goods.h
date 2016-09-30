#pragma once
class Goods
{
	char* name;
	double priceUAH;
	int productYear;
	double priceUSD;
public:
	Goods(void);
	~Goods(void);
	Goods(char* name, double priceUAH, double priceUSD, int productYear);
	double CalcUSDprice();
	void IncreaseIfToyota();
	void Display();
};

