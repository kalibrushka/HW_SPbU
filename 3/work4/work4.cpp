#include <iostream>
#include <ctime>
using namespace std;

void intArray(int *array, int size, int number)
{
    int i = 0;
    while (number > 0)
    {
        array[i] = number % 10;
        number = number / 10;
        i++;
    }
}

void playGame(int secret, int number)
{
    int bulls = 0;
    int cows = 0;
    const int size = 4;

    int arraySecret[size];
    intArray(arraySecret, size, secret);
    int arrayNumber[size];
    intArray(arrayNumber, size, number);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arrayNumber[i] == arraySecret[j])
            {
                if (i != j)
                {
                    cows++;
                }
                else
                {
                    bulls++;
                }
                break;
            }
        }
    }

    cout << "Bulls : " << bulls << endl << "Cows : " << cows << endl ;
}

int createNumber()
{
    srand (time(NULL));
    const int size = 4;
    int result = 0;
    int arrayResult[size];

    arrayResult[0] = rand() % 9 + 1;
    for (int i = 1; i < size; i++)
    {
        arrayResult[i] = rand() % 10;
        bool escape = true;
        do
        {
            escape = true;
            for (int k = i - 1; k >= 0; k--)
            {
                if (arrayResult[i] == arrayResult[k])
                {
                    escape = false;
                    arrayResult[i] = rand() % 10;
                }
            }
        }
        while (!escape);
    }

    for (int i = 0; i < size; i++)
    {
        result = result * 10 + arrayResult[i];
    }

    return result;
}

int main()
{
    int number = 0;
    cout << "Enter your number: ";
    cin >> number;

    int secret = createNumber();

    while (number != secret)
    {
        playGame(secret, number);
        cout << "Enter your number again: ";
        cin >> number;
    }

    cout << "You win :)";
}