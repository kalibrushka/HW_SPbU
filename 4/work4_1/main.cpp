#include <iostream>
#include "spiral.h"
using namespace std;

void enterArray(int** array, int n)
{
    cout << "Enter array " << n << " x " << n << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
}

int main()
{
    int n = 0;
    cout << "Enter odd n: ";
    cin >> n;

    while (n % 2 == 0)
    {
        cout << "Enter odd n: ";
        cin >> n;
    }

    int **array = new int*[n];
    for(int i = 0; i < n; i++)
        array[i] = new int[n];

    enterArray(array, n);
    writeSpiralArray(array, n);


    for(int i = 0; i < n; i++)
        delete [] array[i];
    delete [] array;
}

