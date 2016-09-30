#include "stdafx.h"
#include "List.h"


List::List()
{
	head = tail = NULL;
	this->count = 0;
}


List::~List()
{}

void List::Add(Journal x)
{
	Node *temp = new Node;
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;
	if (count == 0)
	{
		head = temp;
		tail = temp;
		count++;
	}
	else
	{
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
		count++;
	}
}
void List::Display()
{
	Node *ptr = new Node;
	int i = 0;
	ptr = head;
	if (count == 0)
		cout << "List is empty!" << endl;
	else if (count == 1)
	{
		ptr->data.Display();
		goto cyc;
	}
	else
	{
		while (i <= count)
		{
			ptr->data.Display();
			if (ptr->next != NULL)
			{
				ptr = ptr->next;
				i++;
			}
			else goto cyc;
		}
		cout << endl;
	}
	cyc: cout << endl;
}
List List::SearchByCourse(char* course)
{
	List List3;
	return List3;
}
List List::SearchByGroup(char* group)
{
	List List3;
	return List3;
}
List List::SearchByDocNum(int docNum)
{
	List List3;
	return List3;

}
List List::SearchByLastName(char* lastName)
{
	List List3;
	return List3;
}
List List::SearchByRate(double rate)
{
	List List3;
	return List3;
}
List List::operator+(const List &j)
{
	List List3;
	int i = 0;
	Node *ptr1 = new Node;
	ptr1 = this->head;
	Node *ptr2 = new Node;
	ptr2 = j.head;
	while (i < this->count)
	{
		List3.Add(ptr1->data);
		ptr1 = ptr1->next;
		i++;
	}
	i = 0;
	while (i < j.count)
	{
		List3.Add(ptr2->data);
		ptr2 = ptr2->next;
		i++;
	}
	return List3;
}
List List::operator*(const List&k)
{
	Node *ptr = new Node;
	ptr = this->head;
	Node *ptr2 = new Node;
	ptr2 = k.head;
	List List3;
	for (int i = 1; i <= this->count; i++)
	{
		for (int j = 1; j <= k.count; j++)
		{
			if ((strcmp(ptr->data.GetSubject(), ptr2->data.GetSubject()) == 0) && (strcmp(ptr->data.GetLastName(), ptr2->data.GetLastName()) == 0))
			{
				List3.Add(ptr->data);
			}
			ptr2 = ptr2->next;
			j++;
		}
		ptr = ptr->next;
	}
	return List3;
}
