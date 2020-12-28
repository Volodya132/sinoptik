#include "weather.h"

Weather::Weather() : Forecast(), Water(), Precipitation()
{ }
Weather::Weather(Date date, string place, float temperature, int wavespeed, string precipitation) : Precipitation(date, place, precipitation),
																									Water(date, place, temperature, wavespeed),
																									Forecast(date, place)
{ }

void Weather::setdata(istream& in) {
	Forecast::setdata(in);
	Precipitation::setdata(in);
	Water::setdata(in);
}

void Weather::print(ostream& to)const {
	Forecast::print(to);
	Precipitation::print(to);
	Water::print(to);
}