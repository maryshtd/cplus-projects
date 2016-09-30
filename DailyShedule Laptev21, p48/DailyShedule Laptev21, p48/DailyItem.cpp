#include "stdafx.h"
#include "DailyItem.h"


DailyItem::DailyItem()
{
	description = NULL;
	finish = false;
}


DailyItem::~DailyItem()
{
	if (description != NULL)
		delete[] description;
}

DailyItem::DailyItem(Time begin, Time end, char* description, bool finish)
{
	this->begin.hour = begin.hour;
	this->begin.minute = begin.minute;
	
	this->end.hour = end.hour;
	this->end.minute = end.minute;

	int size = strlen(description) + 1;
	this->description = new char[size];
	strcpy_s(this->description, size, description);

	this->finish = finish;
}

DailyItem::DailyItem(const DailyItem &item)
{
	this->begin.hour = item.begin.hour;
	this->begin.minute = item.begin.minute;

	this->end.hour = item.end.hour;
	this->end.minute = item.end.minute;

	int size = strlen(item.description) + 1;
	this->description = new char[size];
	strcpy_s(this->description, size, description);

	this->finish = item.finish;
}

void DailyItem::Display()
{
	cout << "\n> Item Info: " << endl;
	cout << "	Begin: " << endl;
	begin.Display();
	cout << "	End: " << endl;
	end.Display();
	cout << "	Description: " << description << endl;
	if (finish)
		cout << "	Finished" << endl;
	else
		cout << "	Not finished" << endl;

}