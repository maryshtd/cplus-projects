#pragma once
#include "Account.h"

class Bank
{
	std::vector<Account> v;
	void LoadData();
	void SaveData();
public:
	Bank();
	~Bank();
	void AddAccount(const Account a);
	void DelAccount(int n);
	void FindByNum(int num);
	void FindByName(std::string name);
	void FindByDate(std::string date);
	void Display();
	friend std::ostream& operator<<(std::ostream &s, const Account &a);
};
