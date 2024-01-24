#include "sort.h"

/**
 * partition - sorts an arrray using quickksort technique
 * @lb: array lower bound
 * @ub: array upper bound
 * @size: array size
 * @arr: pointer to the array
 *
 * Return: void
*/
void partition(int *arr, int lb, int ub, size_t size)
{
	int pivot = arr[ub];
	int start = lb, end = ub - 1, temp;

	if (lb < ub)
	{

		while (start <= end)
		{

			while (arr[start] <= pivot && start <= end)
			{
				start++;
			}

			while (arr[end] > pivot && start <= end)
			{
				end--;
			}
			if (start < end)
			{
				temp = arr[start];
				arr[start] = arr[end];
				arr[end] = temp;
				print_array(arr, size);
			}
		}
		if (start != ub)
			/*avoid same element swapping */
		{
			temp = arr[start];
			arr[start] = arr[ub];
			arr[ub] = temp;
			print_array(arr, size);
		}
		partition(arr, lb, start - 1, size);
		partition(arr, start + 1, ub, size);
	}
}
/**
 * quick_sort - sorts an array using quick sort technique
 * @arr: array to sort
 * @size: array size
 *
 * Return: void
*/
void quick_sort(int *arr, size_t size)
{
	if (arr == NULL || size < 2)
		return;

	partition(arr, 0, size - 1, size);
}
