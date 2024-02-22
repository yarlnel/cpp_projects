#include <iostream>
#include <cmath>
#include <windows.h>
#include <iomanip.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double a = 7.0;
    double b = 9.0;

    double result = sqrt(4 * pow(a, 11)) * sqrt(9 * pow(b, 4)) / sqrt(pow(a, 7) * pow(b, 4));

    cout << "Результат: " << setprecision(0) << result << endl;

    return 0;
}
