#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int number, answer;
	int i = 0;
	string red, green;
	red = "\x1b[91m";
	green = "\x1b[92m";

	cout << "[-] Генерация примеров [-] " << endl << endl;

	cout << "[] Введите число: "; cin >> number;
	do {
		i++;
		cout << "[] Решите пример: " << number << " * " << i << " = "; cin >> answer;
		if (answer == number * i)
		{
			cout << "[] Правильный ответ [] " << endl << endl;
		}
		else
		{
			cout << red << "[] Ответ не правильный. Завершение программы [] " << endl << endl;
		}
	} while ((i != 9) and (answer == number * i));
	if (i == 9) {
		cout << green << "[+] Примеры решены, поздравляем! ";
	}
	return 0;
}
