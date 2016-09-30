#include "stdafx.h"
#include "TestContent.h"
#include "Task.h"

TestContent::TestContent()
{
	GetData();
}


TestContent::~TestContent()
{
}

void TestContent::GetData()
{
	ifstream fin; 
	fin.open("Text.txt", ios_base::in);
	char buff[1024];
	int num, point;
	int k = 0;
	while (!fin.eof())
	{
		fin.getline(buff, 1024);
		k++;

		N = k / 8;
		arr = new Task[N];

	}
	fin.close();
	
	ifstream fin2;
	fin2.open("Text.txt", ios_base::in);

	int i = 0;
	while (!fin2.eof()) //eof - end of file
	{
		char *quest = new char[1024];
		char *ans1 = new char[1024];
		char *ans2 = new char[1024];
		char *ans3 = new char[1024];
		char *ans4 = new char[1024];
		char *ans5 = new char[1024];
		fin2.getline(buff, 1024);
		strcpy_s(quest, 1024, buff);
		fin2.getline(buff, 1024);
		strcpy_s(ans1, 1024, buff);
		fin2.getline(buff, 1024);
		strcpy_s(ans2, 1024, buff);
		fin2.getline(buff, 1024);
		strcpy_s(ans3, 1024, buff);
		fin2.getline(buff, 1024);
		strcpy_s(ans4, 1024, buff);
		fin2.getline(buff, 1024);
		strcpy_s(ans5, 1024, buff);

		fin2.getline(buff, 1024);
		num = atoi(buff);//ansi to int

		fin2.getline(buff, 1024);
		point = atof(buff); //ansi to float

		
		Task Q(quest, ans1, ans2, ans3, ans4, ans5, num, point);

		arr[i] = Q; 
		i++;

	}
	fin.close();
}

void TestContent::Update()
{

}

void TestContent::AddTask()
{

}
	
void TestContent::DeleteTask()
{

}

void TestContent::Display()
{
	if (N == 0)
		cerr << "Empty!" << endl;
	else
	{
		for (int i = 0; i < N; i++)
		{
			arr[i].Display();
			cout << endl;
		}
	}
}

Task &TestContent::operator[](int index)
{
	return arr[index];
}