#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a, b, c;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;

    int sum = 0;
    bool has_greater = false;
    if (a > 10) { sum += a; has_greater = true; }
    if (b > 10) { sum += b; has_greater = true; }
    if (c > 10) { sum += c; has_greater = true; }

    cout << "a) Сумма чисел больше 10: ";
    if (has_greater) cout << sum;
    else cout << "-";
    cout << endl;

    int count = 0;
    if (a % 2 == 0) count++;
    if (b % 2 == 0) count++;
    if (c % 2 == 0) count++;
    cout << "b) Количество четных чисел: " << count << endl;

    int min_val = a, max_val = a, middle = a;

    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;

    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;

    if (a != min_val && a != max_val) middle = a;
    else if (b != min_val && b != max_val) middle = b;
    else middle = c;

    cout << "c) Среднее число: " << middle << endl;

    cout << "d) Номер наименьшего: ";
    if (a <= b && a <= c) cout << "1";
    else if (b <= a && b <= c) cout << "2";
    else cout << "3";

    return 0;
}
