#include "stdafx.h"
#include "Book.h"


Book::Book()
{
	this->title = "";
	this->pages = 0;
	this->price = 0.0;
}


Book::~Book()
{
	cout << "Память освобождена";
}

Book::Book(char* title, int pages, double price)
{
	this->title = title;
	this->pages = pages;
	this->price = price;
}

double Book::CalcPrice()
{
	return (price / pages);
}

void Book::ModifyPrice()
{
	char* check = "Программирование";
	if (strncmp(check, title, strlen(check)) == 0) price *= 2;
}

void Book::Display()
{
	cout << "Название книги - " << title << endl;
	cout << "В этой книге " << pages << " страниц" << endl;
	cout << "Книга стоит " << price << " гривен"<<endl;
	cout << endl;
}