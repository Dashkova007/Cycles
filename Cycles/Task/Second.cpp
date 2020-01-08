#include<iostream>
using namespace std;
void second() {
	setlocale(LC_ALL, "RUS");
	int number, sum = 0;
	cout << "Введите числа (0-вывод результата) = ";
	cin >> number;
	while (number != 0) {
		sum += number;
		cin >> number;
	}
	cout << sum << endl;
}