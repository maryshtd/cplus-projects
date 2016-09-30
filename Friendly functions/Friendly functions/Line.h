#pragma once
class Dot;


class Line
{
	int A;
	int B;
	int C;
public:
	Line();
	~Line();
	Line(int A, int B,int C);
	Line(const Line &line);
	friend int Distance(Dot &d, Line &l);
	void Display();
};

