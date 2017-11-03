#include <iostream>
#include "amount.h"
using namespace std;

int occurrences(char string1[], char string2[])
{
    int result = 0;
    bool coincide = false;
    int j = 0;
    for (int i = 0; i < strlen(string1) - strlen(string2 + 1); i++)
    {
        if (string1[i] == string2[0])
        {
            coincide = true;
            while (coincide && j < strlen(string2) - 1)
            {
                if (string1[i + j] == string2[j])
                {
                    coincide = true;
                }
                else
                {
                    coincide = false;
                }
                j++;
            }
            j = 0;
            if (coincide)
            {
                result++;
            }
        }
    }
    return result;
}