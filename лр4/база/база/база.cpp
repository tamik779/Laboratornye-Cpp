#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double a, b;
	int number;
	cout << "1.Сложение(+)" << endl;
	cout << "2.Вычитание(-)" << endl;
	cout << "3.Умножение(*)" << endl;
	cout << "4.Деление(/)" << endl;
	cout << "0.Выход" << endl;
	cout << "Выберите операцию:";
	cin >> number;
	if (number == 0) {
		cout << "До свидания" << endl;
		return 0;
	}
	if (number >= 1 && number <= 4) {
		cout << "Введите два числа";
		cin >> a >> b;
	}
	switch (number) {
	case 1:
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	case 2:
		cout << a << "-" << b << "=" << a - b << endl;
			break;
	case 3:
		cout << a << "*" << b << "=" << a * b << endl;
		break;
	case 4:
		if (b == 0) {
			cout << "Ошибка:деление на ноль невозможно!" << endl;
		}
		else {
			cout << a << "/" << b << "=" << a / b << endl;
		}
		break;
	default:
		cout << "Ошибка:неверный пункт меню!" << endl;
		break;
	}
	return 0;
}