#include <iostream>
#include "qsort.h"
#include "array.h"
using namespace std;


int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;

    int array[1000];
    arrayNew(array, n);

    cout << "First array: ";
    print(array, n);
    cout << endl;

    quickSort(array, 0, n - 1);

    cout << "Last array: ";
    print(array, 10);
}
