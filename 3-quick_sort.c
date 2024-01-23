#include <stdio.h>

void partition(int *arr, int lb, int ub)
{
    if (lb < ub )
    {
        int pivot = arr[ub], i;
        int index = lb, temp;

        for (i = lb; i < ub; i++)
        {
            if (arr[i] <= pivot)
            {
                temp = arr[i];
                arr[i] = arr[index];
                arr[index] = temp;
                index++;
            }

        }
        temp = arr[index];
        arr[index]  = arr[ub];
        arr[ub] = temp;
        partition(arr, lb, index - 1);
        partition(arr, index + 1, ub);
    }
}

void quickSort(int *arr, int size)
{
    partition(arr, 0, size - 1);
}