#pragma once

class Worker
{
protected:
    string name;
	string position;
	double salary;
public:
	Worker();
	~Worker();
	Worker(string name, string position, double salary);
	virtual void Display();

};

