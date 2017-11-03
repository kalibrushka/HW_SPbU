#include <iostream>
#include "qsort.h"
using namespace std;

void quickSort(int *array, int first, int last)
{
    int left = first;
    int right = last;
    int middle = array[(left + right) / 2];
    while (left <= right)
    {
        while (array[left] < middle)
        {
            left++;
        }
        while (array[right] > middle)
        {
            right--;
        }
        if (left <= right)
        {
            swap(array[left], array[right]);
            left++;
            right--;
        }
    }
    if (left < last)
    {
        quickSort(array, left, last);
    }
    if (right > first)
    {
        quickSort(array, first, right);
    }
}
