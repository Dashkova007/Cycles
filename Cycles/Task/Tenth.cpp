#include <iostream>
using namespace std;
void tenth() {
	setlocale(LC_ALL, "RUS");
	int size, value;
	cout << "¬ведите размер = ";
	cin >> size;
	cout << "¬ведите величину €чейки = ";
	cin >> value;
	for (int i = 0; i < size; i++) {
		for (int k = 0; k < value; k++) {
			for (int j = 0; j < size; j++) {
				for (int l = 0; l < value; l++) {
					if ((i + j) % 2 == 0) cout << '_';
					else cout << '*';
				}
			}
			cout << "\n";
		}
	}
	cout << "\n";
}