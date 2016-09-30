#include "stdafx.h"
#include "Journal.h"


Journal::Journal()
{
	strcpy_s(this->course,"Undefined");
	strcpy_s(this->group, "Undefined");
	strcpy_s(this->lastName, "Undefined");
	this->docNum = 0;
	strcpy_s(this->subject, "Undefined");
	this->rate = 0;
}


Journal::~Journal()
{
}

Journal::Journal(char course[50], char group[50], char lastName[50], int docNum, char subject[50], double rate)
{
	strcpy_s(this->course, course);
	strcpy_s(this->group, group);
	strcpy_s(this->lastName, lastName);
	this->docNum = docNum;
	strcpy_s(this->subject, subject);
	this->rate = rate;
}
char* Journal::GetCourse()
{
	return this->course;
}
char* Journal::GetGroup()
{
	return this->group;
}
int Journal::GetDocNum()
{
	return this->docNum;
}
char* Journal::GetLastName()
{
	return this->lastName;
}
double Journal::GetRate()
{
	return this->rate;
}

void Journal::Display()
{
	cout << "Course: " << course << endl;
	cout << "Group: " << group << endl;
	cout << "Last name: " << lastName << endl;
	cout << "Number of document: " << docNum << endl;
	cout << "Subject: " << subject << endl;
	cout << "Rate: " << rate << endl;
}

char* Journal::GetSubject()
{
	return this->subject;
}