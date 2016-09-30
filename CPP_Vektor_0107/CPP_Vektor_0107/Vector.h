#pragma once
class Vector
{
	double x;
	double y;
public:
	Vector();
	~Vector();
	Vector(double x, double y);
	Vector(const Vector &v);
	void Display()const;
	Vector operator+(const Vector &v)const;
	Vector operator-(const Vector &v)const;
	double operator*(const Vector &v)const;
	Vector operator*(const double &k)const;
};

