#include "stdafx.h"
#include "String.h"


String::String()
{
	this->str = "";
}


String::~String()
{}

String::String(char*str)
{
	this->str = str;
}

String::String(const String &s)
{
	this->str = s.str;
}

String String::operator+(const String &s)const
{
	char* temp=new char;
	temp = strcat(strcpy(temp, this->str), s.str);
	return temp;
}

void String::Display()
{
	cout << "Строка = " << str << endl;
}