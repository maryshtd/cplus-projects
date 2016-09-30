#pragma once
class Goods
{
	char *name;
	char *date;
	double price;
	int N;
	int id;
public:
	Goods();
	~Goods();
	Goods(char *name, char *date, double price, int N, int id);
	void SetPrice(double price);
	void SetNumber(int N);
	double CalcAmount();
	void toString();
};

