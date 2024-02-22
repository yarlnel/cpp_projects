#include<iostream>
#include <windows.h>

using namespace std;

/*
Вариант 3
2. Составьте программу, которая выводит на экран таблицу перевода n, n+1, n+2, … m дней в
количество недель. Числа n и m вводятся с клавиатуры
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n, m;
    cin >> n >> m;

    cout << "Таблица перевода дней в кол-во недль: " << endl;

    for (int i = n; i <= m; i++) {
        int result = i / 7;
        if (i % 7 > 0) {
            result += 1;
        }
        cout << i << " -> " << result << endl;
    }
}
