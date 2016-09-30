#pragma once
class Bankomat
{
	int id;
	int CurrentSum;
	int MinSum;
	int MaxSum;

public:
	Bankomat(void);
	~Bankomat(void);
	Bankomat(int id, int CurrentSum, int MinSum, int MaxSum);
	void AddSum(int Sum);
	void CreditSum(int Sum);
	void Display();
};

