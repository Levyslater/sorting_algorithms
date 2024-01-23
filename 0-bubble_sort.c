#include "sort.h"

/**
 * bubble_sort - sorts an arrray using bbble sort technique
 * @array: the array to sort
 * @size: array size
 * Description: implementation of bubble sort using arrays
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag = 1, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 0;
				print_array(array, size);
			}
		}
		if (flag)
			break;
	}
}
