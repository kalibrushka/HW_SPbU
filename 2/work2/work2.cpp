#include <iostream>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 1)
    {
        return a * power(a, n - 1);
    }
    return  power(a, n / 2) * power(a, n / 2);
}

int main()
{
    int a = 0;
    int n = 0;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter n: ";
    cin >> n;

    cout << a << " ^ " << n << " = " << power(a,n);
}