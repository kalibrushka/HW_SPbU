#include <iostream>
#include <cstring>
using namespace std;

bool checkEquality(char string1[], char string2[])
{
    if (strlen(string1) != strlen(string2))
    {
        return false;
    }

    const int size = 257;
    int intString1[size];
    int intString2[size];

    for (int i = 0; i < size; i++)
    {
        intString1[i] = 0;
        intString2[i] = 0;
    }

    for (int i = 0; i < strlen(string1); i++)
    {
        intString1[(int) string1[i]]++;
        intString2[(int) string2[i]]++;
    }

    for (int i = 0; i < size; i++)
    {
      if (intString1[i] != intString2[i])
      {
          return false;
      }
    }

    return true;
}

int main()
{
    const int maxsize = 1000;
    char *string1 = new char[maxsize];
    char *string2 = new char[maxsize];

    cout << "Enter first string : ";
    fgets(string1, maxsize, stdin);

    cout << "Enter second string : ";
    fgets(string2, maxsize, stdin);

    if (checkEquality(string1, string2))
    {
        cout << "From the first string you can get the second string.";
    }
    else
    {
        cout << "From the first string you don't can get the second string";
    }

    delete []string1;
    delete []string2;
}