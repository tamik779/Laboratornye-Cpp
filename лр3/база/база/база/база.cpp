//Запросить число.Если оно чётное, вывести "Чётное",иначе "Нечётное"
#include <iostream>
using namespace std;
int main()
{
	int age;
	setlocale(LC_ALL, "ru");
	cout << "Введите число:";
	cin >> age;
	if (age % 2 == 0) {
		cout << "Число чётное"<<endl;
	}
	else {
		cout << "Число нечётное"<<endl;
	}
	return 0;
}