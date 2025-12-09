#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y;
    cout << "Введите координаты (x y): ";
    cin >> x >> y;

    double ds = x*x + y*y;

    if (ds <= 25 && (x <= -2 || x >= 2 || y <= -2 || y >= 2))
        cout << "a) Принадлежит" << endl;
    else
        cout << "a) Не принадлежит" << endl;

    if ((y >= 0 && y <= 2*x + 2 && x <= 0) || (x >= 0 && x <= 5 && y >= 0 && y <= 1))
        cout << "b) Принадлежит" << endl;
    else
        cout << "b) Не принадлежит" << endl;

    if (ds >= 1 && ds <= 16)
        cout << "c) Принадлежит" << endl;
    else
        cout << "c) Не принадлежит" << endl;

    if (y <= -2*x + 2 && x >= 0 && x <= 1 && y >= 0)
        cout << "d) Принадлежит" << endl;
    else
        cout << "d) Не принадлежит" << endl;

    return 0;
}
