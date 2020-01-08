#include <iostream>
using namespace std;
void fifth() {
	setlocale(LC_ALL, "RUS");
	char symbol;
	int i = 0;
	cout << "¬ведите букву = ";
	cin >> symbol;
	if ((symbol >= 65) && (symbol <= 90)) cout << "Error";
	else do {
		if (symbol >= 123) symbol = 97;
		cout << symbol++ << " ";
		++i;
	} while (i <= 3);
	cout << "\n";
}