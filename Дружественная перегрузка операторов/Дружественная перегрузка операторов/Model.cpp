#include "stdafx.h"
#include "Model.h"


Model::Model()
{
	this->name = "";
	this->processorType = "";
	this->frequency = 0;
	this->RAM = 0;
	this->harddrive = 0;
	this->video = 0;
	this->price = 0;
	this->quantity = 0;
}


Model::~Model()
{
}

Model::Model(char* name,
	char* processorType, int frequency, int RAM, int harddrive, int video, double price, int quantity)
{
	this->name = name;
	this->processorType = processorType;
	this->frequency = frequency;
	this->RAM = RAM;
	this->harddrive = harddrive;
	this->video = video;
	this->price = price;
	this->quantity = quantity;
}
