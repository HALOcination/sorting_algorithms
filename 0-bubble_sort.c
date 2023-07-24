#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order
* @array: array of int
* @size: size
*
* BY: HALO
*
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, len;

	if (!array || size == 0)
		return;

	do {
		len = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				len = 0;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}

	} while (len == 0);
}
