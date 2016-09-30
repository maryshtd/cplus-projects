#include "stdafx.h"
#include "Matrix.h"


Matrix::Matrix()
{
	arr[0][0] = 0;
	arr[0][1] = 0;
	arr[1][0] = 0;
	arr[1][1] = 0;
}


Matrix::~Matrix()
{}

Matrix::Matrix(int a, int b, int c, int d)
{
	this->arr[0][0] = a;
	this->arr[0][1] = b;
	this->arr[1][0] = c;
	this->arr[1][1] = d;
}

Matrix::Matrix(const Matrix &m)
{
	this->arr[0][0] = m.arr[0][0];
	this->arr[0][1] = m.arr[0][1];
	this->arr[1][0] = m.arr[1][0];
	this->arr[1][1] = m.arr[1][1];
}

Matrix Matrix::operator+(const Matrix &m)const
{
	Matrix mt;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			mt.arr[i][j] = this->arr[i][j] + m.arr[i][j];
		}
	}
	return mt;
}

Matrix Matrix::operator-(const Matrix &m)const
{
	Matrix mt;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			mt.arr[i][j] = this->arr[i][j] - m.arr[i][j];
		}
	}
	return mt;
}

Matrix Matrix::operator*(const int &k)const
{
	Matrix mt;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			mt.arr[i][j] = this->arr[i][j]*k;
		}
	}
	return mt;
}

void Matrix::Display()
{
	cout << "\n> Matrix:\n" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(6) << arr[i][j];
		}
		cout << "\n\n";
	}
}