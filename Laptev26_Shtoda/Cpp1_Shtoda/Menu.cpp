#include "stdafx.h"
#include "Menu.h"


Menu::Menu()
{}


Menu::~Menu()
{}

void Menu::Start()
{
	system("cls"); //очистка экрана
	cout << "\n\t ====================================";
	cout << "\n\t Управеление датой";
	cout << "\n\t ====================================";
	cout << "\n\t      1 - Вывести данные о товаре на экран";
	cout << "\n\t      2 - Рассчитать цену в долларах";
	cout << "\n\t      3 - Увеличить цену в долларах, если товар Тойота";
	cout << "\n\t      4 - Выйти из программы";
	cout << "\n\t ====================================";

	cout << "\n Выберите нужное действие: ";
	cin >> choice;
}

void Menu::Finish()
{
	cout << "\n> Программа завершена \n\n";
}
bool Menu::Continue()
{
	cout << "\n> Еще (y/n)? - ";
	cin >> ans;
	return (ans == 'y');
}
int Menu::GetChoice()
{
	return choice;
}