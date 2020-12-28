#include "precipitation.h"


Precipitation::Precipitation():Forecast(), precipitation("")
{ }
Precipitation::Precipitation(Date date, string place, string precipitation)  : Forecast(date, place), precipitation(precipitation)
{ }

string Precipitation::getPrecipitation() {
	return precipitation;
}

void Precipitation::setdata(istream& in) {
	cout << "������ ����� (���/���/����/���/��������� ��� \"-\" ���� ������): "; in >> precipitation;
}
void Precipitation::print(ostream& to) const {
	to << "�����: " << precipitation << endl;
}