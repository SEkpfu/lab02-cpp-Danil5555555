#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int bd, bm, by;
    int cd, cm, cy;

    cout << "Введите дату рождения (день месяц год): ";
    cin >> bd >> bm >> by;

    cout << "Введите текущую дату (день месяц год): ";
    cin >> cd >> cm >> cy;

    int age = cy - by;

    if (cm < bm || (cm == bm && cd < bd))
    {
        age--;
    }

    cout << "Вам " << age << " ";

    int ld = age % 10;
    int ltd = age % 100;

    if (ltd >= 11 && ltd <= 19)
        cout << "лет";
    else if (ld == 1)
        cout << "год";
    else if (ld >= 2 && ld <= 4)
        cout << "года";
    else
        cout << "лет";

    return 0;
}
