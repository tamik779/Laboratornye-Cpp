#include <iostream>
#include <iomanip>
#include <cmath>
#include <clocale>
double f(double x) {
    double sum = 1;
    double term = 1;
    for (int i = 1; i <= 20; i++) {
        term = term * x / i;
        sum = sum + term;
    }
    return sum;
}
int main() {
    double a, b, h;
    setlocale(LC_ALL, "ru");
    std::cout << "Введите начало интервала a: ";
    std::cin >> a;
    std::cout << "Введите конец интервала b: ";
    std::cin >> b;
    std::cout << "Введите шаг h: ";
    std::cin >> h;
    if (a > b || h <= 0) {
        std::cout << "Ошибка: a должно быть <= b, h > 0"
            << std::endl;
        return 1;
    }
    std::cout << "============================================"
        << std::endl;
    std::cout << "   x   | Ряд Тейлора | exp(x) | Погрешность"
        << std::endl;
    std::cout << "============================================"
        << std::endl;
    std::cout << std::fixed << std::setprecision(6);
    for (double x = a; x <= b + 1e-9; x += h) {
        double y = f(x);
        double exact = std::exp(x);
        double error = std::fabs(exact - y);
        std::cout << std::setw(6) << x
            << " | " << std::setw(11) << y
            << " | " << std::setw(7) << exact
            << " | " << error
            << std::endl;
    }
    return 0;
}