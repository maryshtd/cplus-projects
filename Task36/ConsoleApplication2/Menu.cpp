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
	cout << "\n\t Система управления движением товаров";
	cout << "\n\t ====================================";
	cout << "\n\t      1 - Вывести весь список товаров";
	cout << "\n\t      2 - Добавить товар в список";
	cout << "\n\t      3 - Найти товар по накладной";
	cout << "\n\t      4 - Найти товар по наименованию";
	cout << "\n\t      5 - Найти товар по дате";
	cout << "\n\t      6 - Изменить цену товара";
	cout << "\n\t      7 - Изменить количество товара";
	cout << "\n\t      8 - Выйти из программы";
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