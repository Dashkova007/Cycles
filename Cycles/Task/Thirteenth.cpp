#include <iostream>
using namespace std;
void thirteenth() {
	setlocale(LC_ALL, "RUS");
	int number, sum = 0, quantity = 0, c, number_zeros = 0, i;
	float average;
	cout << "������� ����� = ";
	cin >> number;
	while (number > 0) {
		sum += number % 10;
		if (number % 10 == 0) number_zeros++;
		quantity += 1;
		number /= 10;
	}
	average = (float)sum / quantity;
	do {
		cout << "1. ���������� ���������� ���� \n";
		cout << "2. ��������� �� �����\n";
		cout << "3. ��������� ������� ��������������\n";
		cout << "4. ���������� ���������� ����� \n";
		cout << "�������� �������� = ";
		cin >> c;
		switch (c) {
		case 0: exit(0); break;
		case 1: cout << "���������� ���� = " << quantity << "\n\n"; break;
		case 2: cout << "����� ���� = " << sum << "\n\n"; break;
		case 3: cout << "������� �������������� = " << average << "\n\n"; break;
		case 4: cout << "���������� ����� = " << number_zeros << "\n\n"; break;
		default: cout << "������\n\n"; break;
		}
	} while (c != 0);
}