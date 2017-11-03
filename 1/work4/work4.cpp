#include <iostream>
using namespace std;

int main()
{
    const int number = 28;
    const int qt = 9;
    int array[number];
    for (int i = 0; i < number; i++)
    {
        array[i] = 0;
    }
    for (int i = 0; i <= qt; i++)
    {
        for (int j = 0; j <= qt; j++)
        {
            for (int k = 0; k <= qt; k++)
            {
                array[i + j + k]++;
            }
        }
    }
    int result = 0;
    for (int i = 0; i < number; i++)
    {
        result = result + array[i] * array[i];
    }
    cout << "Всего счастливых билетов " << result;
}