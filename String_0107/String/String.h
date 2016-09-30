#pragma once
class String
{
	char* str;
public:
	String();
	~String();
	String(char*str);
	String(const String &s);
	String operator+(const String &s)const;
	void Display();
};

