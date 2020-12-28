#include "forecast.h"

Forecast::Forecast() : date(), place()
{ }



Forecast::Forecast(Date date, string place)  : date(date), place(place)
{ }
void Forecast::print(ostream& to) const {
	to << "Дата: " << date << '\n';
	to << "Місце: " << place << '\n';
}

void Forecast::setdata(istream& in) {
	cout << "Введіть дату(у форматі 21.12.2020): "; in >> date;
	cout << "Введіть місце: "; in>>place;
}

ostream& operator<<(std::ostream& to, const Forecast& p) {
	p.print(to);
	return to;
}


std::istream& operator>>(std::istream& in, Forecast& p) {
	p.setdata(in);
	return in;
}
