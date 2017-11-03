#include <iostream>
#include "array.h"
#include "qsort.h"
using namespace std;

void printRepetitionMax(int array[], int n)
{
    int i = n - 1;
    while (i >= 1)
    {
        if (array[i] == array[i - 1])
        {
            cout << "Maximum repeated element: " << array[i];
            return;
        }

        i--;
    }

    cout << "No maximum repeated element";
}

int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;

    int *array = new int[n];
    arrayNew(array, n);

    cout << "Array: ";
    print(array, n);
    cout << endl;

    quickSort(array, 0, n - 1);

    printRepetitionMax(array, n);

    delete []array;
}