#include<iostream>
#include<windows.h>

using namespace std;

/*
Точка на плоскости задана своими координатами (X,Y). Определить, находится ли точка внутри
круга радиусом R с центром в начале координат
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x, y, r;
    cin >> x >> y >> r; // Ввод чисел x, y, r из консоли

    if ((r ^ 2) > (x ^ 2 + y ^ 2)) {
        cout << "Внутри круга"; // ввывод текста в консоль
    } else {
        cout << "Вне круга"; // ввывод текста в консоль
    }
    return 0;
}
