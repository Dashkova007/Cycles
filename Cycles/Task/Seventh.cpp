#include <iostream>
#include <time.h>
using namespace std;
void seventh() {
	setlocale(LC_ALL, "RUS");
	clock_t start, end;
	start = clock();
	int a = 1000;
	for (int i = 3; i <= a; i++) {
		for (int j = 2; j <= a; j++) {
			if (i % j == 0) {
				if (i != j) {
					break;
				}
				cout << i << "\t";
			}
		}
	}
	end = clock();
	cout << endl << (end - start) / CLK_TCK << " секунд\n";
}