#pragma once
#include "weather.h"
#include "windows.h"
#include <iostream>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Forecast* forecast[100];
	int n = 0;
	char choice;
	do {
		cout << "1. ������ ���. " << endl;
		cout << "2. ������� ���. " << endl;
		cout << "3. ������� ����������� ����. " << endl;
		cout << "4. ʳ������ ��� � �������� �������� ���� �� � �������� ������ �� ������. " << endl;
		cout << "5. ʳ������ ��� � ������������� �������. " << endl;
		cout << "0. �����" << endl;
		cin >> choice;
		switch (choice)
		{
		case '1': 
		{
			forecast[n] = new Weather; //������� �� ������ ���������� �����
			cin >> *forecast[n++];
			break;
		}
		case '2':
			for (int i = 0; i < n; i++) {
				cout << *forecast[i] << endl;
			}
			break;
		case '3':
		{
			double ave = 0;
			for (int i = 0; i < n; i++) {
				auto water = dynamic_cast<Water*>(forecast[i]); //�������, ��� �������� ������ �� ������ ��������� �����
				if (water != nullptr) { //���������� �� �������� �� �����
					ave += water->getTemperature();
				}
			}
			cout << "������� ����������� ����: " << ave / n  << endl;
			break;
		}
		case '4':
		{
			int max;
			int ave = 0;
			for (int i = 0; i < n; i++) {
				auto water = dynamic_cast<Water*>(forecast[i]);
				if (water != nullptr) {
					ave += water->getWavespeed();
					if (i == 0)
						max = water->getWavespeed();
					else
						if (max < water->getWavespeed())
							max = water->getWavespeed();
				}
			}
			int count_max = 0;
			int count_ave = 0;
			for (int i = 0; i < n; i++) {
				auto water = dynamic_cast<Water*>(forecast[i]);
				if ((water != nullptr) && (max == water->getWavespeed())) {
					count_max++;
				}
				if ((water != nullptr) && (ave < water->getWavespeed())) {
					count_ave++;
				}
			}
			cout << "ʳ������ ��� � �������� �������� ����: " << count_max << endl;
			cout << "ʳ������ ��� � �������� ���� ������ �� ������ ��������: " << count_ave << endl;
			break;
		}
		case '5':
		{
			string pogoda;
			int count = 0;
			cout << "������ ��� �����: "; cin >> pogoda;
			for (int i = 0; i < n; i++) {
				auto p = dynamic_cast<Precipitation*>(forecast[i]);
				if ((p != nullptr) && (p->getPrecipitation() == pogoda)) {
					count++;
				}
			}
			cout << "ʳ������ ��� � ��������� �������: " << count << endl;
			break;
		}
		default:
			break;
		}
	} while (choice != '0');
	
	delete[] forecast;

	return 0;
}
