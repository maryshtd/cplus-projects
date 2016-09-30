#include "stdafx.h"
#include "Abonent.h"


Abonent::Abonent()
{
	strcpy_s(this->name, "Undefined");
	strcpy_s(this->region, "Undefined");
	strcpy_s(this->address, "Undefined");
	strcpy_s(this->phone, "Undefined");
	strcpy_s(this->date1, "Undefined");
	strcpy_s(this->date2, "Undefined");
	this-> contract = NULL;
	this-> price1 = NULL;
	this-> price2 = NULL;
	
}


Abonent::~Abonent()
{}

Abonent::Abonent(char name[50], char region[50], char address[50], char phone[50], int contract, char date1[50], double price1, double price2, char date2[50])
{
	strcpy_s(this->name, name);
	strcpy_s(this->region, region);
	strcpy_s(this->address, address);
	strcpy_s(this->phone, phone);
	strcpy_s(this->date1, date1);
	strcpy_s(this->date2, date2);
	this->contract = contract;
	this->price1 = price1;
	this->price2 = price2;
}

void Abonent::Display()
{
	cout << "Information about the Abonent:" << endl;
	cout << "name: " << name << ";" << endl;
	cout << "region: " << region << ";" << endl;
	cout << "address: " << address << ";" << endl;
	cout << "phone: " << phone << ";" << endl;
	cout << "number of the contract: " << contract << ";" << endl;
	cout << "date1: " << date1 << ";" << endl;
	cout << "price1: " << price1 << ";" << endl;
	cout << "price2: " << price2 << ";" << endl;
	cout << "date2: " << date2 << ";" << endl;
	cout << endl;

}

int Abonent::GetContractNum()
{
	return this->contract;
}

char* Abonent::GetPhone()
{
	return this->phone;
}

char* Abonent::GetName()
{
	return this->name;
}

char* Abonent::GetContractDate()
{
	return this->date1;
}