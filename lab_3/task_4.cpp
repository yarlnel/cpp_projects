#include<iostream>
#include <windows.h>

using namespace std;

/*
Создайте проект по заданной блок-схеме.
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);
    // A = 0
    // B = 0
    // C = 5
    // D = 10

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    d = c;
    c = b;
    b = a;


    cout << a << " " << b << " " << c;

    return 0;
}
