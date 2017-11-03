#include <iostream>
using namespace std;

int minNumber(int number)
{
    int result = 0;
    const int sizeArray = 10;
    int array[sizeArray];

    for (int i = 0; i < sizeArray; i++)
    {
        array[i] = 0;
    }

    while (number > 0)
    {
        array[number % 10]++;
        number = number / 10;
    }

    for (int i = 1; i < sizeArray; i++)
    {
        if (array[i] != 0)
        {
            array[i]--;
            result = i;
            break;
        }
    }

    for (int i = 0; i < sizeArray; i++)
    {
        if (array[i] != 0)
        {
            int j = 0;
            while (j < array[i])
            {
                result = result * 10 + i;
                j++;
            }
        }
    }

    return result;
}

int main()
{
    int number = 0;

    cout << "Enter number : ";
    cin >> number;

    cout << "Minimal number: " << minNumber(number);
}