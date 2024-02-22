#include<iostream>
#include <windows.h>

using namespace std;

/*
С клавиатуры вводится число. Это значение в битах. Написать программу перевода этого числа в
другие единицы измерения следующим образом: 1 - байты, 2 - килобайты, 3 - мегабайты
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n;
    cin >> n;

    switch (n) {
        case 1:
            cout << "байты";
            break;
        case 2:
            cout << "килобайты";
            break;
        case 3:
            cout << "мегабайты";
            break;
    }
    return 0;
}