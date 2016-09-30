#pragma once
class Date
{
	int day;
	int month;
	int year;
public:
	Date(void);
	~Date(void);
	Date(int day, int month, int year);
	void TypeOfYear();
	void IncreaseDate();
	void Display();
};

