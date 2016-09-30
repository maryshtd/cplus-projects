// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Goods.h"
#include "Menu.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	Menu m;
	do
	{
		m.Start();
		switch (m.GetChoice())
		{
		case 1:
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
			break;
		case 7:
			break;
		case 8:
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

