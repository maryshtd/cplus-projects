#include "stdafx.h"
#include "Menu.h"


Menu::Menu()
{}


Menu::~Menu()
{}

void Menu::Start()
{
	system("cls"); //������� ������
	cout << "\n\t ====================================";
	cout << "\n\t ����������� �����";
	cout << "\n\t ====================================";
	cout << "\n\t      1 - ������� ������ � ������ �� �����";
	cout << "\n\t      2 - ���������� ���� � ��������";
	cout << "\n\t      3 - ��������� ���� � ��������, ���� ����� ������";
	cout << "\n\t      4 - ����� �� ���������";
	cout << "\n\t ====================================";

	cout << "\n �������� ������ ��������: ";
	cin >> choice;
}

void Menu::Finish()
{
	cout << "\n> ��������� ��������� \n\n";
}
bool Menu::Continue()
{
	cout << "\n> ��� (y/n)? - ";
	cin >> ans;
	return (ans == 'y');
}
int Menu::GetChoice()
{
	return choice;
}