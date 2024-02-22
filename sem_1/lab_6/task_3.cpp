#include<iostream>
#include <windows.h>

using namespace std;

/*
Вариант 3
3. Каждый месяц клиент выплачивает ипотеку банку в размере 12% от первоначальной суммы.
Напишите программу, в которой пользователь вводит сумму ипотеки и количество месяцев. А
банк вычисляет конечную сумму ипотеки с учетом начисления процентов за каждый месяц.
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int mortageSum, mounthAmount;

    cout << "Введите сумму ипотеки: " << endl;
    cin >> mortageSum;

    cout << "Введите количество месяцев на которые вы хотите оформить ипотеку: " << endl;
    cin >> mounthAmount;

    double mortagePercent = 0.12;
    double fullMortageSum = mortageSum;

    for (int i = 0; i < mounthAmount; i++) {
        fullMortageSum += fullMortageSum * mortagePercent;
    }

    cout << "Выплачиваемая сумма: " << fullMortageSum << endl;
}
