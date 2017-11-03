#include <iostream>
#include "PrimeNumber.h"
using namespace std;

int main()
{
    int n = 0;
    cout << "Print n: ";
    cin >> n;

    cout << "Prime number: ";
    printPrimeNumber(n);

    return 0;
}