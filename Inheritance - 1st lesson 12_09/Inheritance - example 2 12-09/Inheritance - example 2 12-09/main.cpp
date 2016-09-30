// Inheritance - example 2 12-09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Frog.h"
#include "Cat.h"
#include "Dog.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Animal **zveri = new Animal*[3]{
		new Frog("frog", "Crazy"),
			new Dog("dog", "Bobik"),
			new Cat("cat", "Fluffy")
	};

	for (int i = 0; i < 3; i++)
	{
		zveri[i]->Display();
		zveri[i]->Sound();
	}

	for (int i = 0; i < 3; i++)
		delete zveri[i];
	delete[] zveri;
	return 0;
}

