#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	bool swap;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swap = false;
		for (j = i; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				swap = true;
				print_array(array, size);
			}
		}
		if (swap == false)
            break;
	}
}
