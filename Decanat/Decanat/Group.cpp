#include "stdafx.h"
#include "Group.h"


Group::Group()
{
	count = 0;
	std::ifstream fin;
	fin.open("data.txt", std::ios_base::in);
	char *curr;
	char* next;
	char buff[1024];
	char name[50];
	int age;
	double rate;

	while (!fin.eof())
	{
		if (strlen(buff) != 0)
		fin.getline(buff, 1024);

		curr = strtok_s(buff, "-", &next);
		strcpy_s(name, curr); 

		curr = strtok_s(NULL, "-", &next);
		age = atoi(curr);

		curr = strtok_s(NULL, "-", &next);
		rate = atof(curr);

		Student s(name, age, rate);
		AddStudent(s);
	}
	fin.close();
	
}


Group::~Group()
{
}

void Group::Display()
{
	if (count == 0)
		std::cout << "Group is empty!" << std::endl;
	else
	{
		for (int i = 0; i < count; i++)
			arr[i].Display();
	}
}

void Group::AddStudent(const Student &x)
{
	if (count == 16)
		std::cout << "Group is full" << std::endl;
	else
	{
		arr[count] = x;
		count++;
	}
}

void Group::AddStudentFromConsole()
{
	std::cout << "Enter name: ";
	char name[50];
	std::cin.clear();
	std::cin.sync();
	std::cin.getline(name, 50);

	std::cout << "Enter age: ";
	int age;
	std::cin >> age;

	std::cout << "Enter rate: ";
	double rate;
	std::cin >> rate;

	Student s(name, age, rate);
	AddStudent(s);

}

void Group::Update()
{
	std::ofstream fout;
	fout.open("data.txt", std::ios_base::out);

	for (int i = 0; i < count; i++)
	{
		fout << arr[i].GetName() << " - " << arr[i].GetAge() << " - " << arr[i].GetRate()<< std::endl;
	}

	fout.close();
}