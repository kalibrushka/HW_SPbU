#include <iostream>
using namespace std;

int main()
{
    int max = 2000;
    char array[max];
    cout << "Введите строку" << endl;
    fgets(array, max, stdin);
    int counter = 0;
    for (int i = 0; i < sizeof(array); i++)
    {
        if (array[i] == '(')
        {
            counter++;
        }
        if (array[i] == ')')
        {
            counter--;
        }
        if (counter < 0)
        {
            break;
        }
    }
    if (counter == 0)
    {
        cout << "Есть баланс";
    }
    else
    {
        cout << "Баланса нет";
    }
}