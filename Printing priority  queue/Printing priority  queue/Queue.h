#pragma once

template<typename T> class PriorityQueue
{
	T *arr;
	int maxLength;
	int length;
	int *p;

public:
	PriorityQueue()
	{
		length = 0;
		maxLength = 10;
		arr = new T[maxLength];
		p = new int[maxLength];
	}

	~PriorityQueue()
	{
		if (!arr)
		{
			delete[] arr;
			delete[] p;
			p = 0;
			arr = NULL;
		}
	}

	PriorityQueue(int capacity)
	{
		length = 0;
		this->maxLength = maxLength;
		arr = new T[this->maxLength];
	}

	bool IsEmpty()
	{
		return (length == 0);
	}

	bool IsFull()
	{
		return (length == maxLength);
	}

	void Add(T x, int pr)
	{
		int i = 0;
		if (IsFull())

			cerr << "\n>Очередь переполнена. Добавление невозможно" << endl;

		else
		{
			int k = -1;;
			for (i; i < length; i++)
			{
				if (p[i] < pr)
				{
					k = 1;
					break;
				}

			}

			if (k == -1)
			{
				arr[length] = x;
				p[length] = pr;
			}
			else
			{
				for (int j = length; j > i; j--)
				{
					arr[j] = arr[j - 1];
					p[j] = p[j - 1];

				}
				arr[i] = x;
				p[i] = pr;
			}
			length++;
		}
	}

	T Extract()
	{
		T temp;
		if (IsEmpty())
		{
			cerr << "\n>Очередь пуста. Извлекать нечего" << endl;

		}
		else
		{
			temp = arr[0];
			for (int i = 0; i < length - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			length--;

		}
		return temp;
	}

	void Clear()
	{
		length = 0;
	}

	T &operator[](int index)
	{
		return arr[index];
	}

	void Display()
	{
		if (IsEmpty())
		{
			cerr << "Очередь пуста!" << endl;

		}
		else
		{
			for (int i = 0; i < length; i++)
				cout << arr[i] << endl;
		}
	}
	int Size()
	{
		return this->length;
	}

	T Search(int k)
	{
		return arr[k];
	}
};

