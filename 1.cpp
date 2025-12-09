#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Часть b (два прямоугольника):" << endl;
    double a1, b1, a2, b2;
    cout << "Введите стороны 1-го прямоугольника \n";
    cout << "a1="; cin >> a1;
    cout << "b1="; cin >> b1;
    cout << "Введите стороны 2-го прямоугольника \n";
    cout << "a2="; cin >> a2;
    cout << "b2="; cin >> b2;

    double s1, s2;
    s1 = a1 * b1;
    s2 = a2 * b2;

    if (s1 > s2)
        cout << "max площадь у первого, S=" << s1;
    else if (s2 > s1)
        cout << "max площадь у второго, S=" << s2;
    else
        cout << "Площади прямоугольников равны, S=" << s1;

    cout << endl << endl;

    cout << "Часть c (три прямоугольника):" << endl;
    double a3, b3, a4, b4, a5, b5;
    cout << "Введите стороны 1-го прямоугольника: ";
    cin >> a3 >> b3;
    cout << "Введите стороны 2-го прямоугольника: ";
    cin >> a4 >> b4;
    cout << "Введите стороны 3-го прямоугольника: ";
    cin >> a5 >> b5;

    double s3 = a3 * b3;
    double s4 = a4 * b4;
    double s5 = a5 * b5;

    cout << "1): ";
    if (s3 > s4 && s3 > s5)
        cout << "max площадь = " << s3;
    else if (s4 > s3 && s4 > s5)
        cout << "max площадь = " << s4;
    else
        cout << "max площадь = " << s5;

    cout << endl << "2): ";
    double max_ternary = (s3 > s4) ? (s3 > s5 ? s3 : s5) : (s4 > s5 ? s4 : s5);
    cout << "max площадь = " << max_ternary;

    cout << endl << "3): ";
    double max_func = max(s3, max(s4, s5));
    cout << "max площадь = " << max_func;

    return 0;
}
