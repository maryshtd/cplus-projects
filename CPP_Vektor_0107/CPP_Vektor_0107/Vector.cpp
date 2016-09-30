#include "stdafx.h"
#include "Vector.h"


Vector::Vector()
{
	x = 0;
	y = 0;
}


Vector::~Vector()
{}

Vector::Vector(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector::Vector(const Vector &v)
{
	this->x = v.x;
	this->y = v.y;
}

void Vector::Display()const
{
	cout << "vector: (" << x << ", " << y << ")" << endl;
}

Vector Vector::operator+(const Vector &v)const
{
	Vector temp;
	temp.x = this->x + v.x;
	temp.y = this->y + v.y;
	return temp;
}

Vector Vector::operator-(const Vector &v)const
{
	Vector temp;
	temp.x = this->x - v.x;
	temp.y = this->y - v.y;
	return temp;
}

double Vector::operator*(const Vector &v)const
{
	double temp;
	temp = this->x*v.x + this->y*v.y;
	return temp;
}

Vector Vector::operator*(const double &k)const
{
	Vector temp;
	temp.x = k*this->x;
	temp.y = k*this->y;
	return temp;
}