#include "stdafx.h"
#include "Fraction.h"


Fraction::Fraction()
{
	this->integer = 0;
	this->numerator = 0;
	this->denominator = 1;
}


Fraction::~Fraction()
{}

Fraction::Fraction(long int integer, long int numerator, int denominator)
{
	this->integer = integer;
	this->numerator = numerator;
	this->denominator = denominator;
}

Fraction::Fraction(const Fraction &obj)
{
	this->integer = obj.integer;
	this->numerator = obj.numerator;
	this->denominator = obj.denominator;
}

Fraction Fraction::Plus(const Fraction &obj)const
{
	Fraction temp;
	temp.integer = this->integer + obj.integer;
	temp.numerator = this->numerator*obj.denominator+this->denominator*obj.numerator;
	temp.denominator = this->denominator*obj.denominator;
	temp.Reduction();
	return temp;
}

Fraction Fraction::Minus(const Fraction &obj)const
{
	Fraction temp;
	temp.numerator = ((this->integer*this->denominator) + this->numerator)*obj.denominator - this->denominator*((obj.integer*obj.denominator) + obj.numerator);
	temp.denominator = this->denominator*obj.denominator;
	temp.Reduction();
	return temp;
}

Fraction Fraction::Multiple(const Fraction &obj)const
{
	Fraction temp;
	temp.numerator = ((this->integer*this->denominator) + this->numerator)*((obj.integer*obj.denominator) + obj.numerator);
	temp.denominator = this->denominator*obj.denominator;
	temp.Reduction();
	return temp;
}

Fraction Fraction::Divide(const Fraction &obj)const
{
	Fraction temp;
	temp.numerator = ((this->integer*this->denominator) + this->numerator)*obj.denominator;
	temp.denominator = this->denominator*((obj.integer*obj.denominator) + obj.numerator);
	temp.Reduction();
	return temp;
}

void Fraction::Reduction()
{
	while (this->numerator > this->denominator)
	{
		this->integer++;
		this->numerator -= this->denominator;
	}
	int a = this->numerator;
	int b = this->denominator;
	while (a != 0 && b != 0)
	{
		if (a > b) 	a = a % b;
		else b = b % a;
	}
	this->numerator /= (a + b);
	this->denominator /=  (a + b);
	}

void Fraction::Display()
{
	cout << "Целая часть = " << integer << endl;
	cout << "Числитель = " << numerator << endl;
	cout << "Знаменатель = " << denominator <<"\n"<< endl;
}