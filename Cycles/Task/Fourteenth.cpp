#include <iostream>
#include <time.h>
using namespace std;
void fourteenth() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int UserNumber, attempts = 0;
	int RandomNumber = rand() % 501 + 1;
	cout << "���� \"������ �����\"\n";
	clock_t start, end;
	start = clock();
	do {
		cout << "������� ����� (�� 1 �� 500) = ";
		cin >> UserNumber;
		attempts++;
		if (UserNumber == 0) exit(0);
		else {
			if (UserNumber < 0 || UserNumber > 500) cout << "������! ������������ ����! ���������� ��� ���!\n";
			else {
				if (UserNumber > RandomNumber) cout << "���� ����� ������! ���������� ��� ���!\n";
				else if (UserNumber < RandomNumber) cout << "���� ����� ������! ���������� ��� ���!\n";
			}
		}
	} while (UserNumber != RandomNumber);
	end = clock();
	cout << "�� ������� ����� �� " << attempts << " �������\n��� ������������ " << (end - start) / CLK_TCK << " ������\n";
}