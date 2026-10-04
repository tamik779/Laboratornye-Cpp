#include <iostream>
int main() {
	setlocale(LC_ALL, "ru");
	double a, V, S;
	std::cout << "Введите ребро куба в см:";
	std::cin >> a;
	V = a * a * a;
	S = 6 * a * a;
	std::cout << "Объём куба" << V << std::endl;
	std::cout << "Площадь поверхности:" << S << std::endl;
	return 0;
}