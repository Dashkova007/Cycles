#include <iostream>
using namespace std;
void eleventh() {
	setlocale(LC_ALL, "RUS");
	int height, width;
	char symbol;
	cout << "Введите ширину = ";
	cin >> width;
	cout << "Введите высоту = ";
	cin >> height;
	cout << "Введите символ = ";
	cin >> symbol;
	for (int i = 0; i < height; i++) {
		if (i == 0 || i == height - 1) {
			for (int j = 0; j < width; j++) cout << " " << symbol;
			cout << endl;
		}
		else {
			cout << symbol;
			for (int j = 0; j < width - 2; j++) cout << "  ";
			cout << symbol << endl;
		}
	}
}
