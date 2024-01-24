#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {1, 3, 5, 7, 9, 11, 14,, 16, 18, 20, 23, 26, 27, 29, 31, 32, 34, 36, 39, 41, 43, 49};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);

    return (0);
}