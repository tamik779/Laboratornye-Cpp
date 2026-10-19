//Игра "Угадай число": программа загадывает целое число от 1 до 10. Пользователь вводит свою догадку.
//Программа выводит "Угадал!", "Меньше" или "Больше".
//Реализовать проверку ввода(только числа, только 1 - 10)
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int a = rand() % 11;
    int b;

    cout << "Угадай число от 0 до 10: ";
    cin >> b;

    if (b < 0 || b > 10) {
        cout << "Ошибка! Введи число от 0 до 10.";
    }
    else if (a == b) {
        cout << "Угадал!";
    }
    else {
        cout << "Не угадал!";
    }
    return 0;
}
