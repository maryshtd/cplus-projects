#include "stdafx.h"
#include "Line.h"
#include "Dot.h"

Line::Line()
{
	this->A = 0;
	this->B = 0;
	this->C = 0;
}


Line::~Line()
{
}

Line::Line(int A, int B,int C)
{
	this->A = A;
	this->B = B; 
	this->C = C;
}


Line::Line(const Line &line)
{
	this->A = line.A;
	this->B = line.B;
	this->C = line.C;
}


int Distance(Dot &d, Line &l)
{
	int distance = d.x*l.A + d.y*l.B + l.C;
	return distance;
}

void Line::Display()
{
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;
}