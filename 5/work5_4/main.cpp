#include <iostream>
#include <string.h>
using namespace std;

bool isEmpty(char *string)
{
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] != ' ' && string[i] != '\t' && string[i] != '\n')
            return true;
    }
    return false;
}

int main()
{
    int const maxSize = 1000;
    char string[maxSize] = {'\0'};
    int count = 0;

    FILE *fstring = fopen("file.txt", "r");

    while (!feof(fstring))
    {
        fgets(string, maxSize, fstring);
        if (isEmpty(string))
            count++;
    }

    fclose(fstring);

    cout << count << " non-empty strings in file";
}
