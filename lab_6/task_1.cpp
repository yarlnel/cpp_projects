#include<iostream>
#include <windows.h>

using namespace std;

/*
Вариант 3
1. Составьте программу, которая вычисляет произведение чисел от 1 до N. Значение N вводится с
клавиатуры
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n;
    int result = 1;

    cin >> n;

    for (int i = 1; i <= n; i++) {
         result *= i;
    }

    cout << "Произведение чисел от 1 до " << n << " = " << result;
}