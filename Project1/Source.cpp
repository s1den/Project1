#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	float first_num;
	cout << "Здравствуйте, это калькулятор. Введите первое число: ";
	cin >> first_num;
	char operation;
	cout << "Напишите символ операции: ";
	cin >> operation;
	float second_num;
	cout << "Введите второе число: ";
	cin >> second_num;

	if (operation == '+') {
		cout << "Ответ: " << first_num + second_num;
	}
	if (operation == '-') {
		cout << "Ответ: " << first_num + second_num;
	}

	if (operation == ':' && (first_num != 0 || second_num != 0)) {
		cout << "Ответ: " << first_num / second_num;
	}
	if (operation == '*' && (first_num != 0 || second_num != 0)) {
		cout << "Ответ: " << first_num * second_num;
	}

	return 0;
}