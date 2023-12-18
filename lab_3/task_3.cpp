#include<iostream>
#include <cmath>

using namespace std;

/*
Создайте проект, в котором выполняются арифметические выражения.
 */
int main() {

    int a = 7;
    int b = 9;

    int top = sqrt(4 * (a ^ 11)) * sqrt(9 * (b ^ 3));
    int bottom = sqrt((a ^ 7) * (b ^ 4));

    cout << top / bottom << endl;

    // TODO

    return 0;
}