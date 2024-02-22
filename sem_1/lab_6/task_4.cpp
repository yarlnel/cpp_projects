#include<iostream>
#include <windows.h>

using namespace std;

/*
Вариант 3
4. Ввести число с клавиатуры. Прибавлять к нему 5, до тех пор пока оно не станет больше самого
себя в 10 раз
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n;
    cin >> n;

    int result = n;
    while (result < n * 10) {
        result += 5;
    }

    cout << result;
}
