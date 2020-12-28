#include "water.h"

Water::Water() : Forecast(), temperature(0), wavespeed(0)
{ }

Water::Water(Date date, string place, float temperature, int wavespeed) : Forecast(date, place), 
																			temperature(temperature), 
																			wavespeed(wavespeed)
{ }

void Water::setdata(istream& in) {
	cout << "Введіть температуру: "; in >> temperature;
	cout << "Введіть швидкість хвилі: "; in >> wavespeed;
}

void Water::print(ostream& to) const {
	to << "Температура: " << temperature << endl;
	to << "Швидкість хвилі: " << wavespeed << endl;
}

float Water::getTemperature() {
	return temperature;
}


int Water::getWavespeed() {
	return wavespeed;
}