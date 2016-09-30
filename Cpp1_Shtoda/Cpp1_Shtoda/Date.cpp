#include "stdafx.h"
#include "Date.h"


Date::Date(void)
{
	this->day = 0;
	this->month = 0;
	this->year = 1900;
}


Date::~Date(void)
{
	cout<<"Memory erased";
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}
	
void Date::TypeOfYear()
{ 
	if (year%4 == 0) cout<<"Високосный год"<<endl;
	else cout<<"Не високосный год"<<endl;
}

void Date::IncreaseDate()
{
	if (day<26) day+=5;
	else if (month<12)
	{
		day = 5-(31-day);
		month++;
	}
	else 
	{
		day = 5-(31-day);
		month++;
		year++;
	}
}

void Date::Display()
{
	cout<<"Текущая дата - "<<day<<"."<<month<<"."<<year<<endl;
}
