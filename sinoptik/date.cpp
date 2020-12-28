#include "date.h"

Date::Date() : day(1), month(1), year(1)
{ }
Date::Date(int d, int m, int y) : day(d), month(m), year(y)
{ }

Date::Date(const Date& date) : day(date.day), month(date.month),  year(date.year)
{ }


ostream& operator<< (ostream& out, const Date& date) {
	out << date.day << '.'
		<< date.month << '.'
		<< date.year;
	return out;
}

istream& operator>> (istream& in, Date& date) {
	char ch;
	in >> date.day >> ch >> date.month >> ch >> date.year;
	return in;
}