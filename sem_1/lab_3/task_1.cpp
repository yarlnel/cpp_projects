#include<iostream>
#include <windows.h>

using namespace std;

/*
Вывести на экран число в десятичной и шестнадцатеричной системе исчисления.
Для ввода/вывода используйте сопроводительный текст
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a;
    cout << " Введите число"<< endl;
    cin >> a;

    cout << a << " in dec = "<< hex << a << " in hex ";
    return 0;
}