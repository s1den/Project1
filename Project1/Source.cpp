#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	float first_num;
	cout << "������������, ��� �����������. ������� ������ �����: ";
	cin >> first_num;
	char operation;
	cout << "�������� ������ ��������: ";
	cin >> operation;
	float second_num;
	cout << "������� ������ �����: ";
	cin >> second_num;

	if (operation == '+') {
		cout << "�����: " << first_num + second_num;
	}
	if (operation == '-') {
		cout << "�����: " << first_num + second_num;
	}

	if (operation == ':' && (first_num != 0 || second_num != 0)) {
		cout << "�����: " << first_num / second_num;
	}
	if (operation == '*' && (first_num != 0 || second_num != 0)) {
		cout << "�����: " << first_num * second_num;
	}

	return 0;
}