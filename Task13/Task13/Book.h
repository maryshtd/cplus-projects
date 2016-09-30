#pragma once
class Book
{
	char* title;
	int pages;
	double price;
public:
	Book();
	~Book();
	Book(char* title, int pages, double price);
	double CalcPrice();
	void ModifyPrice();
	void Display();
};

