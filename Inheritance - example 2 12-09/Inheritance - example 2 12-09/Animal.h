#pragma once
class Animal
{
protected:
	std::string type;
	std::string name;
public:
	Animal();
	~Animal();
	Animal(std::string type, std::string name);
	virtual void Display();
	virtual void Sound();
};

