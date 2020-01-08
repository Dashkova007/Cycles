#include <iostream>
using namespace std;
void ninth() {
	setlocale(LC_ALL, "RUS");
	int  number, new_number = 0, intermediate_number = 1;
	cout << "Введите число = ";
	cin >> number;
	while (number != 0) {
		if (((number % 10) != 3) && ((number % 10) != 6)) {
			new_number += intermediate_number * (number % 10);
			intermediate_number *= 10;
		}
		number /= 10;
	}
	cout << "Новое число = " << new_number << endl;
}