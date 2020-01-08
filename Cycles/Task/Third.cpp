#include <iostream>
using namespace std;
void third() {
	setlocale(LC_ALL, "RUS");
	int a, b;
	cout << "Введите числа = ";
	cin >> a >> b;
	while ((a != 0) && (b != 0)) {
		if (a > b) a %= b;
		else b %= a;
	}
	cout << a + b << endl;
}