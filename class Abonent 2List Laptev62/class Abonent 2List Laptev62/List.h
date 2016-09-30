#pragma once
#include "Abonent.h"
struct Node
{
	Abonent data;
	Node *next;
	Node *prev;
};

class List
{
	Node *head;
	Node *tail;
	int count;

public:
	List();
	~List();
	void Add(Abonent x);
	void Erase(int num);
	void Display();
	void SearchByContactNum(int contract);
	void SearchByPhone(char* phone);
	void SearchByName(char* name);
	void SearchByContractDate(char* contractDate);
	List operator+ (const List &l);
};

