// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Goods.h"
#include "Menu.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Goods Good1("Toyota Corolla",200000,0,1997);
	Menu m;
	do
	{
		m.Start();
		switch (m.GetChoice())
		{
		case 1:
			Good1.Display();
			break;
		case 2:
			cout<<"Цена товара в долларах  - "<<Good1.CalcUSDprice()<<" долларов"<<endl;
			break;
		case 3:
			Good1.IncreaseIfToyota();
			Good1.Display();
			break;
		case 4:
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

