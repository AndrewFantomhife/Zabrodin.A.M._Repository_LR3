#include <iostream>
using namespace std;

// Глобальные переменные для удобства
int P = 0, Q = 0;

// Функция для ввода Q
void inputQ() {

}

// Функция для ввода P
void inputP() {

}

// Функция для вычисления остатка от деления Q на P
void calculateRemainder() {

}

// Функция для вычисления целой части от деления Q на P
void calculateQuotient() {
 

}

// Основная функция с меню
int main() {
    int choice;

    do {
        // Меню
        cout << "Меню:\n";
        cout << "1. Ввод Q\n";
        cout << "2. Ввод P\n";
        cout << "3. Найти остаток от деления Q на P\n";
        cout << "4. Найти целую часть от деления Q на P\n";
        cout << "5. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputQ();
                break;
            case 2:
                inputP();
                break;
            case 3:
                calculateRemainder();
                break;
            case 4:
                calculateQuotient();
                break;
            case 5:
                cout << "Завершение программы. До свидания!\n";
                break;
            default:
                cout << "Ошибка: неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 5);

    return 0;
}

