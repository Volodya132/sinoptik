#include "precipitation.h"


Precipitation::Precipitation():Forecast(), precipitation("")
{ }
Precipitation::Precipitation(Date date, string place, string precipitation)  : Forecast(date, place), precipitation(precipitation)
{ }

string Precipitation::getPrecipitation() {
	return precipitation;
}

void Precipitation::setdata(istream& in) {
	cout << "Введіть опади (дощ/сніг/град/грім/блискавки або \"-\" якщо відсутні): "; in >> precipitation;
}
void Precipitation::print(ostream& to) const {
	to << "Опади: " << precipitation << endl;
}