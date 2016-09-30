#pragma once

class Menu
{
	int choice;
	char ans;
public:
	Menu();
	~Menu();
	void Start();
	void Finish();
	bool Continue();
	int GetChoice();
};

