#include<iostream>
#include <time.h>
using namespace std;
void twelfth() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int a, b, answer, NumberMistakes = 0, CorrectAnswers;
	for (int i = 0; i < 10; i++) {
		a = rand() % 9 + 1;
		b = rand() % 9 + 1;
		cout << a << "x" << b << "=";
		cin >> answer;
		if (answer != (a * b)) {
			cout << "������! ����� = " << a * b << endl;
			NumberMistakes++;
		}
		else cout << "�����!\n";
	}
	CorrectAnswers = 10 - NumberMistakes;
	cout << "���������� ������� = " << CorrectAnswers << endl;
	switch (CorrectAnswers) {
	case 10: cout << "�������"; break;
	case 9: case 8: cout << "������"; break;
	case 7: case 6: cout << "�����������������"; break;
	default: cout << "�������������������"; break;
	}
	cout << endl;
}