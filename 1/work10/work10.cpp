#include <iostream>
using namespace std;

bool ispalindrome(char string[])
{
    int left = 0;
    int right = strlen(string) - 2;
    bool palindrome = true;
    while (left < right && palindrome)
    {
        while (string[left] == ' ')
        {
            left++;
        }
        while (string[right] == ' ')
        {
            right--;
        }
        if (string[left] != string[right])
        {
            palindrome = false;
            cout << left << tolower(string[left])<< endl << right << endl;
        }
        left++;
        right--;
    }
    return palindrome;
}

int main()
{
    int max = 2000;
    char array[max];
    cout << "Введите строку" << endl;
    fgets(array, max, stdin);
    if (ispalindrome(array))
    {
        cout << "Строка является палиндромом";
    }
    else
    {
        cout << "Строка не является палиндромом";
    }
}