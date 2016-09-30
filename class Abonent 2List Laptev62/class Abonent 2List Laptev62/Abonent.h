#pragma once

class Abonent
{
	char name[50];
	char region[50];
	char address[50];
	char phone[50];
	int contract;
	char date1[50];
	double price1;
	double price2;
	char date2[50];
	
public:
	Abonent();
	~Abonent();
	Abonent(char name[50], char region[50], char address[50], char phone[50], int contract, char date1[50], double price1, double price2, char date2[50]);
	void Display();
	int GetContractNum();
	char* GetPhone();
	char* GetName();
	char* GetContractDate();
};

