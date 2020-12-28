#include "forecast.h"

Forecast::Forecast() : date(), place()
{ }



Forecast::Forecast(Date date, string place)  : date(date), place(place)
{ }
void Forecast::print(ostream& to) const {
	to << "����: " << date << '\n';
	to << "̳���: " << place << '\n';
}

void Forecast::setdata(istream& in) {
	cout << "������ ����(� ������ 21.12.2020): "; in >> date;
	cout << "������ ����: "; in>>place;
}

ostream& operator<<(std::ostream& to, const Forecast& p) {
	p.print(to);
	return to;
}


std::istream& operator>>(std::istream& in, Forecast& p) {
	p.setdata(in);
	return in;
}
