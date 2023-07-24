#include "sort.h"
#include <stdio.h>


/**
* selection_sort -  sorts an array of integers in ascending order
* @array: array of int
* @size: array size
*
* BY: HALO
*
*
*/

void selection_sort(int *array, size_t size)
{
	size_t n, m, min;
	int elm;

	for (m = 0; m < size - 1; m++)
	{
		min = m;
		for (n = m + 1; n < size; n++)
		{
			if (array[n] < array[min])
				min = n;
		}

		if (min != m)
		{
			elm = array[m];
			array[m] = array[min];
			array[min] = elm;
			print_array(array, size);
		}
	}
}
