#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    double a, b;
    char operation;
    cout << "КАЛЬКУЛЯТОР" << endl;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;
    cout << "Введите второе число: ";
    cin >> b;
    switch (operation) {
    case '+':
        cout << "Результат: " << a + b << endl;
        break;
    case '-':
        cout << "Результат: " << a - b << endl;
        break;
    case '*':
        cout << "Результат: " << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << "Результат: " << a / b << endl;
        }
        else {
            cout << "Ошибка: деление на ноль!" << endl;
        }
        break;
    default:
        cout << "Ошибка: неизвестная операция!" << endl;
        break;
    }
    return 0;
}