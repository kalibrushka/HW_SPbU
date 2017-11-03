#include <iostream>
#include <cstdlib>
#include <ctime>
#include "array.h"
using namespace std;

void arrayNew(int *array, int n)
{
    srand (time(NULL));
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
    }
}

void print(int array[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
