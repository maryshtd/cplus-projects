#include "Task.h"
#include <string>
#include "stdafx.h"


Task::Task(char* Question, char* answer1, char* answer2, char* answer3, char* answer4, char* answer5, int bal, int n){
	this->Question = Question;
	this->answer1 = answer1;
	this->answer2 = answer2;
	this->answer3 = answer3;
	this->answer4 = answer4;
	this->answer5 = answer5;
	this->bal = bal;
	this->n = n;
}

Task::Task(const Task &Task1){
	this->Question = Task1.Question;
	this->answer1 = Task1.answer1;
	this->answer2 = Task1.answer2;
	this->answer3 = Task1.answer3;
	this->answer4 = Task1.answer4;
	this->answer5 = Task1.answer5;
	this->bal = bal;
	this->n = n;

}

void Task::Display(){
	cout << "Question:" << Question<<endl;
	cout << "answer1:" << answer1 << endl;
	cout << "answer2:" << answer2 << endl;
	cout << "answer3:" << answer3 << endl;
	cout << "answer4:" << answer4 << endl;
	cout << "answer5:" << answer5 << endl;
	cout << "bal:" << bal << endl;
	cout << "Number of right answer:" << n << endl;

}

Task::Task()
{
	this->Question = NULL;
	this->answer1 = NULL;
	this->answer2 = NULL;
	this->answer3 = NULL;
	this->answer4 = NULL;
	this->answer5 = NULL;
	this->bal =0;
	this->n = 0;
}


Task::~Task()
{
	/*delete[] Question;
	delete[] answer1;
	delete[] answer2;
	delete[] answer3;
	delete[] answer4;
	delete[] answer5;*/

}
