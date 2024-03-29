#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: array to be sorted
 * @size: size of arr
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, swap;

	swap = 0;
	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if (!swap)
			break;
	}
}

