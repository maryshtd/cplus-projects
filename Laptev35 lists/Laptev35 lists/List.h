#pragma once
#include "Journal.h"
struct Node
{
	Journal data;
	Node *next;
	Node *prev;
};
class List
{
	int count;
	Node *head;
	Node *tail;
public:
	List();
	~List();
	void Add(Journal x);
	void Display();
	List SearchByCourse(char* course);
	List SearchByGroup(char* group);
	List SearchByDocNum(int docNum);
	List SearchByLastName(char* lastName);
	List SearchByRate(double rate);
	List operator+(const List &j);
	List operator*(const List&k);
};

