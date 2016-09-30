// class Abonent 2List Laptev62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Abonent.h"
#include "List.h"
#include "Menu.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Menu m;
	List List1;
	do
	{
		m.Start();
		switch (m.GetChoice())
		{
		case 1:
		{
			char* name= new char[50];
			cout << "Введите имя абонента: ";
			cin >> name;
			char* region= new char[50];;
			cout << "Введите страну абонента: ";
			cin >> region;
			char* address= new char[50];;
			cout << "Введите адрес абонента: ";
			cin >> address;
			char* phone= new char[50];;
			cout << "Введите номер телефона: ";
			cin >> phone;
			int contract=0;
			cout << "Введите номер договора: ";
			cin >> contract;
			char* date1= new char[50];;
			cout << "Введите дату заключения контракта: ";
			cin >> date1;
			double price1=0;
			cout << "Введите тариф 1: ";
			cin >> price1;
			double price2=0;
			cout << "Введите тариф 2: ";
			cin >> price2;
			char* date2= new char[50];
			cout << "Введите дату расторжения договора: ";
			cin >> date2;
			Abonent A(name, region, address, phone, contract, date1, price1, price2, date2);
			List1.Add(A);
		}
			break;
		case 2:
		{
			int num = 0;
			cout << "Введите номер абонента, которого нужно удалить: ";
			cin >> num;
			List1.Erase(num);
		}
			break;
		case 3:
		{
			int contract = 0;
			cout << "Введите номер договора, по которому ищете абонента: ";
			cin >> contract;
			List1.SearchByContactNum(contract);
		}
			break;
		case 4:
		{
			char* phone = new char[50];
			cout << "Введите номер телефона, по которому ищете абонента: ";
			cin >> phone;
			List1.SearchByPhone(phone);
		}
			break;
		case 5:
		{
			char* name = new char[50];
			cout << "Введите имя, по которому ищете абонента: ";
			cin >> name;
			List1.SearchByName(name);
		}
			break;
		case 6:
		{
			char* contractDate = new char[50];
			cout << "Введите дату договора, по которой ищете абонента: ";
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
	List1.Display();
	return 0;
}

