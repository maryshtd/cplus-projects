#pragma once
class Fraction
{
	long int integer;
	long int numerator;
	int denominator;
public:
	Fraction();
	~Fraction();
	Fraction(long int integer, long int numerator, int denominator);
	Fraction(const Fraction &obj);
	Fraction Plus(const Fraction &obj)const;
	Fraction Minus(const Fraction &obj)const;
	Fraction Multiple(const Fraction &obj)const;
	Fraction Divide(const Fraction &obj)const;
	void Reduction();
	void Display();
};