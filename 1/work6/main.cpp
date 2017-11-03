#include <iostream>
#include "amount.h"
using namespace std;

int main()
{
    const int max = 1000;
    char string1[max];
    char string2[max];

    cout << "Enter string 1 : ";
    fgets(string1, max, stdin);

    cout << "Enter string 2 : ";
    fgets(string2, max, stdin);

    cout << "Number of occurrences: " << occurrences(string1, string2);

    return 0;
}