#pragma once
#include "date.h"
#include "string"

class Forecast {
public:
	//������������
	Forecast();
	Forecast(Date date, string place);

	//�������� �������, �� ���������� ������� � �������� ���
	virtual void setdata(istream&) = 0;
	virtual void print(ostream&) const = 0;

	//���������������� ��������� ����� � ������
	friend ostream& operator<<(ostream&, const Forecast&);
	friend istream& operator>>(istream&, Forecast&);
private:
	Date date;
	string place;
};