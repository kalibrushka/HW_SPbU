#include <iostream>
using namespace std;

long fibonacciIterative(int n)
{
    int previous = 1;
    int next = 1;
    for (int i = 2; i <= n; ++i)
    {
        int result = previous + next;
        previous = next;
        next = result;
    }
    return next;
}


long fibonacciRecurs(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fibonacciRecurs(n - 2) + fibonacciRecurs(n - 1);
}


int main()
{
    int n = 0;
    cout << " Enter n: ";
    cin >> n;

    cout << "Fibonacci recursiv : " << fibonacciRecurs(n) << endl;
    cout << "Fibonacci  iterative: " << fibonacciIterative(n);
}