#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double r, a, b, z, c;
    cout << "а) Введите радиус торта r: ";
    cin >> r;
    cout << "Введите стороны коробки a и b: ";
    cin >> a >> b;

    if (2 * r <= a && 2 * r <= b)
        cout << "Торт уместится по ширине" << endl;
    else
        cout << "Торт не уместится по ширине" << endl;

    cout << "Введите высоту торта z: ";
    cin >> z;
    cout << "Введите высоту коробки c: ";
    cin >> c;

    if (2 * r <= a && 2 * r <= b && z <= c)
        cout << "Торт полностью уместится в коробку" << endl;
    else
        cout << "Торт не уместится в коробку" << endl;

    double X, Y, Z;
    cout << "b) Введите стороны кирпича X, Y, Z: ";
    cin >> X >> Y >> Z;
    cout << "Введите стороны отверстия a и b: ";
    cin >> a >> b;

    if ((X <= a && Y <= b) || (X <= b && Y <= a) ||
        (X <= a && Z <= b) || (X <= b && Z <= a) ||
        (Y <= a && Z <= b) || (Y <= b && Z <= a))
        cout << "Кирпич пройдет через отверстие";
    else
        cout << "Кирпич не пройдет через отверстие";

    return 0;
}
