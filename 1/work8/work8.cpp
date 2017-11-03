#include <iostream>
using namespace std;

int factorialRecursion(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorialRecursion(n - 1);
}

int factorialIteration(int n)
{
    int result = 1;
    for (int i = 1; i < n + 1; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int n = 0;
    cout << "Введите n" << endl;
    cin >> n;
    int resultRecursion = 0;
    int resultIteration = 0;
    if (n >= 0)
    {
        resultRecursion = factorialRecursion(n);
        resultIteration = factorialIteration(n);
        cout <<"Факториал, найденный рекурсией = " << resultRecursion << endl;
        cout <<"Факториал, найденный итеративно = " << resultIteration;
    }
    else
    {
        cout << "Число не может быть отрицательным";
    }
}
