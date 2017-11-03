#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    return a + b;
}

void print(int array[][2], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i][0] << "/" << array[i][1] << "    ";
    }
}

void insertionSort(int array[][2], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i;

        while (j > 0 && ((array[j - 1][0] * array[j][1]) > (array[j][0] * array[j - 1][1])))
        {
            swap(array[j][0], array[j - 1][0]);
            swap(array[j][1], array[j - 1][1]);
            j--;
        }
    }
}

int main()
{
    int n = 1;

    cout << "Enter n : ";
    cin >> n;

    int number[1000][2];
    int size = 0;

    if (n != 0)
    {
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                if (gcd(i, j) == 1)
                {
                    number[size][0] = j;
                    number[size][1] = i;
                    size++;
                }
            }
        }
        insertionSort(number, size);
        print(number, size);
    }
}