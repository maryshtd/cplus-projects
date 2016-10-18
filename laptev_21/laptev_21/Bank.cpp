#include "stdafx.h"
#include "Bank.h"


Bank::Bank()
{
	LoadData();
}


Bank::~Bank()
{}

void Bank::LoadData()
{
	int num;
	std::string name;
	std::string date;
	double amount;
	double percent;
	
	char buff[1024];
	char *curr, *next;

	std::ifstream fin;
	fin.open("Accounts.txt");
	while (!fin.eof())
	{
		fin.getline(buff, 1024);
		if (strlen(buff) > 0)
		{

			curr = strtok_s(buff, " ", &next);
			num = atoi(curr);                     //convert from char to int

			curr = strtok_s(NULL, " ", &next);
			name = curr;						//do not need to convert char to string

			curr = strtok_s(NULL, " ", &next);
			date = curr;				//convert from char to double

			curr = strtok_s(NULL, " ", &next);
			amount = atof(curr);

			curr = strtok_s(NULL, " ", &next);
			percent = atof(curr);

		    Account x(num, name, date, amount, percent);
			v.push_back(x);
		}
	}
	fin.close();
}
void Bank::SaveData()
{
	std::ofstream fout;
	fout.open("Accounts.txt");
	for (auto r = v.begin(); r != v.end(); r++)
	{
		fout << r->getnum() << " ";
		fout << r->getname() << " ";
		fout << r->getdate() << " ";
		fout << r->getamount() << " ";
		fout << r->getpercent() << std::endl;

	}
	fout.close();
}

void Bank::AddAccount(const Account a)
{
	v.push_back(a);
	SaveData();
}
void Bank::DelAccount(int n) //удаление аккаунта по индексу
{
	auto r = v.begin();
	v.erase(r+n);
	SaveData();
}
void Bank::FindByNum(int num)
{
	for (int i = 0; i<v.size(); i++)
	{
		if (v[i].num == num)
		{
			std::cout << v[i] << endl;
		}
	}
}
void Bank::FindByName(std::string name)
{
	for (int i = 0; i<v.size(); i++)
	{
		if (v[i].name == name)
		{
			std::cout << v[i] << endl;
		}
	}
}
void Bank::FindByDate(std::string date)
{
	for (int i = 0; i<v.size(); i++)
	{
		if (v[i].date == date)
		{
			std::cout << v[i] << endl;
		}
	}
}

void Bank::Display()
{
	for (int i = 0;i<v.size();i++)
	{
		std::cout << v[i] << endl;
	}
}