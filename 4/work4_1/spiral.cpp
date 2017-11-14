#include <iostream>
#include "spiral.h"
using namespace std;

void writeUp(int** array, int& i, int& j, int step)
{
    for (int k = 0; k < step; k++)
        cout << array[--i][j] << " ";
}

void writeRight(int** array, int& i, int& j, int step)
{
    for (int k = 0; k < step; k++)
        cout << array[i][++j] << " ";
}

void writeDown(int** array, int& i, int& j, int step)
{
    for (int k = 0; k < step; k++)
        cout << array[++i][j] << " ";
}

void writeLeft(int** array, int& i, int& j, int step)
{
    for (int k = 0; k < step; k++)
        cout << array[i][--j] << " ";
}

void writeSpiralArray(int** array, int n)
{
    int i = n / 2;
    int j = n / 2;
    int step = 1;

    cout << "Spiral:" << endl << array[i][j] << " ";

    while (step < n)
    {
        writeUp(array, i, j, step);
        writeRight(array, i, j, step);
        writeDown(array, i, j, step + 1);
        writeLeft(array, i, j, step + 1);

        step += 2;
    }

    writeUp(array, i, j, step - 1);
}