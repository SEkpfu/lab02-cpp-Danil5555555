#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int number;
    cout << "Введите целое число: ";
    cin >> number;
    cout << "а)" << endl;

    if (number > 0)
        cout << "Число положительное" << endl;
    else if (number < 0)
        cout << "Число отрицательное" << endl;
    else
        cout << "Число равно нулю" << endl;

    cout << "б)" << endl;
    if (number % 2 == 0)
        cout << "Число четное";
    else
        cout << "Число нечетное";

    return 0;
}
