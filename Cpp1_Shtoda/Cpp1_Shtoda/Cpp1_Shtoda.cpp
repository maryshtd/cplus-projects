// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Date.h"
#include "Menu.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Date d1(1,11,2015);
	Menu m;
	do
	{
		m.Start();
		switch (m.GetChoice())
		{
		case 1:
			d1.Display();
			break;
		case 2:
			d1.Display();
			d1.TypeOfYear();
			break;
		case 3:
			d1.IncreaseDate();
			d1.Display();
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

