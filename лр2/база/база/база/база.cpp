#include <iostream>
int main() {
	setlocale(LC_ALL, "ru");
	double a;
	double V;
	std::cout << "Введите ребро куба в см:";
	std::cin >> a;
	V = a * a * a;
	std::cout << "Объем куба:" << V << std::endl;
	return 0;
}