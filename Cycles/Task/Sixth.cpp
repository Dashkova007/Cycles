#include <iostream>
using namespace std;
void sixth() {
	setlocale(LC_ALL, "RUS");
	int height, width;
	char symbol;
	cout << "¬ведите ширину = ";
	cin >> width;
	cout << "¬ведите высоту = ";
	cin >> height;
	cout << "¬ведите символ = ";
	cin >> symbol;
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) cout << " " << symbol;
		cout << endl;
	}
	cout << endl;
}