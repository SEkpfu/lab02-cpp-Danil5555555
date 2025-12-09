#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y;
    cout << "Введите координаты попадания (x y): ";
    cin >> x >> y;

    double ds = x*x + y*y;

    if (ds <= 4)
        cout << "10 очков";
    else if (ds <= 16)
        cout << "5 очков";
    else
        cout << "0 очков";

    return 0;
}
