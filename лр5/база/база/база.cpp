
#include <iostream>
#include <iomanip>

// Функция f(x)
double f(double x) {
    return x * x*x - 4*x;
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

    // Проверка корректности
    if (a > b || h <= 0) {
        std::cout << "Ошибка: a должно быть <= b, h > 0"
            << std::endl;
        return 1;
    }

    // Шапка таблицы
    std::cout << "==================" << std::endl;
    std::cout << "   x    |   f(x)  " << std::endl;
    std::cout << "==================" << std::endl;

    // Табуляция функции
    std::cout << std::fixed << std::setprecision(4);

    for (double x = a; x <= b + 1e-9; x += h) {
        double y = f(x);

        std::cout << std::setw(7) << x
            << " | "
            << std::setw(7) << y
            << std::endl;
    }

    return 0;
}
