#include <iostream>
using namespace std;
void fourth() {
	setlocale(LC_ALL, "RUS");
	int number, sum = 0, quantity = 0;
	cout << "Введите число = ";
	cin >> number;
	while (number > 0) {
		sum += number % 10;
		number /= 10.0;
		quantity += 1;
	}
	cout << "Сумма цифр = " << sum << " и в числе " << quantity << " цифр\n";
}