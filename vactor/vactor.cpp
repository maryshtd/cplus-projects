// vactor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void display(std::vector<long long> x);

int main()
{
	setlocale(LC_ALL, "rus");
	std::vector<long long> v;
	std::cout << v.capacity() << " - " << v.max_size() << std::endl;

	int N = 10;
	v.reserve(N);
	for (int i = 0; i < N; i++)
		v.push_back(100 * (i + 1));
	std::cout << v.capacity() << " - " << v.size() << std::endl;
	v.shrink_to_fit();
	std::cout << v.capacity() << " - " << v.size() << std::endl;
	display(v);
	v.resize(5);
	display(v);

	//---------------------
	cout << "\n"<<v.at(1)<< endl;
	cout << "\n" << v.front() << endl;
	cout << "\n" << v.back() << endl;

	//---------------------
	vector<long long> ::iterator r; //указатель
	/*r = v.begin();
	cout << "\n" <<*r << endl;
	r += 2;
	cout << "\n" << *r << endl;*/

	for (r = v.begin(); r != v.end();r++)
		cout << "\n" << *r << endl;
	
	display(v);
	cout << "\n";
	v.insert(v.begin() + 3, 777);
	display(v);
	cout << "\n";
	v.erase(v.begin() + 2);
	display(v);
	cout << "\n";
	v.erase(v.begin() + 1, v.end()-1);
	display(v);
	cout << "\n";

	v.pop_back(); //удаляет с конца 1 элемент
	display(v);
	//----------------------
	//v.clear();  //очистка
	//std::cout << v.capacity() << " - " << v.size() << std::endl;

	std::cout << "\n\n";
	return 0;
}

void display(std::vector<long long> x)
{
	for (int i = 0; i < x.size(); i++)
		std::cout << "  " << x[i];
}


