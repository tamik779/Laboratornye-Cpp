//Запросить три стороны треугольника.Проверить,существует ли такой треугольник(каждая сторона меньше
//суммы двух других).Вывести "Существует" или "Не существует"
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    float a, b, c;
    setlocale(LC_ALL, "Russian");

    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b)
        cout << "Существует" << endl;
    else
        cout << "Не существует" << endl;

    return 0;
}