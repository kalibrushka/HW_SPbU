#include <iostream>
#include "array.h"
#include "heapSort.h"
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;

    int *array = new int[n];
    createArray(array, n);

    cout << "First array: ";
    print(array, n);
    cout << endl;

    heapSort(array, n);

    cout << "Last array: ";
    print(array, n);

    delete []array;
}
