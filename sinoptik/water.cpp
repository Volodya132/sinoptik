#include "water.h"

Water::Water() : Forecast(), temperature(0), wavespeed(0)
{ }

Water::Water(Date date, string place, float temperature, int wavespeed) : Forecast(date, place), 
																			temperature(temperature), 
																			wavespeed(wavespeed)
{ }

void Water::setdata(istream& in) {
	cout << "������ �����������: "; in >> temperature;
	cout << "������ �������� ����: "; in >> wavespeed;
}

void Water::print(ostream& to) const {
	to << "�����������: " << temperature << endl;
	to << "�������� ����: " << wavespeed << endl;
}

float Water::getTemperature() {
	return temperature;
}


int Water::getWavespeed() {
	return wavespeed;
}