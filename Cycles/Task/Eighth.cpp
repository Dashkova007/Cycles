#include <iostream>
using namespace std;
void eighth() {
	const char f = 42;
	int size;
	cout << "Введите размер (нечетное число) = ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ((i >= j) && (i >= size - j - 1)) cout << f << " ";
			else cout << "  ";
		}
		cout << endl;
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ((i < j) && (i < size - j - 1)) cout << f << " ";
			else cout << "  ";
		}
		cout << endl;
	}
}