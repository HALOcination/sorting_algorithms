#include "sort.h"

/**
* swap_items - Swaps two int in an array
* @array: the array
* @left: 1st int to swap
* @right: 2nd int to swap
*
* BY: HALO
*
*/

void swap_items(int *array, size_t left, size_t right)
{
	int elm;

	if (array != NULL)
	{
		elm = array[left];
		array[left] = array[right];
		array[right] = elm;
	}
}

/**
* quick_sort_range_lomuto - Sorts a sub array
* @array: array
* @up: starting point
* @down: finish point
* @size: array size
*
* BY: HALO
*
*/

void quick_sort_range_lomuto(int *array, size_t up, size_t down, size_t size)
{
	size_t n, m;
	int rot;

	if ((up >= down) || (array == NULL))
		return;
	rot = array[down];
	n = up;
	for (m = up; m < down; m++)
	{
		if (array[m] <= rot)
		{
			if (n != m)
			{
				swap_items(array, n, m);
				print_array(array, size);
			}
			n++;
		}
	}
	if (n != down)
	{
		swap_items(array, n, down);
		print_array(array, size);
	}
	if (n - up > 1)
		quick_sort_range_lomuto(array, up, n - 1, size);
	if (down - n > 1)
		quick_sort_range_lomuto(array, n + 1, down, size);
}

/**
* quick_sort - sorts an array of integers in ascending order
* @array: array
* @size: array size
*
* BY: HALO
*
*/
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quick_sort_range_lomuto(array, 0, size - 1, size);
	}
}
