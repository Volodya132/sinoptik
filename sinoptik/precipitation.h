#pragma once
#include "forecast.h"
#include "string"

//����������� ���������, ��� ��������� �������� "������ �����"
class Precipitation : virtual public Forecast {
public:

	//������������ 
	Precipitation();
	Precipitation(Date date, string place, string precipitation);
	
	//������ �������� �����
	string getPrecipitation();

	//�������� ������� ����� � ������
	void setdata(istream&);
	void print(ostream&) const;
private:
	string precipitation;
};