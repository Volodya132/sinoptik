#pragma once
#include "date.h"
#include "string"

class Forecast {
public:
	//конструктори
	Forecast();
	Forecast(Date date, string place);

	//віртуальні функції, які допоможуть вводити і виводити дані
	virtual void setdata(istream&) = 0;
	virtual void print(ostream&) const = 0;

	//перезавантаження операторів вводу і виводу
	friend ostream& operator<<(ostream&, const Forecast&);
	friend istream& operator>>(istream&, Forecast&);
private:
	Date date;
	string place;
};