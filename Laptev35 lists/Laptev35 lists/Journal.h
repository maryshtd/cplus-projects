#pragma once
class Journal
{
	char course[50];
	char group[50];
	char lastName[50];
	int docNum;
	char subject[50];
	double rate;
public:
	Journal();
	~Journal();
	Journal(char course[50], char group[50], char lastName[50], int docNum, char subject[50], double rate);
	void Display();
	char* GetCourse();
	char* GetGroup();
	int GetDocNum();
	char* GetLastName();
	double GetRate();
	char* GetSubject();
};

