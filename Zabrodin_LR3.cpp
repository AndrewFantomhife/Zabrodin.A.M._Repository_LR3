#include <iostream>
using namespace std;

// Глобальные переменные для удобства
int P = 0, Q = 0;

// Функция для ввода Q
void inputQ() {
    cout << "Введите значение Q (натуральное число): ";
    cin >> Q;
    if (Q <= 0) {
        cout << "Ошибка: Q должно быть натуральным числом.\n";
        Q = 0; // Сбрасываем значение
    } else {
        cout << "Q успешно введено: " << Q << "\n";
    }
}

// Функция для ввода P
void inputP() {
    cout << "Введите значение P (натуральное число, меньшее Q): ";
    cin >> P;
    if (P <= 0 || P >= Q) {
        cout << "Ошибка: P должно быть натуральным числом и меньше Q.\n";
        P = 0; // Сбрасываем значение
    } else {
        cout << "P успешно введено: " << P << "\n";
    }
}

// Функция для вычисления остатка от деления Q на P
void calculateRemainder() {
    if (P > 0 && Q > 0 && P < Q) {
        cout << "Остаток от деления Q на P: " << Q % P << "\n";
    } else {
        cout << "Ошибка: Сначала введите корректные значения P и Q.\n";
    }
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

