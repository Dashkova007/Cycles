#include <iostream>
using namespace std;
void thirteenth() {
	setlocale(LC_ALL, "RUS");
	int number, sum = 0, quantity = 0, c, number_zeros = 0, i;
	float average;
	cout << "Введите число = ";
	cin >> number;
	while (number > 0) {
		sum += number % 10;
		if (number % 10 == 0) number_zeros++;
		quantity += 1;
		number /= 10;
	}
	average = (float)sum / quantity;
	do {
		cout << "1. Определить количество цифр \n";
		cout << "2. Посчитать их сумму\n";
		cout << "3. Посчитать среднее арифметическое\n";
		cout << "4. Определить количество нулей \n";
		cout << "Выберите действие = ";
		cin >> c;
		switch (c) {
		case 0: exit(0); break;
		case 1: cout << "Количество цифр = " << quantity << "\n\n"; break;
		case 2: cout << "Сумма цифр = " << sum << "\n\n"; break;
		case 3: cout << "Среднее арифметическое = " << average << "\n\n"; break;
		case 4: cout << "Количество нулей = " << number_zeros << "\n\n"; break;
		default: cout << "Ошибка\n\n"; break;
		}
	} while (c != 0);
}