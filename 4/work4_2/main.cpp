#include <iostream>
#include <fstream>
using namespace std;

void printNewString(char *string, int left, int right)
{
    int size = right - left;
    char *newString = new char[size];
    int counter = 0;

    int const sizeChar = 256;
    bool count[sizeChar] = {false};

    for (int i = left; i < right; i++)
    {
        if (!count[(int) string[i]])
        {
            newString[counter] = string[i];
            counter++;
            count[(int) string[i]] = true;
        }
    }

    for (int i = 0; i < counter; i++)
    {
        char o = newString[i];
        cout << newString[i];
    }

    delete []newString;
}

int main()
{
    int const maxSize = 1000;
    char string[maxSize] = {'\0'};
    int i = 0;
    int start = 0;

    FILE *fstring = fopen("file.txt", "r");

    while (!feof(fstring))
    {
        char c = fgetc(fstring);
        if(c == ' ' )
        {
            printNewString(string, start, i);
            cout << " ";
            start = i;
        }
        else
        {
            string[i] = c;
            i++;
        }
    }

    printNewString(string, start, i - 1);

    fclose(fstring);
}

