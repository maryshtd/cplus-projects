#include "stdafx.h"
#include "Menu.h"


Menu::Menu()
{
	ans = 'y';
}


Menu::~Menu()
{}

void Menu::Start()
{
	cout << "\n> Enter coefficient of equation: ";
}

void Menu::Finish()
{
	cout << "\n> Program is finished\n\n";
}

bool Menu::Continue()
{
	cout << "\n Continue? (y/n) - ";
	if (ans != 'y' && ans != 'n')
		throw "You entered wrong symbol";
	int code = static_cast<int>(ans);
	if (code >= 48 && code <= 57)
		throw "You entered a number";
	return (ans == 'y');
}