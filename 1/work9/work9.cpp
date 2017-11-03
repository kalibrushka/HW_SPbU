#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int n = 0;
    cout << "Введите число a " << endl;
    cin >> a;
    cout << "Введите число n " << endl;
    cin >> n;
    double result = 1;
    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            result = result * a;
        }
    }
    else
    {
        for (int i = 0; i < abs(n); i++)
        {
            result = result / a;
        }
    }
    cout << a << " в степени " << n << " = " << result;
}