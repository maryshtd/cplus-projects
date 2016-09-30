#pragma once
#include "stdafx.h"

template <typename T> struct Node
{
	T data;
	double key;
	Node<T>* left;
	Node<T>* right;
};

template <typename T> class Binarytree
{
	private:
	Node<T> root;
	Node<T> *AddElement(T x, double k, Node<T>* ptr)
	{
		if (ptr == NULL)
		{
			ptr = new Node<T>();
			ptr->data = x;
			ptr->key = k;
			ptr->left = NULL;
			ptr->right = NULL;
		}
		else if (k < ptr->key)
		{
			ptr->left = AddElement(x, k, ptr->left);
		}
		else if (k > ptr->key)
		{
			ptr->right = AddElement(x, k, ptr->right);
		}
	}

	Node<T> *PrintElement(Node<T> *ptr)
	{
		if (ptr != NULL)
		{
			PrintElement(ptr->left);
			ptr->data.Display();
			PrintElement(ptr->right);
		}
	}

	void DelElement(Node<T>*ptr)
	{
		if (ptr != NULL)
		{
			DelElem(ptr->left);
			DelElem(ptr->right);
			delete ptr;
		}
	}

	public:
		Binarytree()
		{
			root = NULL;
		}
		~Binarytree()
		{
			Del();
		}
		void Add(T x, double k)
		{
			Node<T> *temp = root;
			temp = AddElement(x, k, temp);
		}
		void Del()
		{
			if (root != NULL)
				DelElement(root);
		}
		void Display()
		{
			if (root != NULL)
				PrintElement(root);
		}
};

