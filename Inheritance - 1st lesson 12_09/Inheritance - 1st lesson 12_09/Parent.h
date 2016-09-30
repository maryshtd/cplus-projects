#pragma once
class Parent
{
protected:
	int a;
	double b;
	std::string f;
public:
	Parent();
	~Parent();
	Parent(int a, double b,	std::string f);
	virtual void Display();
	virtual void Operation1();

};

