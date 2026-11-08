#include <iostream>
#include <iomanip>
double f(double x) {
    return x * x + 2*x+1;
}
int main() {
    double a, b, h;
    double sum = 0;
    double avarage;
    int count = 0;
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
    std::cout << "==================" << std::endl;
    std::cout << "   x    |   f(x)  " << std::endl;
    std::cout << "==================" << std::endl;
    std::cout << std::fixed << std::setprecision(4);
    for (double x = a; x <= b + 1e-9; x += h) {
        double y = f(x);
        std::cout << std::setw(7) << x
            << " | "
            << std::setw(7) << y
            << std::endl;
        sum = sum + y;
        count = count + 1;
    }
    avarage = sum / count;
    std::cout << "==================" << std::endl;
    std::cout << "Среднее значение: " << avarage << std::endl;
    return 0;
}
