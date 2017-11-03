#include <iostream>
using namespace std;

void turn(int *array, int left, int right)
{
    for (int i = left; i <= (left + right) / 2; i++)
    {
        swap(array[i], array[left + right - i]);
    }
}

int main()
{
    int m = 0;
    int n = 0;
    cout << "Введите m" << endl;
    cin >> m;
    cout << "Введите n" << endl;
    cin >> n;
    int size = n + m;
    int array[2000];
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
    cout << "Исходный массив :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    turn(array, 0, m - 1);
    turn(array, m, size - 1);
    turn(array, 0, size - 1);
    cout << "Полученный массив :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
