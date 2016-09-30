#pragma once
class Matrix
{
	int arr[2][2];
public:
	Matrix();
	~Matrix();
	Matrix(int a,int b, int c, int d);
	Matrix(const Matrix &m);
	Matrix operator+(const Matrix &m)const;
	Matrix operator-(const Matrix &m)const;
	Matrix operator*(const int &k)const;
	void Display();
};

