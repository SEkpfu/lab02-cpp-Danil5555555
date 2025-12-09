#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double x;
    cout << "Введите число x: ";
    cin >> x;

    cout << "а) f(x) = ";
    if (x <= -2)
        cout << 0;
    else if (x <= 10)
        cout << x*x + 4*x + 5;
    else
    {
        double d = x*x + 4*x - 5;
        if (d == 0)
            cout << "Ошибка";
        else
            cout << 1.0 / d;
    }

    cout << endl;

    cout << "б) f(x) = ";
    if (x <= -2)
        cout << 0;
    else if (x <= 0)
        cout << x*x + 4*x + 5;
    else
    {
        double d = x*x + 4*x - 5;
        if (d == 0)
            cout << "Ошибка";
        else
            cout << 1.0 / d;
    }

    return 0;
}
