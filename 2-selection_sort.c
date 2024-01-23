#include "sort.h"

/**
 * delection_sort - sorts an array using selection sort
 * @array: array to sort
 * @size: array size
 * 
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
    size_t i, j, min;
    int temp;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size; i++)
    {
        min = i; 

        for (j = i + 1; j < size; j++)
        {
            if (array[min] > array[j])
                min = j;
        }
        if (min != i) /*incase of a sorted list*/
            {
            temp = array[min];
            array[min] = array[i];
            array[i] = temp;
            print_array(array, size);
            }
    }
}