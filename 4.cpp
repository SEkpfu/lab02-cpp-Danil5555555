#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int dM, dW;
    cout << "Введите дату: ";
    cout << "День месяца: ";
    cin >> dM;
    cout << "Номер дня в неделе: ";
    cin >> dW;

    if ((dM == 13 && (dW == 5 || dW == 2)) ||
        (dM == 17 && dW == 5))
    {
        cout << "Неудачный день";
    }

    return 0;
}
