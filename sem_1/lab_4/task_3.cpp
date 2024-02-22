#include<iostream>
#include<windows.h>

using namespace std;

/*
 Определить, является ли прямоугольник со сторонами A и B квадратом
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a, b;
    cin >> a >> b; // Ввод чисел a. b из консоли

    if (a == b) {
        cout << "Это квадрат"; // ввывод текста в консоль
    } else {
        cout << "Это не квадрат"; // ввывод текста в консоль
    }
    return 0;
}
