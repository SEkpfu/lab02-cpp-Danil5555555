#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, z;
    cout << "Введите три положительных числа: ";
    cin >> x >> y >> z;

    if (x + y > z && x + z > y && y + z > x)
    {
        cout << "Треугольник существует" << endl;

        bool is = (x == y || x == z || y == z);
        bool eq = (x == y && y == z);
        bool r = (x*x + y*y == z*z || x*x + z*z == y*y || y*y + z*z == x*x);

        if (eq)
            cout << "Треугольник равносторонний";
        else if (is)
            cout << "Треугольник равнобедренный";
        else if (r)
            cout << "Треугольник прямоугольный";
        else
            cout << "Треугольник обычный";
    }
    else
    {
        cout << "Треугольник не существует";
    }

    return 0;
}
