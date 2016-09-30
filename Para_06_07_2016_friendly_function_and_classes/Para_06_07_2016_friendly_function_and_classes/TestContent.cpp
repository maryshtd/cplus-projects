#include "TestContent.h"
#include "Task.h"
#include "stdafx.h"


TestContent::TestContent()
{
	/*arr = NULL;
	N = 0;*/
	GetData();
}


TestContent::~TestContent()
{}

Task &TestContent::operator[](int index)
{
	return arr[index];
}

void TestContent::GetData()
{
	ifstream fin; //поток чтения данных из файла - классовый
	fin.open("Text.txt", ios_base::in);
	char buff[1024];
	char *Question = new char[1024]; 
	char *answer1 = new char[1024];
	char*answer2 = new char[1024];
	char*answer3 = new char[1024];
	char*answer4 = new char[1024];
	char*answer5 = new char[1024];;
	int num, weight;
	int k = 0;
	while (!fin.eof())
	{
		fin.getline(buff, 1024);
		k++;

		N = k / 8; //кол-во блоков Task
		arr = new Task[N];
		}
	fin.close();
	ifstream fin2;
	fin2.open("Text.txt", ios_base::in);
	int i = 0; 
	while (!fin2.eof())
	{
		fin2.getline(buff, 1024);
		strcpy_s(Question, 1024, buff);

		fin2.getline(buff, 1024);
		strcpy_s(answer1, 1024, buff);

		fin2.getline(buff, 1024);
		strcpy_s(answer2, 1024, buff);

		fin2.getline(buff, 1024);
		strcpy_s(answer3, 1024, buff);

		fin2.getline(buff, 1024);
		strcpy_s(answer4, 1024, buff);

		fin2.getline(buff, 1024);
		strcpy_s(answer5, 1024, buff);
		fin2.getline(buff, 1024);
		num = atoi(buff);
		fin2.getline(buff, 1024);
		weight = atoi(buff);

		Task Q(Question, answer1, answer2, answer3, answer4, answer5, num, weight);

		arr[i] = Q;
		i++;
	
		}
	fin2.close();
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
		cerr << "No questions to display" << endl;
	else
	{
		for (int i = 0; i < N; i++)
		{
			arr[i].Display();
		}
	}
}