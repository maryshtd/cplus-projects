#pragma once
class Paral
{
	double S1;
	double S2;
	double h;
public:
	Paral();
	~Paral();
	Paral(double S1, double S2, double h);
	double Volume();
	double LongerDiagonal();
	void Display();
};

