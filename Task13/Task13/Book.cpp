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
	cout << "������ �����������";
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
	char* check = "����������������";
	if (strncmp(check, title, strlen(check)) == 0) price *= 2;
}

void Book::Display()
{
	cout << "�������� ����� - " << title << endl;
	cout << "� ���� ����� " << pages << " �������" << endl;
	cout << "����� ����� " << price << " ������"<<endl;
	cout << endl;
}