#pragma once
template<typename T> struct Node
{
	T data;
	Node<T> *next;
};
template<typename T> class List
{
	Node<T> *head;
	Node<T> *tail;
	Node<T> *ptr;

public:
	List()
	{
		head = tail = ptr = NULL;
	}
	~List()
	{
		head = tail = ptr = NULL;
	}
	void Add(T x)
	{
		Node<T> *temp = new Node<T>();
		temp->data = x;
		temp->next = NULL;

		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}

	void Display()
	{
		if (head == NULL)
			cout << "\n Список пуст" << endl;
		else
		{
			ptr = head;
			while (ptr != NULL)
			{
				cout << ptr->data << endl;
				ptr = ptr->next; 
			}
		}
	}

	void DeleteFromEnd()
	{
		ptr = head;
		while (ptr->next != tail)
		{
			ptr = ptr->next;
		}
		ptr->next = NULL;
		tail = ptr;
	}

	void DeleteFromBegin()
	{
		ptr = head;
		head = head->next;
		ptr->next = NULL;
	}

	void DeleteFromPosition(int k)
	{
		Node<T> *temp = new Node<T>();
		int count = 1;
		ptr = head;
		temp = head;
		while (ptr->next != NULL && count != k-1)
		{
			count++;
			ptr = ptr->next;
		}
		temp = ptr->next;
		ptr->next = temp->next;
		temp->next = NULL;
	}
	void InsertIntoPosition(T x, int k)
	{
		Node<T> *temp = new Node<T>();
		Node<T> *ptr2 = new Node<T>();
		temp->data = x;
		ptr = head;
		int count = 1;
		while (ptr->next != NULL && count != k - 1)
		{
			count++;
			ptr = ptr->next;
		}
		ptr2 = ptr->next;
		ptr->next = temp;
		temp->next = ptr2;
	}
};

