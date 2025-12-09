#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b;
    char op;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> op;

    switch (op) {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        if (b != 0)
            cout << a << " / " << b << " = " << a / b;
        else
            cout << "Ошибка";
        break;
    }

    return 0;
}
