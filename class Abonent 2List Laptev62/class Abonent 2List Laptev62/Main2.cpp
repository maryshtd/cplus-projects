// class Abonent 2List Laptev62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Abonent.h"
#include "List.h"
#include "Menu.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Menu m;
	List List1;
	do
	{
		m.Start();
		switch (m.GetChoice())
		{
		case 1:
		{
			char* name = "";
			cin >> name;
			char* region ="";
			cin >> region;
			char* address="";
			cin >> address;
			char* phone="";
			cin >> phone;
			int contract=0;
			cin >> contract;
			char* date1="";
			cin >> date1;
			double price1=0;
			cin >> price1;
			double price2=0;
			cin >> price2;
			char* date2="";
			cin >> date2;
			Abonent A(name, region, address, phone, contract, date1, price1, price2, date2);
			List1.Add(A);
		}
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:

			break;
		case 6:
		{
			char* contractDate;
			cin >> contractDate;
			List1.SearchByContractDate(contractDate);
		}
			break;
		case 7:
			goto end;
			break;
		default:
			cout << "\n Такого варианта нет в меню программы." << endl;
			break;
		}
	} while (m.Continue());
	end:
	m.Finish();
	return 0;
}

