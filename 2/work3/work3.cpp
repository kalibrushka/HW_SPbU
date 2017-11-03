#include <iostream>
using namespace std;

void print(int *array, int size)
{
    for (int i = size - 1; i > 1; i--)
    {
        cout << array[i] << "+";
    }
    cout << array[1] << endl;
}

void decompose(int *array, int n, int max, int position)
{
    int border = 0;
    int i = 1;

    if (n <= 0)
    {
        print(array,position);
    }
    else
    {
        while (i <= max)
        {
            array[position] = i;
            if ((n - i) < i)
            {
                border = n - i;
            }
            else
            {
                border = i;
            }
            decompose(array, n - i, border, position + 1);
            i++;
        }
    }
}

int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int *array = new int[n];
    
    decompose(array, n, n - 1, 1);
    
    delete []array;
}