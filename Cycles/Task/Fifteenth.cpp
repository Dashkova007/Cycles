#include<iostream>
#include <windows.h>
using namespace std;
void fifteenth() {
	char symbol;
	int style, speed, length = 17;
	do {
		cout << "�������� ����������� (��� ������ ������� 0):\n1. ��������������\n2. ������������\n=>";
		cin >> style;
		if (style == 0) { exit(0); }
		cout << endl;
		cout << "�������� ��������:\n";
		cout << "1. ������\n2. ����������\n3. ���������\n";
		cin >> speed;
		cout << "\n������� ������ = ";
		cin >> symbol;
		cout << endl;
		switch (style) {
		case 1:
			switch (speed) {
			case 1:
				for (int i = 0; i < length; i++) {
					Sleep(10); cout << symbol;
				}
				break;
			case 2:
				for (int i = 0; i < length; i++) {
					Sleep(50); cout << symbol;
				}
				break;
			case 3:
				for (int i = 0; i < length; i++) {
					Sleep(100); cout << symbol;
				}
				break;
			default:
				cout << "������"; break;
			}
			break;
		case 2:
			switch (speed) {
			case 1:
				for (int i = 0; i < length; i++) {
					Sleep(10); cout << (char)symbol << endl;
				}
				break;
			case 2:
				for (int i = 0; i < length; i++) {
					Sleep(50); cout << symbol << endl;
				}
				break;
			case 3:
				for (int i = 0; i < length; i++) {
					Sleep(100); cout << symbol << endl;
				}
				break;
			}
			break;
		}
		cout << endl << endl;
	} while (style != 0);
}