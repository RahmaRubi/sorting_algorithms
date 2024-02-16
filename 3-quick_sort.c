#include "sort.h"
#include <stdio.h>

/**
* swap - swaps two integers
* @a: first integer
* @b: second integer
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
* partition - partitions the array around the pivot
* @array: array
* @l: start index
* @r: end index
* @size: array size
* Return: pivot position
*/
int partition(int *array, int l, int r, size_t size)
{
	int pivot = array[r];
	int smaller = l - 1;
	int i;

	for (i = l; i < r; i++)
	{
		if (array[i] < pivot)
		{
			smaller++;
			if (i != smaller)
				swap(&array[smaller], &array[i]), print_array(array, size);
		}
	}

	swap(&array[smaller + 1], &array[r]);
	print_array(array, size);

	return (smaller + 1);
}


/**
* quick_sort_rec - recursive function for quick sort
* @array: array
* @l: left index
* @r: right index
* @size: size
*/
void quick_sort_rec(int *array, int l, int r, size_t size)
{
	if (l < r)
	{
		int pivot = partition(array, l, r, size);

		quick_sort_rec(array, l, pivot - 1, size);
		quick_sort_rec(array, pivot + 1, r, size);
	}
}


/**
* quick_sort - array sorting
* @array: array
* @size: array size
*/

void quick_sort(int *array, size_t size)
{
	if (size <= 1)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}

