#include <iostream>
#include <limits>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int category;
    int fromUnit, toUnit;
    double value, baseValue, result;
    cout << "КОНВЕРТЕР ВЕЛИЧИН" << endl;
    cout << "1. Длина" << endl;
    cout << "2. Масса" << endl;
    cout << "3. Время" << endl;
    cout << "4. Температура" << endl;
    cout << "Выберите категорию: ";
    if (!(cin >> category)) {
        cout << "Ошибка ввода!" << endl;
        return 1;
    }
    switch (category) {
    case 1: {
        cout << "Единицы длины:" << endl;
        cout << "1. Метры" << endl;
        cout << "2. Сантиметры" << endl;
        cout << "3. Километры" << endl;
        cout << "Из какой единицы переводить: ";
        if (!(cin >> fromUnit)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        cout << "В какую единицу переводить: ";
        if (!(cin >> toUnit)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        cout << "Введите значение: ";
        if (!(cin >> value)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        switch (fromUnit) {
        case 1:
            baseValue = value;
            break;
        case 2:
            baseValue = value / 100.0;
            break;
        case 3:
            baseValue = value * 1000.0;
            break;
        default:
            cout << "Неверная исходная единица!" << endl;
            return 1;
        }
        switch (toUnit) {
        case 1:
            result = baseValue;
            break;
        case 2:
            result = baseValue * 100.0;
            break;
        case 3:
            result = baseValue / 1000.0;
            break;
        default:
            cout << "Неверная целевая единица!" << endl;
            return 1;
        }
        break;
    }
    case 2: {
        cout << "Единицы массы:" << endl;
        cout << "1. Килограммы" << endl;
        cout << "2. Граммы" << endl;
        cout << "3. Тонны" << endl;

        cout << "Из какой единицы переводить: ";
        if (!(cin >> fromUnit)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        cout << "В какую единицу переводить: ";
        if (!(cin >> toUnit)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        cout << "Введите значение: ";
        if (!(cin >> value)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        switch (fromUnit) {
        case 1:
            baseValue = value;
            break;
        case 2:
            baseValue = value / 1000.0;
            break;
        case 3:
            baseValue = value * 1000.0;
            break;
        default:
            cout << "Неверная исходная единица!" << endl;
            return 1;
        }
        switch (toUnit) {
        case 1:
            result = baseValue;
            break;
        case 2:
            result = baseValue * 1000.0;
            break;
        case 3:
            result = baseValue / 1000.0;
            break;
        default:
            cout << "Неверная целевая единица!" << endl;
            return 1;
        }
        break;
    }
    case 3: {
        cout << "Единицы времени:" << endl;
        cout << "1. Секунды" << endl;
        cout << "2. Минуты" << endl;
        cout << "3. Часы" << endl;
        cout << "Из какой единицы переводить: ";
        if (!(cin >> fromUnit)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        cout << "В какую единицу переводить: ";
        if (!(cin >> toUnit)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        cout << "Введите значение: ";
        if (!(cin >> value)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        switch (fromUnit) {
        case 1:
            baseValue = value;
            break;
        case 2:
            baseValue = value * 60.0;
            break;
        case 3:
            baseValue = value * 3600.0;
            break;
        default:
            cout << "Неверная исходная единица!" << endl;
            return 1;
        }
        switch (toUnit) {
        case 1:
            result = baseValue;
            break;
        case 2:
            result = baseValue / 60.0;
            break;
        case 3:
            result = baseValue / 3600.0;
            break;
        default:
            cout << "Неверная целевая единица!" << endl;
            return 1;
        }
        break;
    }
    case 4: {
        cout << "Единицы температуры:" << endl;
        cout << "1. Цельсий" << endl;
        cout << "2. Фаренгейт" << endl;
        cout << "3. Кельвин" << endl;
        cout << "Из какой единицы переводить: ";
        if (!(cin >> fromUnit)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        cout << "В какую единицу переводить: ";
        if (!(cin >> toUnit)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        cout << "Введите значение: ";
        if (!(cin >> value)) {
            cout << "Ошибка ввода!" << endl;
            return 1;
        }
        switch (fromUnit) {
        case 1:
            baseValue = value;
            break;
        case 2:
            baseValue = (value - 32.0) * 5.0 / 9.0;
            break;
        case 3:
            baseValue = value - 273.15;
            break;
        default:
            cout << "Неверная исходная единица!" << endl;
            return 1;
        }
        switch (toUnit) {
        case 1:
            result = baseValue;
            break;
        case 2:
            result = baseValue * 9.0 / 5.0 + 32.0;
            break;
        case 3:
            result = baseValue + 273.15;
            break;
        default:
            cout << "Неверная целевая единица!" << endl;
            return 1;
        }
        break;
    }
    default:
        cout << "Ошибка: неизвестная категория!" << endl;
        return 1;
    }
    cout << "Результат перевода: " << result << endl;
    return 0;
}