#pragma once
class Line;

class Dot
{
	int x;
	int y;
public:
	Dot();
	~Dot();
	Dot(int x, int y);
	Dot(const Dot &dot);
	friend int Distance(Dot &d, Line &l);
	void Display();
};

