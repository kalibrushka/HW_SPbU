#include <iostream>
#include "PrimeNumber.h"
#include <cmath>
using namespace std;

void printPrimeNumber(int n)
{
    bool array[2000];
    for (int k = 0; k < n; k++)
    {
        array[k] = true;
    }
    int i = 2;
    int j = 0;
    double rootn = sqrt(n + 1);
    while (i <= rootn)
    {
        j = i * i;
        while (j <= n)
        {
            array[j] = false;
            j += i;
        }
        i++;
    }
    for (int k = 2; k <= n; k++)
    {
        if (array[k])
        {
            cout << k << " ";
        }
    }
}
