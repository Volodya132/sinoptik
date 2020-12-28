#pragma once
#include "forecast.h"

//наслідування віртуальне, щоб позбутися проблеми "алмазу смерті"
class Water : virtual public Forecast {
public:

	Water();
	Water(Date date, string place, float temperature, int wavespeed);

	float getTemperature();
	int getWavespeed();

	void setdata(istream&);
	void print(ostream&) const;

private:
	float temperature;
	int wavespeed;
};