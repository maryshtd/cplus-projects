#include "stdafx.h"
#include "Shop.h"


Shop::Shop()
{
	arr = NULL;
	N = 0;
}


Shop::~Shop()
{
	if (arr != NULL)
	{
		delete[] arr;
		N = 0;
	}
}

void Shop::Display()
{
	if (N == 0)
		cerr << "Shop is empty" << endl;
	else
	{
		for (int i = 0; i < N; i++)
		{
			arr[i].Display();
		}
	}
}

void Shop::Add()
{
	cout << "\n> Введите данные о товаре: " << endl;

	cout << " Наименование товара: ";
	char *temp = new char[50];
	cin.clear();
	cin.sync();
	cin.getline(temp,100);

	cout << " Цена товара: ";
	double x;
	cin >> x;

	cout << " Скидка на товар: ";
	double y;
	cin >> y;

	Product p(temp, x, y);
	//delete[] temp;

	if (N == 0)
	{
		arr = new Product[1];
		arr[0] = p;
	}
	else
	{
		Product *buff = new Product[N];
		for (int i = 0; i < N; i++)
			buff[i] = arr[i];

		delete[] arr;
		arr = new Product[N + 1];

		for (int i = 0; i < N; i++)
			arr[i] = buff[i];
		arr[N] = p;

		delete[] buff;
		
	}
	N++;
}

Product &Shop::operator[](int index)
{
	return arr[index];
}