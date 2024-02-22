
#include <iostream>

using namespace std;

int main() {
    const int arrLength = 8;
    float arr [arrLength] = {
        0.13,
        1.26,
        -1.1,
        0,
        3.14,
        6.28,
        -0.5,
        1.28
    };

    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    float product = 1;
    for (int i = 0; i < arrLength; i++) {
        float element = arr[i];
        if (element == 0) {
            continue;
        }
        product *= element;
    }
    cout << "Proizvedinie nenulevyh elementov massiva: " << product << endl;


    float sum = 0;
    for (int i = 0; i < arrLength; i++) {
        sum += arr[i];
    }
    cout << "Summa vseh emlementov massiva: " << sum << endl;


    float sumToProductRatio = sum / product;
    cout << "Otnoshenije summy k proizvedinju nenulevyh elementov: " << sumToProductRatio;
}