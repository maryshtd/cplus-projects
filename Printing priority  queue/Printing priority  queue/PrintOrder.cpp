#include "stdafx.h"
#include "PrintOrder.h"


PrintOrder::PrintOrder()
{
	strcpy_s(this->User, "undefined");
	strcpy_s(this->OrderTime, "01-01-1900 19:00");
	this->priority = 0;
}


PrintOrder::~PrintOrder()
{}

PrintOrder::PrintOrder(char User[], char OrderTime[], int priority)
{
	strcpy_s(this->User, User);
	strcpy_s(this->OrderTime, OrderTime);
	this->priority = priority;
}

ostream &operator<<(ostream &s, const PrintOrder &x) 
{
	s << x.User << ", " << x.OrderTime;
	return s;
}

int PrintOrder::Priority()
{
	return this->priority;
}