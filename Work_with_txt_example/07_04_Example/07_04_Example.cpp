// 07_04_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Product.h"
#include "Shop.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Shop shop1;
	shop1.Display();

	shop1.Add();
	shop1.Add();
	shop1.Add();
	shop1.Display();

	shop1[1].Display();

	ifstream fin;
	fin.open("data.txt", ios_base::in);
	
	char buff[100];
	while (!fin.eof())
	{
		fin.getline(buff, 100);
		cout << buff << endl;
		char *word1, *word2, *next;
		word1 = strtok_s(buff, " ", &next);
		word2 = strtok_s(NULL, " ", &next);
		double x = atof(word2);

		Product p(word1, x, 0);
	}
	fin.close();

	return 0;
}

