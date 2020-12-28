#pragma once
#include "forecast.h"
#include "string"

//наслідування віртуальне, щоб позбутися проблеми "алмазу смерті"
class Precipitation : virtual public Forecast {
public:

	//конструктори 
	Precipitation();
	Precipitation(Date date, string place, string precipitation);
	
	//дістаємо значення опадів
	string getPrecipitation();

	//віртуальні функції вводу і виводу
	void setdata(istream&);
	void print(ostream&) const;
private:
	string precipitation;
};