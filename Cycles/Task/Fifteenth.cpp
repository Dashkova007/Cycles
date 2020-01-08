#include<iostream>
#include <windows.h>
using namespace std;
void fifteenth() {
	char symbol;
	int style, speed, length = 17;
	do {
		cout << "Выберите направление (для выхода введите 0):\n1. Горизонтальное\n2. Вертикальное\n=>";
		cin >> style;
		if (style == 0) { exit(0); }
		cout << endl;
		cout << "Выберите скорость:\n";
		cout << "1. Быстро\n2. Нормальная\n3. Медленная\n";
		cin >> speed;
		cout << "\nВведите символ = ";
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
				cout << "Ошибка"; break;
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