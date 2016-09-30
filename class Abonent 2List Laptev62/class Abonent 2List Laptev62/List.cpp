#include "stdafx.h"
#include "List.h"


List::List()
{
	head = tail = NULL;
	count = 0;
}


List::~List()
{
	head = tail=NULL;
	count = NULL;
}

void List::Add(Abonent x)
{
	Node *temp = new Node();
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;


	if (count == NULL)
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

void List::Erase(int num)
{

	int i = 1;
	Node *ptr = new Node();
	ptr = head;
	if (num<=count && num == 1)
	{
		head = head->next;
		head->prev = NULL;
		count--;
	}
	else if (num == count)
	{
		tail = tail->prev;
		tail->next = NULL;
		count--;
	}
	else if (num > count)
	{
		cout << "Удаление невозможно. Такого элемента не существует"<<endl;
		cout << "\n";
	}
	else if (count == 0)
	{
		cout << "Список пуст" << endl;
		cout << "\n";
	}
	else
	{
		while (i!= count && i != num )
		{
			ptr = ptr->next;
			i++;
		}
		ptr->next = ptr->next->next;
		count--;
	}


	
	
}

void List::Display()
{
	int i = 1;
	Node *ptr = new Node();
	ptr = head;
	if (head == NULL)
			cout << "\n> Cписок пуст" << endl;
		else
		{
			while (i <= count)
			{
				ptr->data.Display();
				ptr = ptr->next;
				i++;
			}
			cout << endl;
		}
	
}

void List::SearchByContactNum(int contract)
{
	int i = 1;
	Node *ptr = new Node();
	ptr = head;
	while (i <= count)
	{
		if (ptr->data.GetContractNum() == contract)
		{
			ptr->data.Display();
			break;
		}
		else
		{
			ptr = ptr->next;
			i++;
			if (i> count) cout << "Абонент не найден" << endl;
		}
	}
}

void List::SearchByPhone(char* phone)
{
	int i = 1;
	Node *ptr = new Node();
	ptr = head;
	while (i <= count)
	{
		if (!strcmp(ptr->data.GetPhone(),phone))
		{
			ptr->data.Display();
			break;
		}
		else
		{
			ptr = ptr->next;
			i++;
			if (i> count) cout << "Абонент не найден" << endl;
		}
	}
}

List List::operator+ (const List &l)
{
	List L3;
	L3.head = this->head;
	L3.tail = l.tail;
	this->tail->next = l.head;
	l.head->prev = this->tail;
	L3.count = this->count + l.count;
	return L3;
}

void List::SearchByName (char* name)
{
	int i = 1;
	Node *ptr = new Node();
	ptr = head;
	while (i <= count)
	{
		if (!strcmp(ptr->data.GetName(), name))
		{
			ptr->data.Display();
			break;
		}
		else
		{
			ptr = ptr->next;
			i++;
			if (i> count) cout << "Абонент не найден" << endl;
		}
	}
}

void List::SearchByContractDate(char* contractDate)
{
	int i = 1;
	Node *ptr = new Node();
	ptr = head;
	while (i <= count)
	{
		if (!strcmp(ptr->data.GetContractDate(), contractDate))
		{
			ptr->data.Display();
			break;
		}
		else
		{
			ptr = ptr->next;
			i++;
			if (i> count) cout << "Абонент не найден" << endl;
		}
	}
}