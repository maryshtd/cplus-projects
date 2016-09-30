#pragma once
class PrintOrder
{
	char User[100];
	char OrderTime[30];
	int priority;
public:
	PrintOrder();
	~PrintOrder();
	PrintOrder(char User[],char OrderTime[],int priority);
	friend ostream &operator<<(ostream &s, const PrintOrder &x);
	int Priority();
};

