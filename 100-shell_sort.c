#include "sort.h"

/**
 * shell_sort - sorts an array using shell sort
 * @array: array to sort
 * @size: array size
 *
 * Return: void
*/

void shell_sort(int *array, size_t size)
{
	int gap = 1, i, j, k;
	int temp;

	if (!array || size < 2)
		return;

	k = (int)size;

	while (gap < k / 3)
		gap = 3 * gap + 1;

	while (gap > 0)
	{
		for (i = gap; i < k; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				if (array[j] > array[j + gap])
				{
					temp = array[j];
					array[j] = array[j + gap];
					array[j + gap] = temp;
				}
				else
					break;
			}
		}
		gap = gap / 3;
		print_array(array, size);
	}
}
