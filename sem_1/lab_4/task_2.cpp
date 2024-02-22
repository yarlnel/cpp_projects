#include<iostream>
#include<cmath>

using namespace std;

int main() {
    float t = 1.5;
    float a = 2.34;
    float b = 1.09;
    float e = 2.71;
    float x = pow(t, 2.0f) * pow(e, 2 * t);
    float y;

    if (x >= 0 && x <= 1) {
        y = log(sin(pow(x, 2)) - pow(cos(pow(x, 2)), 4));
    } else {
        y = sin(sqrt(pow(a, sin(x)) + pow(b, cos(pow(x, 2) + 3))));
    }

    cout << y; // вывод значения y в консоль

    return 0;
}
