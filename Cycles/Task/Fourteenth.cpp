#include <iostream>
#include <time.h>
using namespace std;
void fourteenth() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int UserNumber, attempts = 0;
	int RandomNumber = rand() % 501 + 1;
	cout << "Игра \"Угадай число\"\n";
	clock_t start, end;
	start = clock();
	do {
		cout << "Введите число (от 1 до 500) = ";
		cin >> UserNumber;
		attempts++;
		if (UserNumber == 0) exit(0);
		else {
			if (UserNumber < 0 || UserNumber > 500) cout << "Ошибка! Некорректный ввод! Попробуйте ещё раз!\n";
			else {
				if (UserNumber > RandomNumber) cout << "Ваше число больше! Попробуйте ещё раз!\n";
				else if (UserNumber < RandomNumber) cout << "Ваше число меньше! Попробуйте ещё раз!\n";
			}
		}
	} while (UserNumber != RandomNumber);
	end = clock();
	cout << "Вы угадали число за " << attempts << " попыток\nВам понадобилось " << (end - start) / CLK_TCK << " секунд\n";
}