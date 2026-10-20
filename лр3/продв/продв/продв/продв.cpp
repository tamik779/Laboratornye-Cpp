//Игра "Угадай число": программа загадывает целое число от 1 до 10. Пользователь вводит свою догадку.
//Программа выводит "Угадал!", "Меньше" или "Больше".
//Реализовать проверку ввода(только числа, только 1 - 10)
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int a = rand() % 11;
    int b;
    cout << "Угадай число от 1 до 10: ";
    while (true) {
        if (!(cin >> b)) {
            cout << "Введи целое число: ";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        if (b < 1 || b > 10) {
            cout << "Введи число от 1 до 10: ";
        }
        else if (b == a) {
            cout << "Угадал!";
            break;
        }
        else if (b < a) {
            cout << "Больше: ";
        }
        else {
            cout << "Меньше: ";
        }
    }
    return 0;
}