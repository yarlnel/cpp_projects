#include<iostream>
#include <windows.h>

using namespace std;

/*
Написать программу, которая позволяет ввести номер года и выводит его название по японскому
календарю. В японском календаре двенадцатилетний цикл. Годы внутри цикла носят названия животных:
крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, петуха, собаки и свиньи. Справка:
1996 г. — год крысы и т.д.
 */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int year;
    cin >> year;

    string whoYear;
    switch ((year - 1996) % 12) {
        case 0:
            whoYear = "крысы";
            break;
        case 1:
            whoYear = "коровы";
            break;
        case 2:
            whoYear = "тигра";
            break;
        case 3:
            whoYear = "зайца";
            break;
        case 4:
            whoYear = "дракона";
            break;
        case 5:
            whoYear = "змеи";
            break;
        case 6:
            whoYear = "лошади";
            break;
        case 7:
            whoYear = "овцы";
            break;
        case 8:
            whoYear = "обезьяны";
            break;
        case 9:
            whoYear = "петуха";
            break;
        case 10:
            whoYear = "собаки";
            break;
        case 11:
            whoYear = "свиньи";
            break;
    }

    cout << "Это год " << whoYear;
    return 0;
}