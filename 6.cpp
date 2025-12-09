#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int x;
    cout << "введите свою оценку: ";
    cin >> x;

    cout << "1) ";
    switch (x) {
    case 5: cout << "отлично"; break;
    case 4: cout << "хорошо"; break;
    case 3: cout << "удовлетворительно"; break;
    case 2:
    case 1: cout << "плохо"; break;
    default: cout << "Ошибка";
    }

    cout << endl;

    cout << "2) ";
    if (x == 5) cout << "отлично";
    else if (x == 4) cout << "хорошо";
    else if (x == 3) cout << "удовлетворительно";
    else if (x == 2 || x == 1) cout << "плохо";
    else cout << "неверные данные";

    return 0;
}
