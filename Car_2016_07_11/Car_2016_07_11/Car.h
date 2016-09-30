#pragma once
class Car
{
	char *model;
	int year;
	double price;

public:
	Car();
	~Car();
	Car(char *model, int year, double price);
	Car(const Car &c);
	void Display();
	friend void ModifyPrice(double p, Car &x);
};
