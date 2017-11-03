#include <iostream>
#include "heapSort.h"
using namespace std;

void createHeap(int *array, int size);
void renewHeap(int *array,int root, int size);

void createHeap(int *array,int size)
{
    for (int i = size / 2; i >= 0; i--)
    {
        renewHeap(array, i, size);
    }
}

void renewHeap(int *array,int root, int size)
{
    int left = 0;
    int right = 0;
    int maxChildren = 0;

    while (2 * root + 1 < size)
    {
        left = 2 * root + 1;
        right = 2 * root + 2;
        maxChildren = root;

        if (array[left] > array[root] && left < size)
        {
            root = left;
        }
        if (array[right] > array[root] && right < size)
        {
            root = right;
        }

        if (maxChildren != root)
        {
            swap(array[maxChildren], array[root]);
        }
        else
        {
            break;
        }
    }
}

void heapSort(int *array, int size)
{
    createHeap(array, size);

    while (size > 1)
    {
        swap(array[0], array[size - 1]);
        size--;
        renewHeap(array, 0, size);
    }
}