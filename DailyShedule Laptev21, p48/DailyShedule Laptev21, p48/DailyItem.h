#pragma once

struct Time
{
	int hour;
	int minute;
	Time()
	{
		hour = 0;
		minute = 0;
	}

	Time(int hour, int minute)
	{
		this->hour = hour;
		this->minute=minute;
	}
	void Display()
	{
		cout << "Time -> " << hour << ":" << minute << endl;
	}
};
class DailyItem
{
	
	char *description;
	bool finish;
	
public:
	Time begin;
	Time end;
	DailyItem();
	~DailyItem();
	DailyItem(Time begin, Time end, char* description, bool finish);
	DailyItem(const DailyItem &item);
	void Display();
};

