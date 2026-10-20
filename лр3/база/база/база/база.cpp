//Запросить число.Если оно чётное, вывести "Чётное",иначе "Нечётное"
#include <iostream>
using namespace std;
int main()
{
	int age;
	setlocale(LC_ALL, "ru");
	cout << "Введите целое число:";
	cin >> age;
	if (cin.fail()) {
		cout << "Ошибка: нужно ввести целое число." << endl;
		return 1;
	}
	if (age % 2 == 0) {
		cout << "Число чётное"<<endl;
	}
	else {
		cout << "Число нечётное"<<endl;
	}
	return 0;
}