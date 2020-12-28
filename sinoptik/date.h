#pragma once
#include <iostream>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:

	//конструктори
	Date();
	Date(int d, int m, int y);

	//конструктор копіювання
	Date(const Date& date);

	//перезавантеження операторів вводу і виводу
	friend ostream& operator<< (ostream& out, const Date& date);
	friend istream& operator>> (istream& in, Date& date);
};