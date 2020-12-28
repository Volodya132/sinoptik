#pragma once
#include <iostream>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:

	//������������
	Date();
	Date(int d, int m, int y);

	//����������� ���������
	Date(const Date& date);

	//���������������� ��������� ����� � ������
	friend ostream& operator<< (ostream& out, const Date& date);
	friend istream& operator>> (istream& in, Date& date);
};