#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


// Функция сложения
double addition(double a, double b) {
    return a + b;
}

// Функция вычитания
double subtraction(double a, double b) {
    return a - b;
}

// Функция умножения
double multiplication(double a, double b) {
    return a * b;
}

// Функция деления
double division(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;  // В случае деления на ноль возвращаем 0
    }
}

// Функция возведения в степень
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Функция нахождения квадратного корня
double squareRoot(double number) {
    if (number >= 0) {
        return sqrt(number);
    }
    else {
        cout << "Ошибка: нельзя извлечь квадратный корень из отрицательного числа." << endl;
        return 0;
    }
}

// Функция нахождения 1 процента от числа
double percent(double number) {
    return number * 0.01;
}

// Функция нахождения факториала числа
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int choice;
    double num1, num2;
    setlocale(LC_ALL, "Rus");


    do {
        // Вывод меню
        cout << "Выберите операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n";

        cout << "Ваш выбор: ";
        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            cout << "Введите два числа для сложения: ";
            cin >> num1 >> num2;
            cout << "Результат: " << addition(num1, num2) << endl;
            break;

        case 2:
            cout << "Введите два числа для вычитания: ";
            cin >> num1 >> num2;
            cout << "Результат: " << subtraction(num1, num2) << endl;
            break;

        case 3:
            cout << "Введите два числа для умножения: ";
            cin >> num1 >> num2;
            cout << "Результат: " << multiplication(num1, num2) << endl;
            break;

        case 4:
            cout << "Введите два числа для деления: ";
            cin >> num1 >> num2;
            cout << "Результат: " << division(num1, num2) << endl;
            break;

        case 5:
            cout << "Введите основание и показатель степени: ";
            cin >> num1 >> num2;
            cout << "Результат: " << power(num1, num2) << endl;
            break;

        case 6:
            cout << "Введите число для нахождения квадратного корня: ";
            cin >> num1;
            cout << "Результат: " << squareRoot(num1) << endl;
            break;

        case 7:
            cout << "Введите число для нахождения 1 процента: ";
            cin >> num1;
            cout << "Результат: " << percent(num1) << endl;
            break;

        case 8:
            cout << "Введите число для нахождения факториала: ";
            cin >> num1;
            cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
            break;

        case 9:
            cout << "Выход из программы." << endl;
            break;

        default:
            cout << "Некорректный ввод. Попробуйте еще раз." << endl;
        }

    } while (choice != 9);

    return 0;
}
