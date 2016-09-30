#include "stdafx.h"
#include "Car.h"


Car::Car()
{
	model = "";
	year = 0;
	price = 0;
}


Car::~Car()
{
	if (!model)
		delete[] model;
}


Car::Car(char *model, int year, double price)
{
	int size = strlen(model) + 1;
	this->model = new char[size];
	strcpy_s(this->model, size, model);

	this->year = year;
	this->price = price;
}

Car::Car(const Car &c)
{
	this->model = c.model;
	this->year = c.year;
	this->price = c.price;
}

void Car::Display()
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Price: " << price << " dollars" << endl;
}

void ModifyPrice(double p, Car &x)
{
	x.price = p;
}
