#include <ctime>
#include <iostream>

using namespace std;

/*
Дан одномерный массив из 50 чисел. Заполнить его случайными значениями, с помощью генератора
случайных чисел. Определить, сколько в нем элементов, отличных от последнего элемента. Вывести
их количество.
 */
int main() {
    srand(time(0));

    const int arrLength = 50;
    int arr [arrLength];

    // Add random numbers
    for (int i = 0; i < arrLength; i++) {
        arr[i] = rand();
    }

    int lastElement = arr[arrLength - 1];
    int diffFromLastNumbersCount = 0;
    for (int i = 0; i < arrLength; i++) {
        int element = arr[i];
        if (element != lastElement) {
            diffFromLastNumbersCount++;
        }
    }

    cout << "Kolichestvo elementov otlichnyh ot poslednego: " << diffFromLastNumbersCount;
}
