#include <iostream>
using namespace std;
void first() {
	setlocale(LC_ALL, "RUS");
	int DayWeek = 1, DaysMonth;
	cout << "¬ведите номер дн€ недели, с которого начинаетьс€ мес€ц = ";
	cin >> DayWeek;
	cout << "—колько дней в мес€це = ";
	cin >> DaysMonth;
	cout << "\n пн\tвт\tср\tчт\tпт\tсб\tвс\n\n";
	for (int i = 0; i < DaysMonth; i++) {
		switch (DayWeek) {
		case 1:
			if (i < 1) cout << " ";
			if (i > 0 && i % 7 == 0) cout << endl << endl;
			break;
		case 2:
			if (i < 1) cout << "\t";
			if (i % 7 == 6) cout << endl << endl;
			break;
		case 3:
			if (i < 1) cout << "\t\t";
			if (i % 7 == 5) cout << endl << endl;
			break;
		case 4:
			if (i < 1) cout << "\t\t\t";
			if (i % 7 == 4) cout << endl << endl;
			break;
		case 5:
			if (i < 1) cout << "\t\t\t\t";
			if (i % 7 == 3) cout << endl << endl;
			break;
		case 6:
			if (i < 1) cout << "\t\t\t\t\t";
			if (i % 7 == 2) cout << endl << endl;
			break;
		case 7:
			if (i < 1) cout << "\t\t\t\t\t\t";
			if (i % 7 == 1) cout << endl << endl;
			break;
		default: break;
		}
		cout << i + 1 << "\t";
	}
	cout << endl;
}