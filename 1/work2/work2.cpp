#include <iostream>
using namespace std;

int incomplete(int a, int b)
{
    int k = 0;
    if (a > 0)
    {
        while (a - b >= 0)
        {
            a = a - b;
            k++;
        }
    }
    else
    {
        while (a + b < abs(b))
        {
            a = a + b;
            k++;
        }
    }
    return k;
}

int main()
{
    cout << "Введите a" << endl;
    int a;
    cin >> a;
    cout << "Введите b" << endl;
    int b;
    cin >> b;
    if (b != 0)
    {
        if (a < 0)
        {
            if (b > 0)
            {
                cout << "Неполное частное от деления "<< a << " на " << b << " = " << -incomplete(a,b);
            }
            else
            {
                cout << "Неполное частное от деления "<< a << " на " << b << " = " << incomplete(a,-b);
            }
        }
        else
        {
            if (b > 0)
            {
                cout << "Неполное частное от деления "<< a << " на " << b << " = " << incomplete(a,b);
            }
            else
            {
                cout << "Неполное частное от деления "<< a << " на " << b << " = " << -incomplete(a,-b);
            }
        }
    }
    else
    {
        cout << "b не должно равняться нулю :( ";
    }
}
