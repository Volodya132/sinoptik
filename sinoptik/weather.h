#pragma once
#include "water.h"
#include "precipitation.h"

class Weather : public Water, public Precipitation {
public:
	Weather();
	Weather(Date date, string place, float temperature, int wavespeed, string precipitation);

	void setdata(istream&);
	void print(ostream&) const;
};